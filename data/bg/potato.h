#ifndef POTATO_MAP_H
#define POTATO_MAP_H

#define potato_data_length 128
const unsigned char potato_data[] = {
	  0,   0,  30,  30,  30,   2,   0,   0,  14,  51,  51,   2,   0,   0,  14,  62, 
	 62,   2,  51,  51,   2,  60,  60,   2,  15,  15,   2,  51,  51,   2,  30,  30, 
	  2,   0,   0,   6,  51,  51,   8,  30,  30,   2,   0,   0,   6,  59,  59,   2, 
	 63,  63,   4,  55,  55,   2,  51,  51,   2,   0,   0,   6,  51,  51,   8,  62, 
	 62,   2,   0,   0,   6,  51,  51,   2,  63,  63,   2,  51,  51,   4,  62,  62, 
	  2,   0,   0,   6,  59,  59,   2,  31,  31,   2,  14,  14,   2,  28,  28,   2, 
	 24,  24,   2,   0,   0,  16,   7,   0,  24,   0,  32,   0,   0,  11, 254,   0, 
	  1,   0,   0,  15, 224,   0,  24,   0,   0,   7,   1,   0,   1,   0,   0,   3, 
	  3,   3,   2,   7,   7,   2,  64,   0, 128,   0, 128,   0,   0,   7, 192, 192, 
	  2, 224, 224,   2,   6,   0,   1,   0,   0,  15, 128,   0,  64,   0,  48,   0, 
	 14,   0,   1,   0,  60,  60,   2, 126, 126,   2,   0,   0,  10, 192,   0,  48, 
	  0,  12,   0,   0,  13, 120, 120,   2, 252, 252,   2,   0,   0,  14,   1,   1, 
	  2,   0,   0,  10, 120, 120,   2, 252, 252,   2, 253, 253,   2,   0,   0,  14, 
	248, 248,   2,   0,   0,  14, 254, 254,   2,   7,   7,   8,  15,  15,   2,  31, 
	 31,   6, 224, 224,   8, 248, 248,   2, 252, 252,   6,   0,   0,   8,  63,  63, 
	  2, 127, 127,   6,   0,   0,   8, 224, 224,   2, 249, 249,   4, 253, 253,   2, 
	126, 126,   8, 255, 255,   8,   3,   0,   0,   7, 128, 128,   2, 192, 192,   4, 
	193, 193,   2,   0,   0,   2, 192,   0,  32,   0,  16,   0,   8,   0,   4,   0, 
	  0,   3, 254, 254,   2,   0,   0,   8,   1,   1,   2,   3,   3,   6, 252, 252, 
	  8, 255, 255,   8,   0,   0,   8,   7,   7,   2, 143, 143,   6,   0,   0,   8, 
	252, 252,   2, 255, 255,   6,   0,   0,   6,  30,  30,   2,  63,  63,   6, 191, 
	191,   2,   0,   0,   8,  62,  62,   2, 127, 127,   4, 255, 255,   2,   0,   0, 
	 12, 128, 128,   4,   1,   1,  16, 255, 255,  10, 254, 254,   2, 252, 252,   4, 
	254, 254,   2, 255, 255,   8,  15,  15,   2,   7,   7,   6,  15,  15,   2, 143, 
	143,   2, 159, 159,   2, 223, 223,   8, 255, 255,  12, 135, 135,   2,   3,   3, 
	  2, 159, 159,   2, 223, 223,   2, 207, 207,   2, 231, 231,  10, 252, 252,   4, 
	248, 248,   2, 224, 224,   6, 236, 224, 237, 225, 127, 127,   2,  63,  63,   2, 
	  0,   0,   4,  63,  63,   2, 255, 255,   6, 253, 253,   4, 252, 252,   2, 124, 
	124,   2, 252, 252,   8, 255, 255,   6, 126, 126,  10, 199, 199,   2, 207, 207, 
	  2, 143, 143,   2,  31,  31,  10, 128, 128,   2, 192, 192,   4, 224, 224,   4, 
	231, 231,   2, 239, 239,   4,   3,   3,   4,   1,   1,   2,   0,   0,   4, 248, 
	248,   2, 252, 252,   4, 255, 255,   6, 252, 252,  10, 143, 143,   2, 135, 135, 
	  2,   0,   0,   4,   7,   7,   2,  31,  31,   4,  63,  63,   2, 255, 255,   4, 
	 31,  31,   2,  15,  15,   2, 255, 255,   8, 191, 191,  16, 255, 255,   8,  31, 
	 31,   8, 128, 128,  16, 252, 252,   8, 254, 254,   2, 255, 255,   6,   7,   7, 
	  8,  15,  15,   2, 255, 255,   6, 223, 223,  14, 159, 159,   2,   3,   3,  10, 
	135, 135,   2, 255, 255,   4, 231, 231,  16, 237, 225, 237, 225, 237, 225, 237, 
	225, 229, 225, 249, 249,   2, 253, 253,   4, 255, 255,   2, 240, 240,   2, 224, 
	224,   8, 240, 240,   2, 255, 255,   2, 252, 252,   4, 124, 124,   8, 252, 252, 
	  2, 253, 252, 126, 126,  10, 127, 127,   4, 255, 127,  31,  31,  10, 159, 159, 
	  2, 223, 223,   4, 239, 239,   2, 231, 231,   2, 224, 224,   2, 232, 224, 232, 
	224, 232, 224, 232, 224, 224,   2, 232, 252, 252,   2, 248, 248,   2,   0,   0, 
	 12, 252, 252,  10, 255, 255,   6,  63,  63,   2,  62,  62,   2,  60,  60,   8, 
	190, 190,   2, 191, 191,   2, 255, 255,   2,  31,  31,   2,  15,  15,   8,  31, 
	 31,   2, 255, 255,   2,  31,  31,  16, 255, 255,   6, 249, 249,   2, 248, 248, 
	  8, 255, 255,   4, 254, 254,   2, 252, 252,   2,   0,   0,   8, 159, 159,   2, 
	 15,  15,   4,   7,   7,   2,   1,   1,   2,   0,   0,   6, 255, 255,   8, 254, 
	254,   2,   0,   0,   6, 231, 231,   2, 199, 199,   4, 131, 131,   2,   1,   1, 
	  2,   0,   0,   6, 253, 253,   4, 252, 252,   4, 251, 248,   3,   4,   1,   2, 
	  0,   1, 255, 255,   8,  62,  62,   2, 225,   0, 255,   0, 255,   0, 253, 252, 
	253, 252, 125, 124, 125, 124, 187,  56, 199,   0, 255,   0, 255,   0, 255, 127, 
	255, 127, 255, 127, 191,  63, 223,  31, 240,   0, 255,   0, 255,   0, 223, 223, 
	  2, 207, 207,   4, 215, 199, 185, 129, 126,   0, 255,   0, 255,   0, 255, 255, 
	  8, 254, 254,   2,   1,   0, 255,   0, 255,   0, 224, 232, 208, 200, 208, 200, 
	160, 144,  96,  16, 224,  16, 192,  32, 192,  32, 255, 255,   6, 127, 127,   2, 
	 63,  63,   2,   0,   0,   6, 191, 191,   4, 159, 159,   4,   7,   7,   2,   0, 
	  0,   6, 255, 255,   4, 239, 239,   4, 199, 199,   2,   0,   0,   6, 191, 191, 
	  8,  30,  30,   2,   0,   0,   6,  31,  31,   8,  15,  15,   2,   0,   0,   6, 
	128, 128,   8,   0,   0,   8,   1,   1,  12,   0,   0,   4, 248, 248,  12, 240, 
	240,   2,   0,   0,   2, 127, 128,  63,  64,  15,  48,   3,  12,   0,   3,   0, 
	  0,   6, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0,  31, 224,   0,  31, 
	  0,   0,   2, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0,   0, 
	  2, 255,   0,   0,   2, 255,   0, 255,   0, 255,   0, 255,   0, 252,   3, 192, 
	 60,   0, 192,   0,   0,   2, 255,   0, 254,   1, 240,  14, 128, 112,   0, 128, 
	  0,   0,   6, 128,  64,   0, 128,   0,   0,  22,  96, 127, 191, 192,  63, 192, 
	  0,   0,  10,  64, 192,  80, 176,  56, 200,   0,   0,  10,   3,   3,   2,   2, 
	  3,   1,   1,   2,   2,   3,  20,  23,  28,  31,  28,  23,  60,  51,   0, 255, 
	255,   2,   1, 123, 133, 127, 128, 127, 128, 127,   0, 191,   0, 207,   0, 228, 
	 26, 222,  51,  59, 247, 252,   4, 232,  20, 254,   2, 252,   2, 255,   1, 124, 
	  1, 208,  33, 222,  33,   0,   0,   8,   1,   1,   4,   0,   0,   4,  96,  96, 
	  2, 252, 156, 254, 162, 254, 186, 238,  42, 254,  50, 222, 210,  12,  12,   2, 
	231, 249,  76, 115, 120,  71,  64, 127,  51,  63,  15,  15,   2,  11,  12,  31, 
	 16, 252, 247, 116, 159, 107, 188, 175, 248, 247, 252, 127, 179, 239,  48, 175, 
	112, 109,  51, 157, 243,  81, 255, 234,  62, 108, 188, 232, 184, 192,  32, 128, 
	 64,   7,   7,   2,  15,   8,  15,   8,  15,  10,  15,  11,  30,  26,  62,  34, 
	110,  66,   0,   0,   2, 128, 128,   2, 192,  64, 192,  64, 192,  64, 128, 128, 
	  2,   0,   0,  13,   1,   0,   1,   0,   1,   0,   1,  63,  63,   2, 127,  64, 
	143, 241, 113, 142, 248,   7, 242,  15, 249,   7, 249,   7, 246, 249, 191, 223, 
	220, 228, 228,   2,  60,  88, 184, 136, 120,  20, 252, 170, 254, 128, 128,   2, 
	  0,   0,   8,  31,  31,   2,  63,  32, 127,  64,  60,  36,  24,  24,   2,   0, 
	  0,   6, 255, 255,   3,   0, 255,   0,   0,  11, 255, 255,   3,   0, 255,   0, 
	  0,  11, 240, 240,   2, 248,   8, 252,   4,   0,   1,   1,  15, 251,   5, 225, 
	 24,  14, 242, 237, 225,  52,  20, 167, 131,  36,  36,   2, 235, 203, 245, 207, 
	242,  71, 123,  35,  62,  63, 240, 127, 192, 255, 255,   3, 252, 252,   2,  63, 
	192, 127, 128, 255, 255,   2,  98, 157, 100, 155, 196,  59, 255, 255,   2,  48, 
	 48,   2, 255,   0, 255,   3, 252, 255,   0, 255,   1, 255, 254, 254,   2, 224, 
	224,   2,   0,   0,   2, 255,   0, 255, 255,   2,   0, 255,   0, 255, 255,   3, 
	  6,   6,   2,   4,   6,   4,   6, 254,   6, 254, 254,   2,  62, 254,  60, 252, 
	248, 248,   2,   0,   0,   6, 127, 127,   2, 255, 255,   4,   0,   0,  10, 248, 
	252, 200, 204, 128, 128,   2,   0,   0,  10,  48,  48,   2,   0,   0,  14
};

#define potato_tiles_width 20
#define potato_tiles_height 18
#define potato_offset 0
const unsigned char potato_tiles[] = {
	  0,   0,  26,   1,   1,   2,   2,   2,   2,   3,   0,   3,   2,   0,   0,  12, 
	  4,   5,   5,   2,   6,   7,   0,   8,   9,   0,   0,  12,  10,  11,  12,   0, 
	  0,  16,  13,  14,   0,  15,  16,  17,   0,   0,   3,  18,   0,   0,   5,  19, 
	 20,  21,  19,  22,  23,  24,  25,  26,  27,  28,  29,   0,  30,  31,  32,  33, 
	 34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,  45,  46,  47,  41,  48, 
	 49,  50,  51,  52,  53,  54,  55,  37,  56,  57,  58,  59,  60,  61,  62,  63, 
	 64,  65,  59,  66,  67,  68,  69,  70,  53,  71,  55,  37,  72,  73,  74,  75, 
	 76,  77,  78,  79,  80,  81,  82,  83,   0,  84,  85,  86,  87,  88,  89,  90, 
	 91,   0,   0,   5,  92,  93,  94,  95,  96,  97,   0,   0,  40,  19,  98,  99, 
	  0,   0,  16, 100, 101, 102, 103, 104, 105,   0,   0,  15, 106, 107, 108, 109, 
	110,   0,   0,  14, 111, 112, 113, 114, 115, 116, 117,   0,   0,  13, 118, 119, 
	120, 121, 122, 123, 124,   0,   0,  14, 125, 126, 127,   0,   0,  24
};

#endif
