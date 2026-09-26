#pragma once
#include <globaldefs.h>


namespace param{
    struct BattleMap {
        unsigned char R;
        unsigned char G;
        unsigned char B;
        char map[13];
        static int getBattleMap(param::BattleMap *data, char *name);
    };
}



extern char btl_[8];
extern char btldougu[12];
extern char btlyado[8];

extern "C" int  func_020882a4(char *name, char *prefix);
extern "C" int func_020882b0(const char*, const char*);                   // strcmp
