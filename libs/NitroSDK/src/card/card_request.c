#include "card_internal.h"

/* PXI callback of the card FIFO tag: the ARM7 finished a request. */
void func_0205e47c(u32 tag, u32 data, BOOL err) {
    if (tag == 11 && err) {
        UnkCardCommon* const p = &data_0210bf60;
        p->unk_114 &= ~0x20;
        OS_WakeupThreadDirect(p->unk_104);
    }
}

/* Card thread main loop. */
void func_0205e4b0(void* arg) {
    UnkCardCommon* const p = &data_0210bf60;

    for (;;) {
        ENTER_CRITICAL_SECTION();
        while (!(p->unk_114 & 8)) {
            p->unk_104 = &p->unk_044;
            OS_PauseThread(NULL);
        }
        LEAVE_CRITICAL_SECTION();
        p->unk_040(p);
    }
}

/* Sends a request to the ARM7 and waits for its completion. */
BOOL func_0205e508(UnkCardCommon* p, u32 req, s32 retry) {
    if (!(p->unk_114 & 2)) {
        p->unk_114 |= 2;
        while (!func_0207a1cc(11, TRUE)) {
            OS_Delay(100);
        }
        func_0205e508(p, 0, 1);
    }
    DC_PurgeRange(p->unk_000, sizeof(UnkCardCmd));
    DC_DrainWriteBuffer();

    do {
        p->unk_004 = req;
        p->unk_114 |= 0x20;
        while (PXI_SendWordByFifo(11, req, TRUE) < 0) {
        }
        if (req == 0) {
            const u32 cmd = (u32)p->unk_000;
            while (PXI_SendWordByFifo(11, cmd, TRUE) < 0) {
            }
        }
        {
            ENTER_CRITICAL_SECTION();
            while (p->unk_114 & 0x20) {
                OS_PauseThread(NULL);
            }
            LEAVE_CRITICAL_SECTION();
        }
        DC_InvalidateRange(p->unk_000, sizeof(UnkCardCmd));
    } while (p->unk_000->unk_00 == 4 && --retry > 0);

    return p->unk_000->unk_00 == 0;
}
