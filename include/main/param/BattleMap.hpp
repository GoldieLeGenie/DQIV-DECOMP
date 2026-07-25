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
extern char btl_[];//data_020bc638 btl_ [5]
extern char btldougu[];//data_020bc640 "btldougu" [9]
extern char btlyado[];//data_020bc64c "btlyado" [8]


extern "C" int  func_020882a4(char *name, char *prefix);
extern "C" int func_020882b0(const char*, const char*);                   // strcmp
