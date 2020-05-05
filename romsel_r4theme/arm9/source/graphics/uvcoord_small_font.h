/*======================================================================

   small_font texture coordinates

======================================================================*/


#ifndef SMALL_FONT__H
#define SMALL_FONT__H
#define SMALL_FONT_BITMAP_WIDTH  512
#define SMALL_FONT_BITMAP_HEIGHT 128
#define SMALL_FONT_NUM_IMAGES    427

// U,V,Width,Height

#define TEXT_SY 11
		//	Format:
		//	U,V,Width,Height

static constexpr unsigned int small_font_texcoords[] = {
    0,   0,  2,  TEXT_SY, // space
    10,  0,  3,  TEXT_SY, // exclam
    20,  0,  5,  TEXT_SY, // quotedbl
    30,  0,  8,  TEXT_SY, // numbersign
    40,  0,  6,  TEXT_SY, // dollar
    50,  0,  8,  TEXT_SY, // percent
    60,  0,  7,  TEXT_SY, // ampersand
    70,  0,  2,  TEXT_SY, // quotesingle
    80,  0,  4,  TEXT_SY, // parenleft
    90,  0,  4,  TEXT_SY, // parenright
    100, 0,  8,  TEXT_SY, // asterisk
    110, 0,  6,  TEXT_SY, // plus
    120, 0,  3,  TEXT_SY, // comma
    130, 0,  6,  TEXT_SY, // hyphen
    140, 0,  2,  TEXT_SY, // period
    150, 0,  4,  TEXT_SY, // slash
    160, 0,  6,  TEXT_SY, // zero
    170, 0,  3,  TEXT_SY, // one
    180, 0,  6,  TEXT_SY, // two
    190, 0,  6,  TEXT_SY, // three
    200, 0,  7,  TEXT_SY, // four
    210, 0,  6,  TEXT_SY, // five
    220, 0,  6,  TEXT_SY, // six
    230, 0,  6,  TEXT_SY, // seven
    240, 0,  6,  TEXT_SY, // eight
    250, 0,  6,  TEXT_SY, // nine
    260, 0,  2,  TEXT_SY, // colon
    270, 0,  3,  TEXT_SY, // semicolon
    280, 0,  4,  TEXT_SY, // less
    290, 0,  6,  TEXT_SY, // equal
    300, 0,  4,  TEXT_SY, // greater
    310, 0,  6,  TEXT_SY, // question
    320, 0,  8,  TEXT_SY, // at
    330, 0,  6,  TEXT_SY, // A
    340, 0,  6,  TEXT_SY, // B
    350, 0,  6,  TEXT_SY, // C
    360, 0,  6,  TEXT_SY, // D
    370, 0,  5,  TEXT_SY, // E
    380, 0,  5,  TEXT_SY, // F
    390, 0,  6,  TEXT_SY, // G
    400, 0,  6,  TEXT_SY, // H
    410, 0,   4,  TEXT_SY, // I
    420, 0,  5,  TEXT_SY, // J
    430, 0,  6,  TEXT_SY, // K
    440, 0,  5,  TEXT_SY, // L
    450, 0,  6,  TEXT_SY, // M
    460, 0,  6,  TEXT_SY, // N
    470, 0,  6,  TEXT_SY, // O
    480, 0,  6,  TEXT_SY, // P
    490, 0,  6,  TEXT_SY, // Q
    500, 0,  6,  TEXT_SY, // R
    0,   11, 5,  TEXT_SY, // S
    10,  11, 6,  TEXT_SY, // T
    20,  11, 6,  TEXT_SY, // U
    30,  11, 6,  TEXT_SY, // V
    40,  11, 6,  TEXT_SY, // W
    50,  11, 6,  TEXT_SY, // X
    60,  11, 6,  TEXT_SY, // Y
    70,  11, 5,  TEXT_SY, // Z
    80,  11, 4,  TEXT_SY, // bracketleft
    90,  11, 4,  TEXT_SY, // backslash
    100, 11, 4,  TEXT_SY, // bracketright
    110, 11, 5,  TEXT_SY, // asciicircum
    120, 11, 6,  TEXT_SY, // underscore
    130, 11, 4,  TEXT_SY, // grave
    140, 11, 6,  TEXT_SY, // a
    150, 11, 6,  TEXT_SY, // b
    160, 11, 6,  TEXT_SY, // c
    170, 11, 6,  TEXT_SY, // d
    180, 11, 6,  TEXT_SY, // e
    190, 11, 5,  TEXT_SY, // f
    200, 11, 6,  TEXT_SY, // g
    210, 11, 6,  TEXT_SY, // h
    220, 11, 2,  TEXT_SY, // i
    230, 11, 4,  TEXT_SY, // j
    240, 11, 5,  TEXT_SY, // k
    250, 11, 3,  TEXT_SY, // l
    260, 11, 8,  TEXT_SY, // m
    270, 11, 6,  TEXT_SY, // n
    280, 11, 6,  TEXT_SY, // o
    290, 11, 6,  TEXT_SY, // p
    300, 11, 6,  TEXT_SY, // q
    310, 11, 5,  TEXT_SY, // r
    320, 11, 5,  TEXT_SY, // s
    330, 11, 5,  TEXT_SY, // t
    340, 11, 6,  TEXT_SY, // u
    350, 11, 6,  TEXT_SY, // v
    360, 11, 6,  TEXT_SY, // w
    370, 11, 6,  TEXT_SY, // x
    380, 11, 6,  TEXT_SY, // y
    390, 11, 6,  TEXT_SY, // z
    400, 11, 5,  TEXT_SY, // braceleft
    410, 11,  3,  TEXT_SY, // bar
    420, 11, 5,  TEXT_SY, // braceright
    430, 11, 10, TEXT_SY, // asciitilde
    440, 11, 3,  TEXT_SY, // exclamdown
    450, 11, 7,  TEXT_SY, // cent
    460, 11, 6,  TEXT_SY, // sterling
    470, 11, 6,  TEXT_SY, // currency
    480, 11, 6,  TEXT_SY, // yen
    490, 11, 2,  TEXT_SY, // brokenbar
    500, 11, 5,  TEXT_SY, // section
    0,   22, 4,  TEXT_SY, // dieresis
    10,  22, 10, TEXT_SY, // copyright
    20,  22, 5,  TEXT_SY, // ordfeminine
    30,  22, 6,  TEXT_SY, // guillemotleft
    40,  22, 6,  TEXT_SY, // logicalnot
    50,  22, 10, TEXT_SY, // registered
    60,  22, 4,  TEXT_SY, // degree
    70,  22, 6,  TEXT_SY, // plusminus
    80,  22, 4,  TEXT_SY, // uni00B2
    90,  22, 4,  TEXT_SY, // uni00B3
    100, 22, 3,  TEXT_SY, // acute
    110, 22, 6,  TEXT_SY, // mu
    120, 22, 7,  TEXT_SY, // paragraph
    130, 22, 2,  TEXT_SY, // periodcentered
    140, 22, 6,  TEXT_SY, // guillemotright
    150, 22, 5,  TEXT_SY, // questiondown
    160, 22, 6,  TEXT_SY, // Agrave
    170, 22, 6,  TEXT_SY, // Aacute
    180, 22, 6,  TEXT_SY, // Acircumflex
    190, 22, 6,  TEXT_SY, // Atilde
    200, 22, 6,  TEXT_SY, // Adieresis
    210, 22, 6,  TEXT_SY, // Aring
    220, 22, 8,  TEXT_SY, // AE
    230, 22, 5,  TEXT_SY, // Ccedilla
    240, 22, 5,  TEXT_SY, // Egrave
    250, 22, 5,  TEXT_SY, // Eacute
    260, 22, 5,  TEXT_SY, // Ecircumflex
    270, 22, 5,  TEXT_SY, // Edieresis
    280, 22, 4,  TEXT_SY, // Igrave
    290, 22, 4,  TEXT_SY, // Iacute
    300, 22, 4,  TEXT_SY, // Icircumflex
    310, 22, 4,  TEXT_SY, // Idieresis
    320, 22, 6,  TEXT_SY, // Eth
    330, 22, 6,  TEXT_SY, // Ntilde
    340, 22, 6,  TEXT_SY, // Ograve
    350, 22, 6,  TEXT_SY, // Oacute
    360, 22, 6,  TEXT_SY, // Ocircumflex
    370, 22, 6,  TEXT_SY, // Otilde
    380, 22, 6,  TEXT_SY, // Odieresis
    390, 22, 6,  TEXT_SY, // multiply
    400, 22, 10,  TEXT_SY, // Oslash
    410, 22,  6,  TEXT_SY, // Ugrave
    420, 22, 6,  TEXT_SY, // Uacute
    430, 22, 6,  TEXT_SY, // Ucircumflex
    440, 22, 6,  TEXT_SY, // Udieresis
    450, 22, 6,  TEXT_SY, // Yacute
    460, 22, 5,  TEXT_SY, // Thorn
    470, 22, 6,  TEXT_SY, // germandbls
    480, 22, 6,  TEXT_SY, // agrave
    490, 22, 6,  TEXT_SY, // aacute
    500, 22, 6,  TEXT_SY, // acircumflex
    0,   33, 6,  TEXT_SY, // atilde
    10,  33, 6,  TEXT_SY, // adieresis
    20,  33, 6,  TEXT_SY, // aring
    30,  33, 8,  TEXT_SY, // ae
    40,  33, 5,  TEXT_SY, // ccedilla
    50,  33, 6,  TEXT_SY, // egrave
    60,  33, 6,  TEXT_SY, // eacute
    70,  33, 6,  TEXT_SY, // ecircumflex
    80,  33, 6,  TEXT_SY, // edieresis
    90,  33, 3,  TEXT_SY, // igrave
    100, 33, 4,  TEXT_SY, // iacute
    110, 33, 4,  TEXT_SY, // icircumflex
    120, 33, 4,  TEXT_SY, // idieresis
    130, 33, 5,  TEXT_SY, // eth
    140, 33, 6,  TEXT_SY, // ntilde
    150, 33, 6,  TEXT_SY, // ograve
    160, 33, 6,  TEXT_SY, // oacute
    170, 33, 6,  TEXT_SY, // ocircumflex
    180, 33, 6,  TEXT_SY, // otilde
    190, 33, 6,  TEXT_SY, // odieresis
    200, 33, 6,  TEXT_SY, // divide
    210, 33, 7,  TEXT_SY, // oslash
    220, 33, 6,  TEXT_SY, // ugrave
    230, 33, 6,  TEXT_SY, // uacute
    240, 33, 6,  TEXT_SY, // ucircumflex
    250, 33, 6,  TEXT_SY, // udieresis
    260, 33, 6,  TEXT_SY, // yacute
    270, 33, 5,  TEXT_SY, // thorn
    280, 33, 6,  TEXT_SY, // ydieresis
    290, 33, 6,  TEXT_SY, // Ydieresis
    300, 33, 6,  TEXT_SY, // uni1E9E
    310, 33, 3,  TEXT_SY, // quoteleft
    320, 33, 4,  TEXT_SY, // quoteright
    330, 33, 3,  TEXT_SY, // quotesinglbase
    340, 33, 5,  TEXT_SY, // quotedblleft
    350, 33, 5,  TEXT_SY, // quotedblright
    360, 33, 5,  TEXT_SY, // quotedblbase
    370, 33, 4,  TEXT_SY, // bullet
    380, 33, 6,  TEXT_SY, // ellipsis
    390, 33, 4,  TEXT_SY, // guilsinglleft
    400, 33, 4,  TEXT_SY, // guilsinglright
    410, 33,  7,  TEXT_SY, // Euro
    420, 33, 10, TEXT_SY, // trademark
    430, 33, 10, TEXT_SY, // arrowleft
    440, 33, 10, TEXT_SY, // arrowup
    450, 33, 10, TEXT_SY, // arrowright
    460, 33, 10, TEXT_SY, // arrowdown
    470, 33, 10, TEXT_SY, // uni2427
    480, 33, 10, TEXT_SY, // uni2428
    490, 33, 10, TEXT_SY, // uni2429
    500, 33, 10, TEXT_SY, // uni242A
    0,   44, 11, TEXT_SY, // uni242B
    10,  44, 10, TEXT_SY, // uni242C
    20,  44, 10, TEXT_SY, // uni242D
    30,  44, 10, TEXT_SY, // uni242E
    40,  44, 10, TEXT_SY, // uni242F
    50,  44, 10, TEXT_SY, // uni2430
    60,  44, 10, TEXT_SY, // filledbox
    70,  44, 10, TEXT_SY, // H22073
    80,  44, 10, TEXT_SY, // triagup
    90,  44, 10, TEXT_SY, // uni25B3
    100, 44, 10, TEXT_SY, // triagdn
    110, 44, 10, TEXT_SY, // uni25BD
    120, 44, 10, TEXT_SY, // uni25C6
    130, 44, 10, TEXT_SY, // uni25C7
    140, 44, 10, TEXT_SY, // circle
    150, 44, 10, TEXT_SY, // uni25CE
    160, 44, 10, TEXT_SY, // H18533
    170, 44, 10, TEXT_SY, // uni2600
    180, 44, 10, TEXT_SY, // uni2601
    190, 44, 10, TEXT_SY, // uni2602
    200, 44, 8,  TEXT_SY, // uni2603
    210, 44, 10, TEXT_SY, // uni2605
    220, 44, 10, TEXT_SY, // uni2606
    230, 44, 6,  TEXT_SY, // uni260E
    240, 44, 10, TEXT_SY, // uni2613
    250, 44, 10, TEXT_SY, // uni2639
    260, 44, 10, TEXT_SY, // smileface
    270, 44, 10, TEXT_SY, // invsmileface
    280, 44, 10, TEXT_SY, // spade
    290, 44, 10, TEXT_SY, // club
    300, 44, 10, TEXT_SY, // heart
    310, 44, 10, TEXT_SY, // diamond
    320, 44, 9,  TEXT_SY, // uni3041
    330, 44, 10, TEXT_SY, // uni3042
    340, 44, 8,  TEXT_SY, // uni3043
    350, 44, 10, TEXT_SY, // uni3044
    360, 44, 8,  TEXT_SY, // uni3045
    370, 44, 9,  TEXT_SY, // uni3046
    380, 44, 8,  TEXT_SY, // uni3047
    390, 44, 10, TEXT_SY, // uni3048
    400, 44, 10, TEXT_SY, // uni3049
    410, 44,  10, TEXT_SY, // uni304A
    420, 44, 10, TEXT_SY, // uni304B
    430, 44, 10, TEXT_SY, // uni304C
    440, 44, 10, TEXT_SY, // uni304D
    450, 44, 10, TEXT_SY, // uni304E
    460, 44, 8,  TEXT_SY, // uni304F
    470, 44, 10, TEXT_SY, // uni3050
    480, 44, 10, TEXT_SY, // uni3051
    490, 44, 10, TEXT_SY, // uni3052
    500, 44, 9,  TEXT_SY, // uni3053
    0,   55, 10, TEXT_SY, // uni3054
    10,  55, 9,  TEXT_SY, // uni3055
    20,  55, 10, TEXT_SY, // uni3056
    30,  55, 8,  TEXT_SY, // uni3057
    40,  55, 8,  TEXT_SY, // uni3058
    50,  55, 10, TEXT_SY, // uni3059
    60,  55, 10, TEXT_SY, // uni305A
    70,  55, 10, TEXT_SY, // uni305B
    80,  55, 10, TEXT_SY, // uni305C
    90,  55, 10, TEXT_SY, // uni305D
    100, 55, 10, TEXT_SY, // uni305E
    110, 55, 9,  TEXT_SY, // uni305F
    120, 55, 10, TEXT_SY, // uni3060
    130, 55, 9,  TEXT_SY, // uni3061
    140, 55, 10, TEXT_SY, // uni3062
    150, 55, 9,  TEXT_SY, // uni3063
    160, 55, 10, TEXT_SY, // uni3064
    170, 55, 10, TEXT_SY, // uni3065
    180, 55, 10, TEXT_SY, // uni3066
    190, 55, 11, TEXT_SY, // uni3067
    200, 55, 9,  TEXT_SY, // uni3068
    210, 55, 10, TEXT_SY, // uni3069
    220, 55, 10, TEXT_SY, // uni306A
    230, 55, 10, TEXT_SY, // uni306B
    240, 55, 10, TEXT_SY, // uni306C
    250, 55, 10, TEXT_SY, // uni306D
    260, 55, 10, TEXT_SY, // uni306E
    270, 55, 10, TEXT_SY, // uni306F
    280, 55, 10, TEXT_SY, // uni3070
    290, 55, 11, TEXT_SY, // uni3071
    300, 55, 10, TEXT_SY, // uni3072
    310, 55, 10, TEXT_SY, // uni3073
    320, 55, 10, TEXT_SY, // uni3074
    330, 55, 10, TEXT_SY, // uni3075
    340, 55, 10, TEXT_SY, // uni3076
    350, 55, 10, TEXT_SY, // uni3077
    360, 55, 10, TEXT_SY, // uni3078
    370, 55, 10, TEXT_SY, // uni3079
    380, 55, 10, TEXT_SY, // uni307A
    390, 55, 10, TEXT_SY, // uni307B
    400, 55, 10, TEXT_SY, // uni307C
    410, 55,  10, TEXT_SY, // uni307D
    420, 55, 10, TEXT_SY, // uni307E
    430, 55, 10, TEXT_SY, // uni307F
    440, 55, 10, TEXT_SY, // uni3080
    450, 55, 10, TEXT_SY, // uni3081
    460, 55, 9,  TEXT_SY, // uni3082
    470, 55, 9,  TEXT_SY, // uni3083
    480, 55, 10, TEXT_SY, // uni3084
    490, 55, 9,  TEXT_SY, // uni3085
    500, 55, 10, TEXT_SY, // uni3086
    0,   66, 9,  TEXT_SY, // uni3087
    10,  66, 9,  TEXT_SY, // uni3088
    20,  66, 9,  TEXT_SY, // uni3089
    30,  66, 8,  TEXT_SY, // uni308A
    40,  66, 10, TEXT_SY, // uni308B
    50,  66, 10, TEXT_SY, // uni308C
    60,  66, 8,  TEXT_SY, // uni308D
    70,  66, 9,  TEXT_SY, // uni308E
    80,  66, 10, TEXT_SY, // uni308F
    90,  66, 11, TEXT_SY, // uni3090
    100, 66, 11, TEXT_SY, // uni3091
    110, 66, 10, TEXT_SY, // uni3092
    120, 66, 10, TEXT_SY, // uni3093
    130, 66, 8,  TEXT_SY, // uni3094
    140, 66, 9,  TEXT_SY, // uni3095
    150, 66, 7,  TEXT_SY, // uni3096
    160, 66, 7,  TEXT_SY, // uni3099
    170, 66, 7,  TEXT_SY, // uni309A
    180, 66, 4,  TEXT_SY, // uni309B
    190, 66, 4,  TEXT_SY, // uni309C
    200, 66, 5,  TEXT_SY, // uni309D
    210, 66, 6,  TEXT_SY, // uni309E
    220, 66, 7,  TEXT_SY, // uni309F
    230, 66, 7,  TEXT_SY, // uni30A0
    240, 66, 9,  TEXT_SY, // uni30A1
    250, 66, 9,  TEXT_SY, // uni30A2
    260, 66, 8,  TEXT_SY, // uni30A3
    270, 66, 8,  TEXT_SY, // uni30A4
    280, 66, 8,  TEXT_SY, // uni30A5
    290, 66, 9,  TEXT_SY, // uni30A6
    300, 66, 8,  TEXT_SY, // uni30A7
    310, 66, 10, TEXT_SY, // uni30A8
    320, 66, 8,  TEXT_SY, // uni30A9
    330, 66, 10, TEXT_SY, // uni30AA
    340, 66, 10, TEXT_SY, // uni30AB
    350, 66, 10, TEXT_SY, // uni30AC
    360, 66, 9,  TEXT_SY, // uni30AD
    370, 66, 10, TEXT_SY, // uni30AE
    380, 66, 9,  TEXT_SY, // uni30AF
    390, 66, 10, TEXT_SY, // uni30B0
    400, 66, 9,  TEXT_SY, // uni30B1
    410, 66,  10, TEXT_SY, // uni30B2
    420, 66, 9,  TEXT_SY, // uni30B3
    430, 66, 10, TEXT_SY, // uni30B4
    440, 66, 10, TEXT_SY, // uni30B5
    450, 66, 10, TEXT_SY, // uni30B6
    460, 66, 9,  TEXT_SY, // uni30B7
    470, 66, 10, TEXT_SY, // uni30B8
    480, 66, 10, TEXT_SY, // uni30B9
    490, 66, 10, TEXT_SY, // uni30BA
    500, 66, 10, TEXT_SY, // uni30BB
    0,   77, 10, TEXT_SY, // uni30BC
    10,  77, 10, TEXT_SY, // uni30BD
    20,  77, 10, TEXT_SY, // uni30BE
    30,  77, 10, TEXT_SY, // uni30BF
    40,  77, 10, TEXT_SY, // uni30C0
    50,  77, 10, TEXT_SY, // uni30C1
    60,  77, 10, TEXT_SY, // uni30C2
    70,  77, 9,  TEXT_SY, // uni30C3
    80,  77, 10, TEXT_SY, // uni30C4
    90,  77, 10, TEXT_SY, // uni30C5
    100, 77, 10, TEXT_SY, // uni30C6
    110, 77, 10, TEXT_SY, // uni30C7
    120, 77, 7,  TEXT_SY, // uni30C8
    130, 77, 8,  TEXT_SY, // uni30C9
    140, 77, 10, TEXT_SY, // uni30CA
    150, 77, 9,  TEXT_SY, // uni30CB
    160, 77, 9,  TEXT_SY, // uni30CC
    170, 77, 10, TEXT_SY, // uni30CD
    180, 77, 8,  TEXT_SY, // uni30CE
    190, 77, 10, TEXT_SY, // uni30CF
    200, 77, 10, TEXT_SY, // uni30D0
    210, 77, 10, TEXT_SY, // uni30D1
    220, 77, 9,  TEXT_SY, // uni30D2
    230, 77, 9,  TEXT_SY, // uni30D3
    240, 77, 9,  TEXT_SY, // uni30D4
    250, 77, 9,  TEXT_SY, // uni30D5
    260, 77, 10, TEXT_SY, // uni30D6
    270, 77, 10, TEXT_SY, // uni30D7
    280, 77, 10, TEXT_SY, // uni30D8
    290, 77, 10, TEXT_SY, // uni30D9
    300, 77, 10, TEXT_SY, // uni30DA
    310, 77, 10, TEXT_SY, // uni30DB
    320, 77, 10, TEXT_SY, // uni30DC
    330, 77, 10, TEXT_SY, // uni30DD
    340, 77, 10, TEXT_SY, // uni30DE
    350, 77, 9,  TEXT_SY, // uni30DF
    360, 77, 10, TEXT_SY, // uni30E0
    370, 77, 9,  TEXT_SY, // uni30E1
    380, 77, 10, TEXT_SY, // uni30E2
    390, 77, 9,  TEXT_SY, // uni30E3
    400, 77, 10, TEXT_SY, // uni30E4
    410, 77,  9,  TEXT_SY, // uni30E5
    420, 77, 10, TEXT_SY, // uni30E6
    430, 77, 7,  TEXT_SY, // uni30E7
    440, 77, 8,  TEXT_SY, // uni30E8
    450, 77, 9,  TEXT_SY, // uni30E9
    460, 77, 8,  TEXT_SY, // uni30EA
    470, 77, 10, TEXT_SY, // uni30EB
    480, 77, 8,  TEXT_SY, // uni30EC
    490, 77, 9,  TEXT_SY, // uni30ED
    500, 77, 7,  TEXT_SY, // uni30EE
    0,   88, 9,  TEXT_SY, // uni30EF
    10,  88, 10, TEXT_SY, // uni30F0
    20,  88, 10, TEXT_SY, // uni30F1
    30,  88, 9,  TEXT_SY, // uni30F2
    40,  88, 10, TEXT_SY, // uni30F3
    50,  88, 10, TEXT_SY, // uni30F4
    60,  88, 8,  TEXT_SY, // uni30F5
    70,  88, 8,  TEXT_SY, // uni30F6
    80,  88, 10, TEXT_SY, // uni30F7
    90,  88, 11, TEXT_SY, // uni30F8
    100, 88, 11, TEXT_SY, // uni30F9
    110, 88, 11, TEXT_SY, // uni30FA
    120, 88, 6,  TEXT_SY, // uni30FB
    130, 88, 9,  TEXT_SY, // uni30FC
    140, 88, 5,  TEXT_SY, // uni30FD
    150, 88, 7,  TEXT_SY, // uni30FE
    160, 88, 8,  TEXT_SY, // uni30FF
    170, 88, 8,  TEXT_SY, // .notdef
    // 180, 88, 1,  TEXT_SY, // glyph1
    // 190, 88, 1,  TEXT_SY, // glyph2
};

static constexpr unsigned short int small_utf16_lookup_table[] = {
    u' ', u'!', u'"', u'#', u'$', u'%', u'&', u'\'', u'(', u'0', u'*', u'+', u',', u'-', u'.', u'/', u'0', u'1', u'2', u'3', u'4', u'5', u'6', u'7', u'8', u'9', u':', u';', u'<', u'=', u'>', u'?', u'@', u'A', u'B', u'C', u'D', u'E', u'F', u'G', u'H', u'I', u'J', u'K', u'L', u'M', u'N', u'O', u'P', u'Q', u'R',
    u'S', u'T', u'U', u'V', u'W', u'X', u'Y', u'Z', u'[', u'\\', u']', u'^', u'_', u'`', u'a', u'b', u'c', u'd', u'e', u'f', u'g', u'h', u'i', u'j', u'k', u'l', u'm', u'n', u'o', u'p', u'q', u'r', u's', u't', u'u', u'v', u'w', u'x', u'y', u'z', u'[', u'|', u']', u'~', u'¡', u'¢', u'£', u'¤', u'¥', u'¦', u'§',
    u'¨', u'©', u'ª', u'«', u'¬', u'®', u'°', u'±', u'²', u'³', u'´', u'µ', u'¶', u'·', u'»', u'¿', u'À', u'Á', u'Â', u'Ã', u'Ä', u'Å', u'Æ', u'Ç', u'È', u'É', u'Ê', u'Ë', u'Ì', u'Í', u'Î', u'Ï', u'Ð', u'Ñ', u'Ò', u'Ó', u'Ô', u'Õ', u'Ö', u'×', u'Ø', u'Ù', u'Ú', u'Û', u'Ü', u'Ý', u'Þ', u'ß', u'à', u'á', u'â',
    u'ã', u'ä', u'å', u'æ', u'ç', u'è', u'é', u'ê', u'ë', u'ì', u'í', u'î', u'ï', u'ð', u'ñ', u'ò', u'ó', u'ô', u'õ', u'ö', u'÷', u'ø', u'ù', u'ú', u'û', u'ü', u'ý', u'þ', u'ÿ', u'Ÿ', u'ẞ', u'‘', u'’', u'‚', u'“', u'“', u'„', u'•', u'…', u'‹', u'›', u'€', u'™', u'←', u'↑', u'→', u'↓', u'\u2427', u'\u2428', u'\u2429', u'\u242A',
    u'\u242B', u'\u242C', u'\u242D', u'\u242E', u'\u242F', u'\u2430', u'■', u'□', u'▲', u'△', u'▼', u'▽', u'◆', u'◇', u'○', u'◎', u'●', u'\u2600', u'\u2601', u'\u2602', u'\u2603', u'\u2605', u'\u2606', u'\u260E', u'\u2613', u'\u2639', u'☹', u'☻', u'♠', u'♣', u'♥', u'♦', u'\u3041', u'\u3042', u'\u3043', u'\u3044', u'\u3045', u'\u3046', u'\u3047', u'\u3048', u'\u3049', u'\u304A', u'\u304B', u'\u304C', u'\u304D', u'\u304E', u'\u304F', u'\u3050', u'\u3051', u'\u3052', u'\u3053',
    u'\u3054', u'\u3055', u'\u3056', u'\u3057', u'\u3058', u'\u3059', u'\u305A', u'\u305B', u'\u305C', u'\u305D', u'\u305E', u'\u305F', u'\u3060', u'\u3061', u'\u3062', u'\u3063', u'\u3064', u'\u3065', u'\u3066', u'\u3067', u'\u3068', u'\u3069', u'\u306A', u'\u306B', u'\u306C', u'\u306D', u'\u306E', u'\u306F', u'\u3070', u'\u3071', u'\u3072', u'\u3073', u'\u3074', u'\u3075', u'\u3076', u'\u3077', u'\u3078', u'\u3079', u'\u307A', u'\u307B', u'\u307C', u'\u307D', u'\u307E', u'\u307F', u'\u3080', u'\u3081', u'\u3082', u'\u3083', u'\u3084', u'\u3085', u'\u3086',
    u'\u3087', u'\u3088', u'\u3089', u'\u308A', u'\u308B', u'\u308C', u'\u308D', u'\u308E', u'\u308F', u'\u3090', u'\u3091', u'\u3092', u'\u3093', u'\u3094', u'\u3095', u'\u3096', u'\u3099', u'\u309A', u'\u309B', u'\u309C', u'\u309D', u'\u309E', u'\u309F', u'\u30A0', u'\u30A1', u'\u30A2', u'\u30A3', u'\u30A4', u'\u30A5', u'\u30A6', u'\u30A7', u'\u30A8', u'\u30A9', u'\u30AA', u'\u30AB', u'\u30AC', u'\u30AD', u'\u30AE', u'\u30AF', u'\u30B0', u'\u30B1', u'\u30B2', u'\u30B3', u'\u30B4', u'\u30B5', u'\u30B6', u'\u30B7', u'\u30B8', u'\u30B9', u'\u30BA', u'\u30BB',
    u'\u30BC', u'\u30BD', u'\u30BE', u'\u30BF', u'\u30C0', u'\u30C1', u'\u30C2', u'\u30C3', u'\u30C4', u'\u30C5', u'\u30C6', u'\u30C7', u'\u30C8', u'\u30C9', u'\u30CA', u'\u30CB', u'\u30CC', u'\u30CD', u'\u30CE', u'\u30CF', u'\u30D0', u'\u30D1', u'\u30D2', u'\u30D3', u'\u30D4', u'\u30D5', u'\u30D6', u'\u30D7', u'\u30D8', u'\u30D9', u'\u30DA', u'\u30DB', u'\u30DC', u'\u30DD', u'\u30DE', u'\u30DF', u'\u30E0', u'\u30E1', u'\u30E2', u'\u30E3', u'\u30E4', u'\u30E5', u'\u30E6', u'\u30E7', u'\u30E8', u'\u30E9', u'\u30EA', u'\u30EB', u'\u30EC', u'\u30ED', u'\u30EE',
    u'\u30EF', u'\u30F0', u'\u30F1', u'\u30F2', u'\u30F3', u'\u30F4', u'\u30F5', u'\u30F6', u'\u30F7', u'\u30F8', u'\u30F9', u'\u30FA', u'\u30FB', u'\u30FC', u'\u30FD', u'\u30FE', u'\u30FF', u'\uFFFF',
};

#endif