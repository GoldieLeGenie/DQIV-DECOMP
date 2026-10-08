#include "../sdk_internal.h"

typedef struct UnkSystemWork {
    u8 unk_000[0x3c];
    u32 unk_03c;
    u8 unk_040[0xf4 - 0x40];
    u32 unk_0f4;
    u16 unk_0f8;
    u8 unk_0fa[0x1e8 - 0xfa];
    u32 unk_1e8;
    u32 unk_1ec;
    u8 unk_1f0[0x390 - 0x1f0];
    u32 unk_390;
    u16 unk_394;
    u16 unk_396;
    u16 unk_398;
    u8 unk_39a[0x3a8 - 0x39a];
    u16 unk_3a8;
    u16 unk_3aa;
    u16 unk_3ac;
} UnkSystemWork;

extern vu64 data_021144e4; // tick counter

static inline UnkSystemWork* GetSystemWork(void) {
    return (UnkSystemWork*)0x027ffc00;
}

/* Collects 32 bytes of weakly random data from hardware/system state. */
#pragma opt_propagation off
void OS_GetLowEntropyData(u32* buffer) {
    u16 vcount = *(vu16*)0x04000006;
    UnkSystemWork* work = GetSystemWork();
    UnkSystemWork* sys;

    buffer[0] = func_02079c90() | (vcount << 16);
    buffer[1] = (u32)((work->unk_0f8 << 16) ^ data_021144e4);
    sys = GetSystemWork();
    buffer[2] = sys->unk_03c ^ (u32)((data_021144e4 >> 32) ^ work->unk_0f4);
    buffer[2] ^= *(vu32*)0x04000600;
    buffer[3] = sys->unk_1e8;
    buffer[4] = sys->unk_1ec;
    buffer[5] = (sys->unk_394 << 16) ^ sys->unk_390;
    buffer[6] = (sys->unk_3aa << 16) | sys->unk_3ac;
    buffer[7] = (*(vu16*)0x04000130 | *(u16*)0x027fffa8) | (sys->unk_398 << 16);
}
#pragma opt_propagation reset
