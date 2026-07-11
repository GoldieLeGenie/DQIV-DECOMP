#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"


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




extern "C" int func_0207f280(void* pad);        // getKeyHeld/getTrigger — pad
extern char data_02116d40[];                     // struct input 
extern "C"  int func_0203690c();                  // isAnyKeyPush — check global pad
extern "C"  int func_02008eb8(int a, int b);      // max(a, b)

 

