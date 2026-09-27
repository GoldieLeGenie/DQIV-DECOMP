#pragma once
#include "globaldefs.h"

struct TownDoorAction;

extern "C" {
    TownDoorAction* func_ov000_021267dc(void);                                      // TownDoorAction::getSingleton
    void func_ov000_0212711c(TownDoorAction* self, int door, int type);
}

struct TownDoorAction {
    char unk_00[0x20];
    int crackOrin_;                                                                 // 0x20
};
