/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'StatusLogo.png'
 */
#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
  0xFF,0xFF,0xFF,0xFF,0xFE, // #######################################.
  0xC0,0x0F,0xE0,0x0E,0x0E, // ##..........#######.........###.....###.
  0x80,0x07,0xE0,0x0C,0x06, // #............######.........##.......##.
  0x8E,0x73,0xE3,0xFD,0xE2, // #...###..###..#####...########.####...#.
  0x9F,0xF9,0xE3,0xFF,0xF2, // #..##########..####...##############..#.
  0x99,0x99,0xE3,0xFF,0xE2, // #..##..##..##..####...#############...#.
  0x99,0x99,0xE3,0xFF,0xC6, // #..##..##..##..####...############...##.
  0x99,0x99,0xE0,0x1F,0x0E, // #..##..##..##..####........#####....###.
  0x99,0x99,0xE0,0x1F,0x06, // #..##..##..##..####........#####.....##.
  0x99,0x99,0xE3,0xFF,0xE2, // #..##..##..##..####...#############...#.
  0x99,0x99,0xE3,0xFF,0xF2, // #..##..##..##..####...##############..#.
  0x99,0x99,0xE3,0xFF,0xF2, // #..##..##..##..####...##############..#.
  0x99,0x99,0xE3,0xFF,0xE2, // #..##..##..##..####...#############...#.
  0x80,0x01,0xE0,0x0C,0x02, // #..............####.........##........#.
  0xC0,0x03,0xE0,0x0E,0x06, // ##............#####.........###......##.
  0xFF,0xFF,0xFF,0xFF,0xFE  // #######################################.
};



//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
