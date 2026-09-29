#pragma once
#include "nitro/fx.hpp"
#include "nitro/reg.h"

extern "C" {
    void func_02065604(unsigned int fovySin, unsigned int fovyCos, fx32 aspect, fx32 n, fx32 f, fx32 scaleW, int load, MtxFx44* mtx);    // G3i_PerspectiveW_
    void func_02065a98(const VecFx32* camPos, const VecFx32* camUp, const VecFx32* target, int load, MtxFx43* mtx);                       // G3i_LookAt_
    void func_02065c9c(fx32 s, fx32 c);                                                                                                  // G3_RotZ
    void func_02065c24(fx32 s, fx32 c);                                                                                                  // G3_RotX
    void func_02065c60(fx32 s, fx32 c);                                                                                                  // G3_RotY
    int  func_02065544(int* result);                                                                                                     // G3_GetBoxTestResult
}

inline void G3_PushMtx(void) {
    REG_GFX_FIFO_MATRIX_PUSH = 0;
}
inline void G3_PopMtx(int num) {
    REG_GFX_FIFO_MATRIX_POP = num;
}
#define REG_GFX_FIFO_BOX_TEST                   (*(vu32*)0x040005C0)

typedef struct {
    fx16 x;
    fx16 y;
    fx16 z;
    fx16 width;
    fx16 height;
    fx16 depth;
} GXBoxTestParam;

inline void G3_Identity(void) {
    REG_GFX_FIFO_MATRIX_IDENTITY = 0;
}
inline void G3_Translate(fx32 x, fx32 y, fx32 z) {
    REG_GFX_FIFO_MATRIX_TRANSLATE = x;
    REG_GFX_FIFO_MATRIX_TRANSLATE = y;
    REG_GFX_FIFO_MATRIX_TRANSLATE = z;
}
inline void G3_Scale(fx32 x, fx32 y, fx32 z) {
    REG_GFX_FIFO_MATRIX_SCALE = x;
    REG_GFX_FIFO_MATRIX_SCALE = y;
    REG_GFX_FIFO_MATRIX_SCALE = z;
}
inline void G3_Color(unsigned short rgb) {
    REG_GFX_FIFO_VERTEX_COLOR = rgb;
}
inline void G3_Begin(int primitive) {
    REG_GFX_FIFO_POLYGONS_BEGIN = primitive;
}
inline void G3_End(void) {
    REG_GFX_FIFO_POLYGONS_END = 0;
}
inline void G3_TexCoord(fx32 s, fx32 t) {
    REG_GFX_FIFO_VERTEX_TEXCOORD = (unsigned short)(fx16)(s >> 8) | ((unsigned short)(fx16)(t >> 8) << 16);
}
inline void G3_Vtx(fx16 x, fx16 y, fx16 z) {
    REG_GFX_FIFO_VERTEX_16 = (unsigned short)x | ((unsigned short)y << 16);
    REG_GFX_FIFO_VERTEX_16 = (unsigned short)z;
}
