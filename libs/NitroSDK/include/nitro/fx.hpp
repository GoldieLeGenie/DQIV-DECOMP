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

struct MtxFx43 {
    fx32 m[4][3];
};

struct MtxFx44 {
    fx32 m[4][4];
};
