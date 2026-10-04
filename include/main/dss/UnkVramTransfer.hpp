#pragma once
#include <globaldefs.h>

// DS-only VRAM transfer queue
struct UnkVramTransfer {
    void unkfunc_020861c4(int texSize, int plttSize);   // init the texture/palette VRAM managers
    void unkfunc_02086278();
    void unkfunc_02086378(int type, void* src, int address, int size, int flag);
};

extern UnkVramTransfer data_0211e450;
