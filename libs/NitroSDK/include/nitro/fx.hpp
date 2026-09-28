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

struct MtxFx43 {
    fx32 m[4][3];
};

struct MtxFx44 {
    fx32 m[4][4];
};
