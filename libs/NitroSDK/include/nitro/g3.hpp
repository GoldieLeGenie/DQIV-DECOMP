#pragma once
#include "nitro/fx.hpp"
#include "nitro/reg.h"

extern "C" {
    void func_02065604(unsigned int fovySin, unsigned int fovyCos, fx32 aspect, fx32 n, fx32 f, fx32 scaleW, int load, MtxFx44* mtx);    // G3i_PerspectiveW_
    void func_02065a98(const VecFx32* camPos, const VecFx32* camUp, const VecFx32* target, int load, MtxFx43* mtx);                       // G3i_LookAt_
    void func_020657d4(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, fx32 scaleW, int load, MtxFx44* mtx);                           // G3i_OrthoW_
    void func_0206541c(unsigned int rgb, unsigned int alpha, unsigned int depth, unsigned int polygonID, int fog);    // G3X_SetClearColor
    void func_02065c9c(fx32 s, fx32 c);                                                                                                  // G3_RotZ
    void func_02065c24(fx32 s, fx32 c);                                                                                                  // G3_RotX
    void func_02065c60(fx32 s, fx32 c);                                                                                                  // G3_RotY
    int  func_02065544(int* result);                                                                                                     // G3_GetBoxTestResult
    int  func_020653a8(MtxFx44* m);                                                                                                      // G3X_GetClipMtx
    void func_02068f00(int x, int y, int z, int w, int h, int u0, int v0, int u1, int v1);                                            // draw a textured quad
}

inline void G3_PushMtx(void) {
    REG_GFX_FIFO_MATRIX_PUSH = 0;
}
inline void G3_PopMtx(int num) {
    REG_GFX_FIFO_MATRIX_POP = num;
}
#define REG_GFX_FIFO_BOX_TEST                   (*(vu32*)0x040005C0)
#define REG_GFX_RAM_COUNT                       (*(vu16*)0x04000604)
#define REG_GFX_VTX_RAM_COUNT                   (*(vu16*)0x04000606)
#define REG_RDLINES_COUNT                       (*(vu16*)0x04000320)

typedef struct {
    fx16 x;
    fx16 y;
    fx16 z;
    fx16 width;
    fx16 height;
    fx16 depth;
} GXBoxTestParam;

inline void G3_Viewport(int x1, int y1, int x2, int y2) {
    REG_GFX_FIFO_VIEWPORT = x1 | (y1 << 8) | (x2 << 16) | (y2 << 24);
}
inline void G3_StoreMtx(int num) {
    REG_GFX_FIFO_MATRIX_STORE = num;
}
inline void G3_MtxMode(int mode) {
    REG_GFX_FIFO_MATRIX_MODE = mode;
}
inline void G3_Identity(void) {
    REG_GFX_FIFO_MATRIX_IDENTITY = 0;
}
inline void G3_PolygonAttr(int light, int polyMode, int cullMode, int polygonID, int alpha, int misc) {
    REG_GFX_FIFO_POLYGON_ATTR = (light << 0) | (polyMode << 4) | cullMode | misc | (polygonID << 24) | (alpha << 16);
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
inline void G3_MaterialColorDiffAmb(unsigned int diffuse, unsigned int ambient, int isSetVtxColor) {
    REG_GFX_FIFO_MATERIAL_DIFFUSE_AMBIENT = diffuse | (ambient << 16) | (isSetVtxColor ? 0x8000 : 0);
}
inline void G3_MaterialColorSpecEmi(unsigned int specular, unsigned int emission, int isShininess) {
    REG_GFX_FIFO_MATERIAL_SPECULAR_EMISSION = specular | (emission << 16) | (isShininess ? 0x8000 : 0);
}
inline void G3_TexImageParam(int texFmt, int texGen, int sSize, int tSize, int repeat, int flip, int pltt0, unsigned int addr) {
    REG_GFX_FIFO_TEXTURE_PARAM = (addr >> 3) | (texFmt << 26) | (texGen << 30) | (sSize << 20) | (tSize << 23) | (pltt0 << 29) | (repeat << 16) | (flip << 18);
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
