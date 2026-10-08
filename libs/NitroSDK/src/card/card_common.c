#include "card_internal.h"

/* This unit is built without loop rotation (while loops keep their test at the bottom, entered by a branch). */
#pragma opt_rotateloops off

BOOL          data_0210bee0;                            /* card access enabled */
UnkCardCmd    data_0210bf00 ATTRIBUTE_ALIGN(32);        /* command block shared with the ARM7 */
UnkCardCommon data_0210bf60;                            /* card library state */
static u8     data_0210c180[0x400] ATTRIBUTE_ALIGN(32); /* card thread stack */


static inline BOOL CARDi_IsBootTypeMultiboot(void) {
    return *(vu16*)0x027FFC40 == 2;
}

/* Hands a task to the card thread and wakes it up. */
void func_0205d3bc(UnkCardTask task) {
    UnkCardCommon* const p = &data_0210bf60;

    func_02078af4(&p->unk_044, p->unk_108);
    p->unk_104 = &p->unk_044;
    p->unk_040 = task;
    p->unk_114 |= 8;
    OS_WakeupThreadDirect(&p->unk_044);
}

/* Acquires the card bus for one target (1 = rom, 2 = backup). */
void func_0205d3f8(u16 lockId, u32 target) {
    UnkCardCommon* const p = &data_0210bf60;
    ENTER_CRITICAL_SECTION();

    if (p->unk_008 == lockId) {
        if (p->unk_018 != target) {
            OS_Terminate();
        }
    } else {
        while (p->unk_008 != -3) {
            OS_PauseThread(&p->unk_010);
        }
        p->unk_008 = lockId;
        p->unk_018 = target;
    }
    ++p->unk_00c;
    p->unk_000->unk_00 = 0;
    LEAVE_CRITICAL_SECTION();
}

/* Releases the card bus. */
void func_0205d47c(u16 lockId, u32 target) {
    UnkCardCommon* const p = &data_0210bf60;
    ENTER_CRITICAL_SECTION();

    if (p->unk_008 != lockId || p->unk_00c == 0) {
        OS_Terminate();
    } else {
        s32 ref;
        if (p->unk_018 != target) {
            OS_Terminate();
        }
        ref = p->unk_00c - 1;
        p->unk_00c = ref;
        if (ref == 0) {
            p->unk_008 = -3;
            p->unk_018 = 0;
            OS_UnpauseThread(&p->unk_010);
        }
    }
    p->unk_000->unk_00 = 0;
    LEAVE_CRITICAL_SECTION();
}

void func_0205d508(void) {
    UnkCardCommon* const p = &data_0210bf60;

    p->unk_008 = -3;
    p->unk_00c = 0;
    p->unk_018 = 0;
    p->unk_000 = &data_0210bf00;
    MI_CpuFill(0, p->unk_000, sizeof(UnkCardCmd));
    DC_PurgeRange(&data_0210bf00, sizeof(UnkCardCmd));

    if (!CARDi_IsBootTypeMultiboot()) {
        MI_CpuCopyU8((void*)0x027FFE00, (void*)0x027FFA80, 0x160);
    }

    p->unk_108        = 4;
    p->unk_010.tail   = NULL;
    p->unk_010.head   = NULL;
    p->unk_10c.tail   = NULL;
    p->unk_10c.head   = NULL;
    func_020787c4(&p->unk_044, func_0205e4b0, NULL, data_0210c180 + sizeof(data_0210c180), sizeof(data_0210c180), p->unk_108);
    OS_WakeupThreadDirect(&p->unk_044);
    func_0207a180(11, func_0205e47c);

    if (CARDi_IsBootTypeMultiboot()) {
        return;
    }
    func_0205d634(TRUE);
}

BOOL func_0205d60c(void) {
    return data_0210bee0;
}

void func_0205d61c(void) {
    if (!func_0205d60c()) {
        OS_Terminate();
    }
}

void func_0205d634(BOOL enable) {
    data_0210bee0 = enable;
}
