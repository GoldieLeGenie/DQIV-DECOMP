#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"


struct TownPlayerManager {
    virtual void setPosition(dss::Fx32Vector3& pos);
    virtual dss::Fx32Vector3 getPosition();
    virtual short getDirection();
    virtual void resetParty();

    int flagMapLink_;                       // 0x04
    int unk_8;                              // 0x08
    int unk_c;                              // 0x0C
    char unk_010[0x12fc - 0x10];
    int unk_12fc;                           // 0x12FC
    char unk_1300[0x16c4 - 0x1300];
    int unk_16c4;                           // 0x16C4
    char unk_16c8[0x1720 - 0x16c8];
    int unk_1720;                           // 0x1720
    char unk_1724[0x1764 - 0x1724];
    int unk_1764;                           // 0x1764

    void setLockRot(int lock) { unk_16c4 = lock; }
};
