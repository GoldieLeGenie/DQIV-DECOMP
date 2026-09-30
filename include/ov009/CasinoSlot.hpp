#pragma once
#include "globaldefs.h"

struct CasinoSlot {
    static CasinoSlot* getSingleton();
    void setSlotType(int type);
};
