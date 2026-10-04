#pragma once

typedef int fx32;
typedef short fx16;
typedef long long fx64;

#define FX32_SHIFT 12
#define FX32_ONE ((fx32)(1 << FX32_SHIFT))

inline fx32 FX_Mul(fx32 v1, fx32 v2)
{
    return (fx32)(((fx64)v1 * v2 + 0x800) >> FX32_SHIFT);
}

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
extern "C" {
    void func_02061bac(const MtxFx33* src, MtxFx33* dst, fx32 x, fx32 y, fx32 z);     // MTX_ScaleApply33
    void func_02061c6c(MtxFx33* m, fx32 sinVal, fx32 cosVal);                          // MTX_RotX33_
    void func_02061c88(MtxFx33* m, fx32 sinVal, fx32 cosVal);                          // MTX_RotY33_
    void func_02061ca4(MtxFx33* m, fx32 sinVal, fx32 cosVal);                          // MTX_RotZ33_
    void MTX_Concat33(const MtxFx33* a, const MtxFx33* b, MtxFx33* ab);
    void func_02061edc(const VecFx32* vec, const MtxFx33* m, VecFx32* dst);            // MTX_MultVec33
    void func_02062f64(const VecFx32* a, const VecFx32* b, VecFx32* ab);               // VEC_Add
    fx32 func_02062fcc(const VecFx32* a, const VecFx32* b);                            // VEC_DotProduct
    void func_02063008(const VecFx32* a, const VecFx32* b, VecFx32* axb);              // VEC_CrossProduct
    void func_02063330(fx32 a, const VecFx32* v1, const VecFx32* v2, VecFx32* dst);    // VEC_MultAdd
}

struct MtxFx44 {
    fx32 m[4][4];
};

extern "C" void func_02061fb4(const MtxFx43* src, MtxFx43* dst, fx32 x, fx32 y, fx32 z);   // MTX_ScaleApply43
