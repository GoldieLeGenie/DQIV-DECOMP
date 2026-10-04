#pragma once
#include <globaldefs.h>

struct TextureObject {
    unsigned char unk_00[0x70];                 // 0x00

    TextureObject();
    ~TextureObject();
    int unkfunc_02086aa4();                     // palette address
    int unkfunc_02086ab4();                     // palette size
};
