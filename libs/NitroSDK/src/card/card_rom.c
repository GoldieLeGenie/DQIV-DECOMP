#include "card_internal.h"

/* This unit is built without loop rotation and copy propagation (see REPORT.md). */
#pragma opt_rotateloops off
#pragma opt_propagation off

u32        data_0210c580;                     /* ROM base offset */
UnkCardRom data_0210c5a0 ATTRIBUTE_ALIGN(32); /* ROM read state */

#define REG_CARD_CNT_ADDR  0x040001A4
#define REG_CARD_DATA_ADDR 0x04100010

/* pointer to the card ROM header copy */
u8* data_020c3c88 = (u8*)0x027FFE00;

static inline u32 CARDi_GetRomControl(void) {
    return *(u32*)(data_020c3c88 + 0x60);
}

static inline BOOL CARDi_NextPage(void) {
    UnkCardCommon* const p = &data_0210bf60;
    p->unk_01c += 0x200;
    p->unk_020 += 0x200;
    return (p->unk_024 -= 0x200) != 0;
}

static inline void CARDi_ReadRomDone(void) {
    UnkCardCommon* const p = &data_0210bf60;
    func_0205e778(func_0205e214());
    p->unk_000->unk_00 = 0;
    CARDi_EndTask(p);
}

static inline u32 CARDi_GetSrcPage(void) {
    return data_0210bf60.unk_01c & ~0x1FF;
}

/* Copies what can be served from the page cache; returns TRUE if data remains. */
BOOL func_0205ddb8(UnkCardRom* rom) {
    UnkCardCommon* const p    = &data_0210bf60;
    const u32            page = CARDi_GetSrcPage();

    if (page == rom->unk_008) {
        const u32 offset = p->unk_01c - page;
        u32       len    = 0x200 - offset;
        if (len > p->unk_024) {
            len = p->unk_024;
        }
        MI_CpuCopyU8((u8*)rom->unk_020 + offset, (void*)p->unk_020, len);
        p->unk_01c += len;
        p->unk_020 += len;
        p->unk_024 -= len;
    }
    return p->unk_024 != 0;
}

/* Writes an 8-byte card command. */
void func_0205de44(u32 hi, u32 lo) {
    while (*(vu32*)REG_CARD_CNT_ADDR & 0x80000000) {
    }
    *(vu8*)0x040001A1 = 0xC0;
    *(vu8*)0x040001A8 = (u8)(hi >> 24);
    *(vu8*)0x040001A9 = (u8)(hi >> 16);
    *(vu8*)0x040001AA = (u8)(hi >> 8);
    *(vu8*)0x040001AB = (u8)(hi >> 0);
    *(vu8*)0x040001AC = (u8)(lo >> 24);
    *(vu8*)0x040001AD = (u8)(lo >> 16);
    *(vu8*)0x040001AE = (u8)(lo >> 8);
    *(vu8*)0x040001AF = (u8)(lo >> 0);
}

/* Starts the DMA read of one page. */
void func_0205dea4(void) {
    UnkCardCommon* const p   = &data_0210bf60;
    UnkCardRom* const    rom = &data_0210c5a0;

    func_02067d60(p->unk_028, (void*)REG_CARD_DATA_ADDR, (void*)p->unk_020, 0x200);
    func_0205de44(0xB7000000 | (p->unk_01c >> 8), p->unk_01c << 24);
    *(vu32*)REG_CARD_CNT_ADDR = rom->unk_004;
}

/* Card DMA interrupt handler. */
void func_0205def8(void) {
    func_020673ec(data_0210bf60.unk_028);
    if (!CARDi_NextPage()) {
        func_02077680(0x80000);
        func_020776b0(0x80000);
        CARDi_ReadRomDone();
    } else {
        func_0205dea4();
    }
}

/* Starts a DMA transfer if the request allows it. */
BOOL func_0205dfc8(UnkCardRom* rom) {
    u32                  len;
    BOOL                 ret;
    BOOL                 aligned_ok;
    BOOL                 dma_ok;
    u32                  dst;
    UnkCardCommon* const p = &data_0210bf60;
    BOOL                 usable;
    u32                  mis;
    BOOL                 overlap;
    BOOL                 itcm;

    ret        = FALSE;
    dst        = p->unk_020;
    len        = p->unk_024;
    aligned_ok = FALSE;
    dma_ok     = FALSE;
    usable     = FALSE;
    mis        = dst & 0x1F;

    if (mis == 0 && p->unk_028 <= 3) {
        usable = TRUE;
    }
    if (usable) {
        const u32 dtcm    = func_020798c0();
        const u32 end     = dst + len;
        overlap = TRUE;
        itcm    = FALSE;
        if (end > 0x01FF8000 && dst < 0x02000000) {
            itcm = overlap;
        }
        if (!itcm && !(dtcm < end && dtcm + 0x4000 > dst)) {
            overlap = FALSE;
        }
        if (!overlap) {
            dma_ok = TRUE;
        }
    }
    if (dma_ok) {
        if (((p->unk_01c | len) & 0x1FF) == 0) {
            aligned_ok = TRUE;
        }
    }
    if (aligned_ok && len != 0) {
        ret = TRUE;
    }
    rom->unk_004 = (CARDi_GetRomControl() & ~0x07000000) | 0xA1000000;

    if (ret) {
        ENTER_CRITICAL_SECTION();
        IC_InvalidateRange((void*)dst, len);
        if (mis != 0) {
            dst -= mis;
            DC_CleanRange((void*)dst, 0x20);
            DC_CleanRange((void*)(dst + len), 0x20);
            len += 0x20;
        }
        DC_InvalidateRange((void*)dst, len);
        DC_DrainWriteBuffer();
        func_02077480(0x80000, func_0205def8);
        func_020776b0(0x80000);
        func_02077650(0x80000);
        LEAVE_CRITICAL_SECTION();
        func_0205dea4();
    }
    return ret;
}

/* Reads the request with the CPU, page by page. */
void func_0205e12c(UnkCardRom* rom) {
    UnkCardCommon* const p = &data_0210bf60;

    for (;;) {
        const u32 page = p->unk_01c & ~0x1FF;
        u32*      dst;

        if (page != p->unk_01c || ((u32)(dst = (u32*)p->unk_020) & 3) != 0 || p->unk_024 < 0x200) {
            rom->unk_008 = page;
            dst          = rom->unk_020;
        }
        func_0205de44(0xB7000000 | (page >> 8), page << 24);
        *(vu32*)REG_CARD_CNT_ADDR = rom->unk_004;
        {
            u32 i = 0;
            u32 ctrl;
            do {
                ctrl = *(vu32*)REG_CARD_CNT_ADDR;
                if (ctrl & 0x800000) {
                    const u32 data = *(vu32*)REG_CARD_DATA_ADDR;
                    if (i < 0x200) {
                        dst[i++] = data;
                    }
                }
            } while (ctrl & 0x80000000);
        }
        if (dst == (u32*)p->unk_020) {
            data_0210bf60.unk_01c += 0x200;
            data_0210bf60.unk_020 += 0x200;
            if ((data_0210bf60.unk_024 -= 0x200) == 0) {
                break;
            }
        } else if (!func_0205ddb8(rom)) {
            break;
        }
    }
}

/* Reads the card ID. */
u32 func_0205e214(void) {
    func_0205de44(0xB8000000, 0);
    *(vu32*)REG_CARD_CNT_ADDR = ((CARDi_GetRomControl() & ~0x07000000) | 0xA7000000) & ~0x1FFF;
    while (!(*(vu32*)REG_CARD_CNT_ADDR & 0x800000)) {
    }
    return *(vu32*)REG_CARD_DATA_ADDR;
}

/* Card thread task for CPU reads. */
void func_0205e270(UnkCardCommon* common) {
    UnkCardRom* const rom = &data_0210c5a0;
    if (func_0205ddb8(rom)) {
        rom->unk_000(rom);
    }
    CARDi_ReadRomDone();
}

void CARDi_ReadRom(u32 dma, const void* src, void* dst, u32 len, UnkCardCallback callback, void* arg, BOOL async) {
    UnkCardRom* const    rom = &data_0210c5a0;
    UnkCardCommon* const p   = &data_0210bf60;

    func_0205d61c();
    CARDi_WaitAndLock(p, callback, arg);
    p->unk_028 = dma;
    p->unk_020 = (u32)dst;
    p->unk_01c = (u32)src + data_0210c580;
    p->unk_024 = len;
    if (dma <= 3) {
        func_020673ec(dma);
    }
    if (func_0205dfc8(rom)) {
        if (!async) {
            func_0205e464();
        }
    } else if (async) {
        func_0205d3bc(func_0205e270);
    } else {
        p->unk_104 = OS_GetCurrentThread();
        func_0205e270(p);
    }
}

void CARD_Init(void) {
    UnkCardCommon* const p = &data_0210bf60;

    if (p->unk_114 == 0) {
        p->unk_114           = 1;
        p->unk_024           = 0;
        p->unk_020           = 0;
        p->unk_01c           = 0;
        p->unk_028           = (u32)-1;
        p->unk_038           = NULL;
        p->unk_03c           = NULL;
        data_0210c580 = 0;
        func_0205d508();
        data_0210c5a0.unk_000 = (void (*)(UnkCardRom*))func_0205e470();
        func_0205e65c();
    }
}

BOOL func_0205e464(void) {
    return func_0205d644();
}

void* func_0205e470(void) {
    return (void*)func_0205e12c;
}
