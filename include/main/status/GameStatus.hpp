#pragma once
#include <globaldefs.h>
#include "main/dss/Random.hpp"
#include "GameInfo.hpp"


namespace status{
    struct GameStatus {
        Language language;
        unsigned int playTime_;
        unsigned int uniqueID_;
        unsigned int getPlayTime();
        unsigned int getUniqueID();
        void resetUniqueID();
        void setPlayTime(unsigned int Playtime);
        void setUniqueID(unsigned int id);
        void addPlayTime(unsigned int time);
    };
    extern GameStatus g_Game; //data_020d0bc0
}

extern "C" void func_02079e24(unsigned char buffer[]);
