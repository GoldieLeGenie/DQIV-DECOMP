#include "ctrdg_internal.h"

#define REG_EXMEMCNT (*(vu16*)0x04000204)
#define REG_IME      (*(vu16*)0x04000208)
#define REG_POSTFLG  (*(vu16*)0x04000300)

#define CTRDG_AGB_ROM ((u8*)0x08000000)

/* definition order chosen for the .bss layout (the compiler sorts the objects by size) */
UnkCtrdgCommon2 data_0210c7cc;
BOOL            data_0210c7c8; /* cartridge access enabled */

void func_0205e93c(void) {
    u32 zero = 0;
    CpuSet(&zero, &data_0210c7cc, 0x05000001);
    data_0210c7cc.unk_02 = OS_GetLockID();
}

BOOL func_0205e974(void) {
    if (func_0205e9b4() && !func_0205e99c()) {
        return TRUE;
    }
    return FALSE;
}

BOOL func_0205e99c(void) {
    UnkCtrdgInfo* info = CTRDG_INFO;
    return info->unk_05_0;
}

/* Checks that the inserted cartridge is still the one detected at boot. */
BOOL func_0205e9b4(void) {
    BOOL           ret  = TRUE;
    UnkCtrdgInfo*  info = CTRDG_INFO;
    UnkCtrdgLock   lock;
    UnkCtrdgCycles cycles;

    if (info->unk_00 == 0xFFFF) {
        return FALSE;
    }
    if (info->unk_05_1 == 1) {
        return FALSE;
    }

    func_0205eb3c(data_0210c7cc.unk_02, &lock);
    func_0205eac0(&cycles);
    {
        u8* rom = CTRDG_AGB_ROM;
        if ((rom[0xB2] == 0x96 && info->unk_00 != *(u16*)(rom + 0xBE)) ||
            (rom[0xB2] != 0x96 && info->unk_00 != *(u16*)0x0801FFFE) ||
            (info->unk_08 != *(u32*)(rom + 0xAC) && info->unk_05_0)) {
            ret            = FALSE;
            info->unk_05_1 = 1;
        }
    }
    func_0205eb08(&cycles);
    func_0205eb98(data_0210c7cc.unk_02, &lock);
    return ret;
}

void func_0205eac0(UnkCtrdgCycles* cycles) {
    cycles->unk_00 = (REG_EXMEMCNT & 0xC) >> 2;
    cycles->unk_04 = (REG_EXMEMCNT & 0x10) >> 4;
    REG_EXMEMCNT   = (u16)((REG_EXMEMCNT & ~0xC) | (3 << 2));
    REG_EXMEMCNT   = (u16)((REG_EXMEMCNT & ~0x10) | (0 << 4));
}

void func_0205eb08(const UnkCtrdgCycles* cycles) {
    REG_EXMEMCNT = (u16)((cycles->unk_00 << 2) | (REG_EXMEMCNT & ~0xC));
    REG_EXMEMCNT = (u16)((cycles->unk_04 << 4) | (REG_EXMEMCNT & ~0x10));
}

/* Locks the cartridge bus unless the ARM7 holds it. */
void func_0205eb3c(u16 lockId, UnkCtrdgLock* lock) {
    for (;;) {
        lock->unk_04 = OS_DisableIRQ();
        if ((lock->unk_00 = func_02077a0c((void*)0x027FFFE8) & 0x40) != 0) {
            return;
        }
        if (func_02077954(lockId) == 0) {
            return;
        }
        OS_RestoreIRQ(lock->unk_04);
        WaitByLoop(1);
    }
}

void func_0205eb98(u16 lockId, UnkCtrdgLock* lock) {
    if (lock->unk_00 == 0) {
        func_02077948(lockId);
    }
    OS_RestoreIRQ(lock->unk_04);
}

void func_0205ebbc(u32 data) {
    while (PXI_SendWordByFifo(13, data, FALSE) != 0) {
        WaitByLoop(1);
    }
}

void func_0205ec0c(BOOL enable) {
    ENTER_CRITICAL_SECTION();
    data_0210c7c8 = enable;
    if (!func_0205e974()) {
        func_020798f4(0xF000, enable ? 0x1000 : 0x5000);
    }
    LEAVE_CRITICAL_SECTION();
}
