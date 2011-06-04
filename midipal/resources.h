// Copyright 2011 Olivier Gillet.
//
// Author: Olivier Gillet (ol.gillet@gmail.com)
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources


#ifndef MIDIPAL_RESOURCES_H_
#define MIDIPAL_RESOURCES_H_


#include "avrlib/base.h"

#include <avr/pgmspace.h>


#include "avrlib/resources_manager.h"
namespace midipal {

typedef uint8_t ResourceId;

extern const prog_char* string_table[];

extern const prog_uint16_t* lookup_table_table[];

extern const prog_uint8_t* character_table[];

extern const prog_uint8_t chr_res_digits_10[] PROGMEM;
#define STR_RES_MIDIPAL_ 0  // midipal!
#define STR_RES_SNDOFF 1  // sndOff
#define STR_RES_RSTCTR 2  // rstCtr
#define STR_RES_NOTOFF 3  // notOff
#define STR_RES_OMNOFF 4  // omnOff
#define STR_RES_OMNION 5  // omniOn
#define STR_RES_MONOON 6  // monoOn
#define STR_RES_POLYON 7  // polyOn
#define STR_RES_SYSX__ 8  // sysx..
#define STR_RES__SYSX_ 9  // .sysx.
#define STR_RES___SYSX 10  // ..sysx
#define STR_RES_START 11  // start
#define STR_RES_STOP 12  // stop
#define STR_RES_CONT_ 13  // cont.
#define STR_RES_RESET 14  // reset
#define STR_RES_CHN 15  // chn
#define STR_RES_ALL 16  // all
#define STR_RES_1 17  // 1
#define STR_RES_2 18  // 2
#define STR_RES_3 19  // 3
#define STR_RES_4 20  // 4
#define STR_RES_5 21  // 5
#define STR_RES_6 22  // 6
#define STR_RES_7 23  // 7
#define STR_RES_8 24  // 8
#define STR_RES_9 25  // 9
#define STR_RES_10 26  // 10
#define STR_RES_11 27  // 11
#define STR_RES_12 28  // 12
#define STR_RES_13 29  // 13
#define STR_RES_14 30  // 14
#define STR_RES_15 31  // 15
#define STR_RES_16 32  // 16
#define STR_RES_FLT 33  // flt
#define STR_RES_OFF 34  // off
#define STR_RES_ON 35  // on
#define CHR_RES_DIGITS_10 0
#define CHR_RES_DIGITS_10_SIZE 56
typedef avrlib::ResourcesManager<
    ResourceId,
    avrlib::ResourcesTables<
        string_table,
        lookup_table_table> > ResourcesManager; 

}  // namespace midipal

#endif  // MIDIPAL_RESOURCES_H_
