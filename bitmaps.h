/*
 * 6/8/2016
 * Copyright (C) 2016 Edward Kahler
 * All rights reserved.
 * 
 * Sprites http://www.andrewlowndes.co.uk/blog/graphics/arduboy-image-converter
 * http://community.arduboy.com/t/arduboy-image-converter/111/4
 * */

PROGMEM const byte BITMAP_heart [] = {
  7,7,
  0x0E, 0x1F, 0x3F, 0x7E, 0x3F, 0x1F, 0x0E
};

PROGMEM const byte BITMAP_Man_Right [] = {
  15,15,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x0F, 0xF8, 
0x1F, 0xFC, 0x1F, 0xFC, 0x3F, 0xF0, 0x3F, 0x80, 
0x3E, 0x00, 0x3F, 0x80, 0x3F, 0xF0, 0x1F, 0xFC, 
0x1F, 0xFC, 0x0F, 0xF8, 0x03, 0xE0, 0x00, 0x00};

// pac_man.png
// 16x16
PROGMEM const unsigned char pac_open_R[] = {
// width, height
16, 16,
0xE0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 0x7F, 0x3F, 0x1F, 0x0F, 
0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1F, 0x3F, 0x7F, 
0x7F, 0x7F, 0xFE, 0xFC, 0xF8, 0xF0, 0x60, 0x40, 0x00, 0x00, 
0x00, 0x00,

0xE0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 0xFF, 0x7F, 0x7F, 0x3F, 
0x3E, 0x3E, 0x1E, 0x1C, 0x18, 0x00, 0x07, 0x1F, 0x3F, 0x7F, 
0x7F, 0x7F, 0xFF, 0xFE, 0xFE, 0xFC, 0x7C, 0x7C, 0x78, 0x38, 
0x18, 0x00,

0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x0F, 0x1F, 0x3F, 0x7F, 
0xFE, 0xFE, 0xFE, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 
0x40, 0x60, 0xF0, 0xF8, 0xFC, 0xFE, 0x7F, 0x7F, 0x7F, 0x3F, 
0x1F, 0x07,

0x00, 0x18, 0x1C, 0x1E, 0x3E, 0x3E, 0x3F, 0x7F, 0x7F, 0xFF, 
0xFE, 0xFE, 0xFE, 0xFC, 0xF8, 0xE0, 0x00, 0x18, 0x38, 0x78, 
0x7C, 0x7C, 0xFC, 0xFE, 0xFE, 0xFF, 0x7F, 0x7F, 0x7F, 0x3F, 
0x1F, 0x07

};


PROGMEM const unsigned char pac_close_R[] = {
// width, height
16, 16,
0xE0, 0xF8, 0xFC, 0xFE, 0xFE, 0xFE, 0xFF, 0x7F, 0x7F, 0x3F, 
0x3E, 0x3E, 0x1E, 0x1C, 0x18, 0x00, 0x07, 0x1F, 0x3F, 0x7F, 
0x7F, 0x7F, 0xFF, 0xFE, 0xFE, 0xFC, 0x7C, 0x7C, 0x78, 0x38, 
0x18, 0x00

};
