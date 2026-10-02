#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/dss/Pad.hpp"

namespace cmn{
    struct CommonCounterInfo{
        int waitCounter_;
        int waitMax_;
        unsigned char dayCounter_[16];
        unsigned char freeCounter_[4];
        void initialize();
        bool isEndWaitCounter();
        void setWaitZero(int frame);
        int checkBottun();
        int setDayCounter(int index, unsigned char value);
        void setChangeDay();
        int isEndDayCounter(int index);
    };
    extern CommonCounterInfo g_CommonCounterInfo;
}





struct UnkTouchPanel {                           // DS touch-panel state 
    char unk_00[0x18];
    int touch_;                                  // 0x18
    int x_;                                      // 0x1C
    int y_;                                      // 0x20
};
extern UnkTouchPanel data_0211a5d4;
extern "C"  int func_0203690c();                  // isAnyKeyPush — check global pad

 

