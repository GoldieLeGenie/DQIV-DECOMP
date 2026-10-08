#include "../sdk_internal.h"

typedef struct UnkResetState {
    vu16 unk_00; // reset requested by ARM7
    u16 unk_02;  // initialized
} UnkResetState;

UnkResetState data_02114500;

void func_02079df0(u32 tag, u32 data, BOOL err);

/* Installs the PXI reset-notification callback (tag 12). */
void func_02079d9c(void) {
    if (data_02114500.unk_02) {
        return;
    }
    data_02114500.unk_02 = TRUE;

    func_0207a074();
    while (!func_0207a1cc(12, 1)) {
    }
    func_0207a180(12, func_02079df0);
}

void func_02079df0(u32 tag, u32 data, BOOL err) {
    if ((u16)((data & 0x7f00) >> 8) == 0x10) {
        data_02114500.unk_00 = TRUE;
    } else {
        OS_Terminate();
    }
}
