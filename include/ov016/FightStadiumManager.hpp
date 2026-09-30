#pragma once
#include "globaldefs.h"

struct FightStadiumManager {
    short monster_[4];          /* 0x00 */
    short orderNumber_[4];      /* 0x08 */
    short diameter_[4];         /* 0x10 */
    short encount_;             /* 0x18 */
    short cardCount_;           /* 0x1A */

    static FightStadiumManager* getSingleton();
    void setup();
    void battleStart();
    int getMonsterID(int index);
    int getOrderCount(int index);
    int getDiameter(int index);
};
