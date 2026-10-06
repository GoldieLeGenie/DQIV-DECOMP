#pragma once
#include <globaldefs.h>

struct TextureObject {
    unsigned char unk_00[0x20];                 // 0x00
    int unk_20;                                 // 0x20 texture format
    int unk_24;                                 // 0x24 width (GX size S)
    int unk_28;                                 // 0x28 height (GX size T)
    unsigned char unk_2c[0x44];                 // 0x2C

    TextureObject();
    ~TextureObject();
    int unkfunc_02086a94();                     // texture address
    int unkfunc_02086aa4();                     // palette address
    int unkfunc_02086ab4();                     // palette size
};
