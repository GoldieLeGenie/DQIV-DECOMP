#pragma once
#include <globaldefs.h>

namespace param {
    struct EventFlag {                                 // data/param/param_player_flag.dat
        unsigned short scenario1;                       // 0x00
        unsigned short scenario2;                       // 0x02
        unsigned short scenario3;                       // 0x04
        unsigned short flag1;                           // 0x06
        unsigned short flag2;                           // 0x08
        char byte_1;                                    // 0x0A
        char byte_2;                                    // 0x0B
        char byte_3;                                    // 0x0C
        char byte_4;                                    // 0x0D
        unsigned char dmmy0;                            // 0x0E
        unsigned char dmmy1;                            // 0x0F

        static int data_;                               // data_020edba0 (ExcelBinaryData)
        static const char* filename_[];                 // data_020be9a0
    };
}
