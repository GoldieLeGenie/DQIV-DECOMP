// Card wait / result / lock helpers. A unit of its own: these functions address data_0210bf60 through its own
// symbol, while card_common.c (which defines it) reaches it through its pooled .bss base.
#include "card_internal.h"

/* This unit is built without loop rotation (while loops keep their test at the bottom, entered by a branch). */
#pragma opt_rotateloops off

BOOL func_0205d644(void) {
    UnkCardCommon* const p = &data_0210bf60;
    ENTER_CRITICAL_SECTION();
    while (p->unk_114 & 4) {
        OS_PauseThread(&p->unk_10c);
    }
    LEAVE_CRITICAL_SECTION();
    return p->unk_000->unk_00 == 0;
}

BOOL func_0205d690(void) {
    return (data_0210bf60.unk_114 & 4) == 0;
}

u32 func_0205d6ac(void) {
    return data_0210bf60.unk_000->unk_00;
}

void CARD_LockRom(u16 lockId) {
    func_0205d3f8(lockId, 1);
    func_020779a4(lockId);
}

void CARD_UnlockRom(u16 lockId) {
    func_020779c0(lockId);
    func_0205d47c(lockId, 1);
}

void func_0205d6f8(u16 lockId) {
    func_0205d3f8(lockId, 2);
}

void func_0205d708(u16 lockId) {
    func_0205d47c(lockId, 2);
}

