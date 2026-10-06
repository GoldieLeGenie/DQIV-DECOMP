#pragma once
#include <globaldefs.h>

// DS-only VRAM transfer queue
struct UnkVramTransfer {
    void unkfunc_020861c4(int texSize, int plttSize);   // init the texture/palette VRAM managers
    void unkfunc_02086278();
    int unkfunc_0208627c(int size);            // allocates a texture block, returns its handle
    void unkfunc_020862a0(int handle);         // frees a texture block
    int unkfunc_020862bc(int handle);          // address of a texture block
    int unkfunc_020862c8(int handle);          // size of a texture block
    void unkfunc_02086378(int type, void* src, int address, int size, int flag);
};

extern UnkVramTransfer data_0211e450;
