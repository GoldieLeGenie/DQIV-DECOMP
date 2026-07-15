#pragma once
#include "main/dss/DssUtils.hpp"
#include <globaldefs.h>


namespace param{
    struct MonsterAnim    
    {
        dss::fx32 scale;
        unsigned short monster;
        unsigned short action;
        unsigned short sound;
        unsigned short hitframe;
        unsigned short startframe;
        unsigned short wait;
        unsigned char anim;
        unsigned char effect;
        unsigned char animfile;
        unsigned char camera;
        unsigned char camera2;
        char byte_1;
        unsigned char dmmy0;
        unsigned char dmmy1;
        static unsigned short getDataIndex(int index);
        int getAnimData(unsigned int monsterId, unsigned short actionId, unsigned short animId);
    };
}

extern unsigned short data_020bc2f4[];
