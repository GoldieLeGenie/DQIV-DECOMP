#pragma once
#include <globaldefs.h>
#include "main/dss/Billboard.hpp"
#include "main/data/DataObject.hpp"

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
};

struct UnkMenuSprite {
    int unk_00;                                 // 0x00
    DataObject data_;                           // 0x04
    int unk_14;                                 // 0x14
    UnkSprite2D sprite_;                        // 0x18

    UnkMenuSprite();
    ~UnkMenuSprite();
};

extern "C" {
    void func_02084534(UnkSprite2D* self, int x, int y);                  /* setPosition */
    void func_0208456c(UnkSprite2D* self, int w, int h);                  /* setSize */
    void func_020848a8(void);
    void func_02057d60(UnkMenuSprite* self, const char* filename, int a); /* setup */
    void func_02057e34(UnkMenuSprite* self);                              /* cleanup */
    void func_02057e88(UnkMenuSprite* self, int x, int y);                /* setPosition */
    void func_02057e98(UnkMenuSprite* self, int w, int h);                /* setSize */
    void func_02057ec0(UnkMenuSprite* self);                              /* draw */
    void func_02057ed4(UnkMenuSprite* self, int enable);
    void func_02057ef4(UnkMenuSprite* self);
    void func_02057f00(UnkMenuSprite* self, int a);
    void func_02057f18(UnkMenuSprite* self, int polygonID);
    void func_02057f30(UnkMenuSprite* self, int a);
    void func_02057f38(UnkMenuSprite* self, int a);
    void func_02057dac(UnkMenuSprite* self);
    void func_02057edc(UnkMenuSprite* self);
    void func_02057ee8(UnkMenuSprite* self);
    void func_02057ea8(UnkMenuSprite* self, int u0, int v0, int u1, int v1);
    void func_02057f40(UnkMenuSprite* self, unsigned char r, unsigned char g, unsigned char b);
    void func_020847e8(void);
}
