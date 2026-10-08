// Cartridge initialization (AGB header read, pull-out handling). A unit of its own: its .bss starts at the
// 32-byte aligned data_0210c7e0 (the function-local static of func_0205ed08) and it reaches data_0210c7cc
// through its own symbol, unlike ctrdg_common.c.
#include "ctrdg_internal.h"

#define REG_EXMEMCNT (*(vu16*)0x04000204)
#define REG_IME      (*(vu16*)0x04000208)
#define REG_POSTFLG  (*(vu16*)0x04000300)

#define CTRDG_AGB_ROM ((u8*)0x08000000)

UnkCtrdgState     data_0210c7e4;
UnkCtrdgAgbHeader data_0210c800 ATTRIBUTE_ALIGN(32); /* copy of the AGB cartridge header */
UnkCtrdgThread    data_0210c8c0;                     /* cartridge task thread */

void func_0205ec54(void) {
    if (data_0210c7e4.unk_04) {
        return;
    }
    data_0210c7e4.unk_04 = TRUE;

    func_0205e93c();
    data_0210c7e4.unk_08 = FALSE;
    func_0207a074();
    while (!func_0207a1cc(13, TRUE)) {
    }
    func_0207a180(13, func_0205eefc);
    func_0205ed08();
    func_0207a180(13, NULL);
    func_0207a180(13, func_0205ef28);
    data_0210c7e4.unk_14 = NULL;
    func_0205efac(&data_0210c8c0);
    func_0207a180(17, func_0205ef98);
    func_0205ec0c(FALSE);
}

/* Reads the AGB cartridge header and hands it to the ARM7. */
void func_0205ed08(void) {
    static BOOL data_0210c7e0; /* module info initialized */

    if (data_0210c7e0) {
        return;
    }
    data_0210c7e0 = TRUE;
    if (!(REG_POSTFLG & 1)) {
        return;
    }

    {
        const u32      irq = func_02077624(0x40000);
        const u16      ime = REG_IME;
        UnkCtrdgLock   lock;
        UnkCtrdgCycles cycles;
        s32            phi;

        REG_IME = 1;
        func_0205eb3c(data_0210c7cc.unk_02, &lock);
        phi = (REG_EXMEMCNT & 0x8000) >> 15;
        func_0205eac0(&cycles);
        REG_EXMEMCNT &= ~0x8000;
        DC_InvalidateRange((u8*)&data_0210c800 + 0x80, 0x40);
        func_020671bc(1, CTRDG_AGB_ROM + 0x80, (u8*)&data_0210c800 + 0x80, 0x40);
        REG_EXMEMCNT = (u16)((REG_EXMEMCNT & ~0x8000) | (phi << 15));
        func_0205eb08(&cycles);
        func_0205eb98(data_0210c7cc.unk_02, &lock);

        if (*(u8*)0x027FFF9B != 0 || *(u8*)0x027FFF9A == 0) {
            int                i;
            UnkCtrdgAgbHeader* hdr  = &data_0210c800;
            UnkCtrdgInfo*      info = CTRDG_INFO;

            info->unk_00 = hdr->unk_be;
            for (i = 0; i < 3; i++) {
                info->unk_02[i] = hdr->unk_b5[i];
            }
            info->unk_06 = hdr->unk_b0;
            info->unk_08 = hdr->unk_ac;

            *(u8*)0x027FFF9B = func_0205e9b4() ? 1 : 0;
            *(u8*)0x027FFF9A = 1;
        }

        MI_CpuCopyU32((const u32*)0xFFFF0020, (u32*)data_0210c800.unk_04, 0x9C);
        DC_PurgeAll();
        func_0205ebbc(((((u32)&data_0210c800 - 0x02000000) >> 5) << 6) | 1);
        while (data_0210c7cc.unk_00 != 1) {
            WaitByLoop(1);
        }
        {
            u16 dummy = REG_IME;
            REG_IME   = ime;
        }
        func_02077624(irq);
    }
}

void func_0205eefc(u32 tag, u32 data, BOOL err) {
    if ((data & 0x3F) == 1) {
        data_0210c7cc.unk_00 = 1;
    } else {
        OS_Terminate();
    }
}

void func_0205ef28(u32 tag, u32 data, BOOL err) {
    if ((data & 0x3F) == 17) {
        if (!data_0210c7e4.unk_08) {
            BOOL terminate = FALSE;
            if (data_0210c7e4.unk_14 != NULL) {
                terminate = data_0210c7e4.unk_14();
            }
            if (terminate) {
                func_0205ef84();
            }
            data_0210c7e4.unk_08 = TRUE;
        }
    } else {
        OS_Terminate();
    }
}

void func_0205ef84(void) {
    func_0205ebbc(2);
    OS_Terminate();
}

void func_0205ef98(u32 tag, u32 data, BOOL err) {
    data_0210c7e4.unk_00 = 0;
}
