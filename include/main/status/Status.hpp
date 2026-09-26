#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"

namespace status{
    struct Status {
        static int flagShopIndex_;          // data_020bc80c
        static void initialize();
        static void initialize_character();
        static void setEventParty(unsigned int index);
        static void setEventFlag(unsigned int index);
        static void setFlagShopIndex(int index);
        static void setFlagShopExec();
    };
}

extern const unsigned int data_0208c9fc;
extern const int data_020b5d64;

extern "C" {
    void func_02057f80(void* data);
}
