#ifndef FONT_h
#define FONT_h

#include <stdint.h>

// Font descriptor
typedef struct {
	uint8_t font_Width;       // Width of character
	uint8_t font_Height;      // Height of character
	uint8_t font_BPC;         // Bytes for one character
	uint8_t font_Scan;        // Font scan lines behavior
	uint8_t font_MinChar;     // Code of the first known symbol
	uint8_t font_MaxChar;     // Code of the last known symbol
	uint8_t font_UnknownChar; // Code of the unknown symbol
	uint8_t font_Data[];      // Font data
} Font_TypeDef;

#endif
