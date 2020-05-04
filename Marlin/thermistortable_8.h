/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// R25 = 100 kOhm, beta25 = 3950 K, 10 kOhm pull-up, NTCS0603E3104FHT
const short temptable_8[][2] PROGMEM = {
  { OV(  96), 206 },
  { OV( 107), 200 },
  { OV( 119), 194 },
  { OV( 132), 188 },
  { OV( 147), 182 },
  { OV( 164), 176 },
  { OV( 183), 170 },
  { OV( 204), 164 },
  { OV( 227), 158 },
  { OV( 253), 152 },
  { OV( 282), 146 },
  { OV( 313), 140 },
  { OV( 384), 128 },
  { OV( 465), 116 },
  { OV( 508), 110 },
  { OV( 553), 104 },
  { OV( 599),  98 },
  { OV( 644),  92 },
  { OV( 688),  86 },
  { OV( 731),  80 },
  { OV( 772),  74 },
  { OV( 810),  68 },
  { OV( 844),  62 },
  { OV( 875),  56 },
  { OV( 902),  50 },
  { OV( 925),  44 },
  { OV( 945),  38 },
  { OV( 962),  32 },
  { OV( 976),  26 },
  { OV( 987),  20 },
  { OV( 995),  14 },
  { OV(1002),   8 },
  { OV(1008),   2 },
  { OV(1023),   0 }
};
