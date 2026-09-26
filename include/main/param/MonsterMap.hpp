#pragma once
#include <globaldefs.h>


namespace param {
    struct MonsterMap {
        unsigned short tileID;
        unsigned char section;
        char floorID[8];
        unsigned char dmmy0;
        static int getFloorIndex(param::MonsterMap* data, int section, char* name);
    };
}

extern "C" int func_020882b0(const char*, const char*);                   // strcmp
