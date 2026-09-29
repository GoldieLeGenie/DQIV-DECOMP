#pragma once

typedef int fx32;
typedef short fx16;

#define FX32_SHIFT 12
#define FX32_ONE ((fx32)(1 << FX32_SHIFT))

struct VecFx32 {
    fx32 x;
    fx32 y;
    fx32 z;
};

extern "C" void func_020630ec(const VecFx32* src, VecFx32* dst);   // VEC_Normalize
extern "C" void func_02062f98(const VecFx32* a, const VecFx32* b, VecFx32* ab);   // VEC_Subtract
extern "C" fx32 func_0206338c(const VecFx32* a, const VecFx32* b);   // VEC_Distance

struct MtxFx43 {
    fx32 m[4][3];
};

struct MtxFx33 {
    fx32 m[3][3];
};

extern "C" void func_02061b88(MtxFx33* m);   // MTX_Identity33_

struct MtxFx44 {
    fx32 m[4][4];
};
