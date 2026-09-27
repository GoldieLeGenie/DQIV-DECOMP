#pragma once
#include "globaldefs.h"

struct ScriptSystem;

extern "C" ScriptSystem* func_0201f16c(void);                                       // ScriptSystem::getSingleton

struct ScriptSystem {
    char unk_00000[0x199dc];
    int executeEnable_;                                                             // 0x199DC
};
