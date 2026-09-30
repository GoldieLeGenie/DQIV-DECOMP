#pragma once
#include <globaldefs.h>

struct GlobalDQ4 {
    char __unk0[0x64];   // 0x00-0x63 : ???
    int part_id_;        // 
    char __unk1[0x10];   // 0x68-0x77 :  ??
};

extern GlobalDQ4 data_0210bb94;
