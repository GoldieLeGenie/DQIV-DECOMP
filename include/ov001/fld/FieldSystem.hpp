#pragma once
#include "globaldefs.h"

struct FieldSystem;

extern "C" FieldSystem* func_ov001_02127458(void);                                  // FieldSystem::getSingleton

struct FieldSystem {
    char unk_000[0x614];
    int exitSound_;                                                                 // 0x614
};
