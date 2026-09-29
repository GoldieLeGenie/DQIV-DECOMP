#pragma once
#include "nitro/fx.hpp"

struct NNSG3dGlb {
    char unk_000[0xfc];
    unsigned int flag;                          // 0x0FC
    char unk_100[0x240 - 0x100];
    VecFx32 camPos;                             // 0x240
    VecFx32 camUp;                              // 0x24C
    VecFx32 camTarget;                          // 0x258
};

extern NNSG3dGlb data_0210cf28;                 // NNS_G3dGlb
extern MtxFx44 data_0210cf30;                   // NNS_G3dGlb.projMtx
extern MtxFx43 data_0210cf74;                   // NNS_G3dGlb.cameraMtx
extern MtxFx33 data_0210cfe4;                   // NNS_G3dGlb.prmBaseRot
