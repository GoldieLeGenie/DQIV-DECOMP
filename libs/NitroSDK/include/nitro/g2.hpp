#pragma once
#include "nitro/gx.h"

// OAM shape (attr0 shape | attr1 size) and color mode values for G2_SetOBJAttr
#define GX_OAM_SHAPE_8x8        0x00000000
#define GX_OAM_SHAPE_16x8       0x00004000
#define GX_OAM_SHAPE_16x16      0x40000000
#define GX_OAM_SHAPE_32x16      0x80004000
#define GX_OAM_SHAPE_32x32      0x80000000
#define GX_OAM_COLORMODE_16     0x0000
#define GX_OAM_COLORMODE_256    0x2000
#define GX_OAM_MODE_NORMAL      0
#define GX_OAM_EFFECT_NONE      0
#define GX_OAM_EFFECT_FLIP_H    0x10000000
#define GX_OAM_EFFECT_FLIP_V    0x20000000

inline void G2_SetOBJAttr(GXOamAttr* oam, int x, int y, int priority, int mode, int mosaic, int effect, int shape,
                          int color, int charName, int cParam, int rsParam)
{
    oam->attr01 = (u32)((y & 0xff) | (mode << 10) | (mosaic << 12) | effect | color | shape | ((x & 0x1ff) << 16) |
                        (rsParam << 25));
    oam->attr2 = (u16)(charName | (priority << 10) | (cParam << 12));
}
