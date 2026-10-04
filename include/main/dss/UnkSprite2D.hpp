#pragma once
#include <globaldefs.h>
#include "main/dss/Billboard.hpp"
#include "main/data/DataObject.hpp"
#include "main/dss/Render.hpp"

struct UnkSprite2D : RenderObject {
    int unk_14;                                 // 0x14
    int unk_18;                                 // 0x18
    int unk_1c;                                 // 0x1C
    int unk_20;                                 // 0x20
    int unk_24;                                 // 0x24
    int unk_28;                                 // 0x28
    int unk_2c;                                 // 0x2C
    short unk_30;                               // 0x30
    short unk_32;                               // 0x32
    int unk_34;                                 // 0x34

    UnkSprite2D();
    void unkfunc_02084534(int x, int y);
    void unkfunc_0208456c(int w, int h);
    void unkfunc_02084578(int u0, int v0, int u1, int v1);
};

struct UnkMenuSprite {
    Render* render_;                            // 0x00
    DataObject data_;                           // 0x04
    void* texture_;                             // 0x14
    UnkSprite2D sprite_;                        // 0x18

    UnkMenuSprite();
    ~UnkMenuSprite();
    void unkfunc_02057d1c();
    void unkfunc_02057d2c();
    void unkfunc_02057d40();
    int unkfunc_02057d50();
    void unkfunc_02057d60(const char* filename, int a);
    void unkfunc_02057d88(void* addr);
    void unkfunc_02057dac();
    void unkfunc_02057e34();
    void unkfunc_02057e58(Render* render);
    int unkfunc_02057e74();
    void unkfunc_02057e88(int x, int y);
    void unkfunc_02057e98(int w, int h);
    void unkfunc_02057ea8(int u0, int v0, int u1, int v1);
    void unkfunc_02057ec0();
    void unkfunc_02057ed4(int enable);
    void unkfunc_02057edc();
    void unkfunc_02057ee8();
    void unkfunc_02057ef4();
    void unkfunc_02057f00(int a);
    void unkfunc_02057f18(int polygonID);
    void unkfunc_02057f30(int a);
    void unkfunc_02057f38(int a);
    void unkfunc_02057f40(unsigned char r, unsigned char g, unsigned char b);
};

void unkfunc_020847e8();
void unkfunc_020848a8();
void unkfunc_02084964();
