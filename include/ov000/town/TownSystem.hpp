#pragma once
#include "globaldefs.h"

struct TownSystem;

extern "C" TownSystem* func_ov000_02132228(void);                                   // TownSystem::getSingleton

struct TownSystem {
    char unk_000[0x608];
    int playExitSE_;                                                                // 0x608
    int defaultSELock_;                                                             // 0x60C
    int scriptLock_;                                                                // 0x610
    int trigger_;                                                                   // 0x614
};
