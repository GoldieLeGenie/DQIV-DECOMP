#pragma once
#include <globaldefs.h>


namespace param {
    struct ColorCorrect {
        unsigned char backcolor;
        char floor[8];
        char byte_1;
        char byte_2;
        unsigned char dmmy0;
        static int getCorrectIndex(param::ColorCorrect *data, char *name);
    };   
}

extern "C" int func_020882b0(const char*, const char*);                   // strcmp
