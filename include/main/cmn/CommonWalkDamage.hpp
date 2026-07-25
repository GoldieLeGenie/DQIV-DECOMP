#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"

namespace cmn
{
    struct CommonWalkDamage
    {
        void* unk;
        int seCounter_;
        bool nextSe_;
        int nextSeType_;
        void setup();
        void clear();
    };
    
}