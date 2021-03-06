/*-----------------------------------------------------------------
 Copyright (C) 2015
	Matthew Scholefield

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

------------------------------------------------------------------*/

#include <nds.h>
#include <nds/dma.h>
#include <maxmod9.h>
#include "bios_decompress_callback.h"
#include "common/dsimenusettings.h"
#include "common/systemdetails.h"
#include "common/gl2d.h"
#include "graphics.h"
#include "lodepng.h"

#define CONSOLE_SCREEN_WIDTH 32
#define CONSOLE_SCREEN_HEIGHT 24

extern bool fadeType;
extern bool fadeColor;
bool controlTopBright = true;
bool controlBottomBright = true;
int screenBrightness = 31;

bool twlMenuSplash = false;
extern void twlMenuVideo_loadTopGraphics(void);
extern void twlMenuVideo_topGraphicRender(void);

bool doubleBuffer = false;
bool secondBuffer = false;

u16 frameBuffer[2][256*192];
u16 frameBufferBot[2][256*192];
u16* dsiSplashLocation = (u16*)0x02600000;

// Ported from PAlib (obsolete)
void SetBrightness(u8 screen, s8 bright) {
	u16 mode = 1 << 14;

	if (bright < 0) {
		mode = 2 << 14;
		bright = -bright;
	}
	if (bright > 31) bright = 31;
	*(u16*)(0x0400006C + (0x1000 * screen)) = bright + mode;
}

u16 convertToDsBmp(u16 val) {
	if (ms().colorMode == 1) {
		u16 newVal = ((val>>10)&31) | (val&31<<5) | (val&31)<<10 | BIT(15);

		u8 b,g,r,max,min;
		b = ((newVal)>>10)&31;
		g = ((newVal)>>5)&31;
		r = (newVal)&31;
		// Value decomposition of hsv
		max = (b > g) ? b : g;
		max = (max > r) ? max : r;

		// Desaturate
		min = (b < g) ? b : g;
		min = (min < r) ? min : r;
		max = (max + min) / 2;
		
		newVal = 32768|(max<<10)|(max<<5)|(max);

		b = ((newVal)>>10)&(31-6*ms().blfLevel);
		g = ((newVal)>>5)&(31-3*ms().blfLevel);
		r = (newVal)&31;

		return 32768|(b<<10)|(g<<5)|(r);
	} else {
		return ((val>>10)&31) | (val&(31-3*ms().blfLevel)<<5) | (val&(31-6*ms().blfLevel))<<10 | BIT(15);
	}
}

u16 convertVramColorToGrayscale(u16 val) {
	u8 b,g,r,max,min;
	b = ((val)>>10)&31;
	g = ((val)>>5)&31;
	r = (val)&31;
	// Value decomposition of hsv
	max = (b > g) ? b : g;
	max = (max > r) ? max : r;

	// Desaturate
	min = (b < g) ? b : g;
	min = (min < r) ? min : r;
	max = (max + min) / 2;

	return 32768|(max<<10)|(max<<5)|(max);
}

void vBlankHandler() {
	if(fadeType == true) {
		screenBrightness--;
		if (screenBrightness < 0) screenBrightness = 0;
	} else {
		screenBrightness++;
		if (screenBrightness > 31) screenBrightness = 31;
	}
	if (controlTopBright) SetBrightness(0, fadeColor ? screenBrightness : -screenBrightness);
	if (controlBottomBright) SetBrightness(1, fadeColor ? screenBrightness : -screenBrightness);
	if (doubleBuffer) {
		dmaCopyWordsAsynch(0, frameBuffer[secondBuffer], BG_GFX, 0x18000);
		dmaCopyWordsAsynch(1, frameBufferBot[secondBuffer], BG_GFX_SUB, 0x18000);
		secondBuffer = !secondBuffer;
	}
	if (twlMenuSplash) {
		twlMenuVideo_topGraphicRender();
	}
}

void LoadBMP(void) {
	dmaFillHalfWords(0, BG_GFX, 0x18000);
	dmaFillHalfWords(0, BG_GFX_SUB, 0x18000);

	std::vector<unsigned char> image;
	unsigned width, height;
	lodepng::decode(image, width, height, "nitro:/graphics/effect_twilight.png");
	for(unsigned i=0;i<image.size()/4;i++) {
		u16 color = image[i*4]>>3 | (image[(i*4)+1]>>3)<<5 | (image[(i*4)+2]>>3)<<10 | BIT(15);
		if (ms().colorMode == 1) {
			color = convertVramColorToGrayscale(color);
		}
		frameBuffer[0][i] = color;
	}
	image.clear();

	lodepng::decode(image, width, height, "nitro:/graphics/effect_menupp.png");
	for(unsigned i=0;i<image.size()/4;i++) {
		u16 color = image[i*4]>>3 | (image[(i*4)+1]>>3)<<5 | (image[(i*4)+2]>>3)<<10 | BIT(15);
		if (ms().colorMode == 1) {
			color = convertVramColorToGrayscale(color);
		}
		frameBuffer[1][i] = color;
	}
}

void runGraphicIrq(void) {
	*(u16*)(0x0400006C) |= BIT(14);
	*(u16*)(0x0400006C) &= BIT(15);
	SetBrightness(0, 31);
	SetBrightness(1, 31);

	irqSet(IRQ_VBLANK, vBlankHandler);
	irqEnable(IRQ_VBLANK);
}

void loadTitleGraphics() {
	videoSetMode(MODE_5_3D | DISPLAY_BG3_ACTIVE);
	videoSetModeSub(MODE_3_2D | DISPLAY_BG3_ACTIVE);

	// Initialize gl2d
	glScreen2D();
	// Make gl2d render on transparent stage.
	glClearColor(31,31,31,0);
	glDisable(GL_CLEAR_BMP);

	// Clear the GL texture state
	glResetTextures();

	// sprites
	vramSetBankA(VRAM_A_TEXTURE);
	vramSetBankB(VRAM_B_TEXTURE);
	vramSetBankC(VRAM_C_SUB_BG_0x06200000);
	vramSetBankD(VRAM_D_MAIN_BG_0x06000000);
	vramSetBankE(VRAM_E_TEX_PALETTE);
	vramSetBankF(VRAM_F_TEX_PALETTE_SLOT4);
	vramSetBankG(VRAM_G_TEX_PALETTE_SLOT5); // 16Kb of palette ram, and font textures take up 8*16 bytes.
	vramSetBankH(VRAM_H_SUB_BG_EXT_PALETTE);
	vramSetBankI(VRAM_I_SUB_SPRITE_EXT_PALETTE);

	REG_BG3CNT = BG_MAP_BASE(0) | BG_BMP16_256x256 | BG_PRIORITY(0);
	REG_BG3X = 0;
	REG_BG3Y = 0;
	REG_BG3PA = 1<<8;
	REG_BG3PB = 0;
	REG_BG3PC = 0;
	REG_BG3PD = 1<<8;
	REG_BLDCNT = BLEND_SRC_BG3 | BLEND_FADE_BLACK;
	REG_BLDY = 0;

	REG_BG3CNT_SUB = BG_MAP_BASE(0) | BG_BMP16_256x256 | BG_PRIORITY(0);
	REG_BG3X_SUB = 0;
	REG_BG3Y_SUB = 0;
	REG_BG3PA_SUB = 1<<8;
	REG_BG3PB_SUB = 0;
	REG_BG3PC_SUB = 0;
	REG_BG3PD_SUB = 1<<8;

	twlMenuVideo_loadTopGraphics();

	// Clear the background palettes
	for(int i = 0; i < 0xFF; i++) {
		BG_PALETTE[i] = 0;
		BG_PALETTE_SUB[i] = 0;
	}

	// Display TWiLightMenu++ logo
	LoadBMP();
}