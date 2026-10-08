#include "os_internal.h"

#define LOCK_INIT_BUF      ((UnkLockWord*)0x027ffff0)
#define LOCK_CARTRIDGE_BUF ((UnkLockWord*)0x027fffe8)
#define LOCK_CARD_BUF      ((UnkLockWord*)0x027fffe0)
#define LOCK_ID_FLAG       ((u32*)0x027fffb0)
#define LOCK_SHARED_AREA   ((void*)0x027fffc0)

#define LOCK_ID_INIT_ARM9 0x7e
#define LOCK_ID_INIT_ARM7 0x7f


// Initializes the lock system shared with the ARM7
void func_02077710(void) {
    static BOOL data_021141a0;
    UnkLockWord* lockp = LOCK_INIT_BUF;

    if (data_021141a0) {
        return;
    }
    data_021141a0 = TRUE;

    lockp->lockFlag = 0;
    func_02077828(LOCK_ID_INIT_ARM9, lockp, NULL);

    while (lockp->extension != 0) {
        WaitByLoop(0x400);
    }

    LOCK_ID_FLAG[0] = 0xffffffff;
    LOCK_ID_FLAG[1] = 0xffff0000;

    func_0206785c(0, LOCK_SHARED_AREA, 0x28);

    REG_EXMEM_CNT |= 0x800;
    REG_EXMEM_CNT |= 0x80;

    func_020778ac(LOCK_ID_INIT_ARM9, lockp, NULL);
    func_02077828(LOCK_ID_INIT_ARM7, lockp, NULL);
}

// Locks a lock word, spinning until it is free
s32 func_020777dc(u16 lockID, UnkLockWord* lockp, void (*ctrlFunc)(void), BOOL disableFiq) {
    s32 lastLockFlag;
    while ((lastLockFlag = func_020778bc(lockID, lockp, ctrlFunc, disableFiq)) > 0) {
        WaitByLoop(0x400);
    }
    return lastLockFlag;
}

s32 func_02077828(u16 lockID, UnkLockWord* lockp, void (*ctrlFunc)(void)) {
    return func_020777dc(lockID, lockp, ctrlFunc, FALSE);
}

// Unlocks a lock word
s32 func_02077838(u16 lockID, UnkLockWord* lockp, void (*ctrlFunc)(void), BOOL disableFiq) {
    u32 prev;

    if (lockID != lockp->ownerID) {
        return -2;
    }

    if (disableFiq) {
        prev = OS_DisableFIQ();
    } else {
        prev = OS_DisableIRQ();
    }

    lockp->ownerID = 0;
    if (ctrlFunc) {
        ctrlFunc();
    }
    lockp->lockFlag = 0;

    if (disableFiq) {
        OS_RestoreFIQ(prev);
    } else {
        OS_RestoreIRQ(prev);
    }
    return 0;
}

s32 func_020778ac(u16 lockID, UnkLockWord* lockp, void (*ctrlFunc)(void)) {
    return func_02077838(lockID, lockp, ctrlFunc, FALSE);
}

// Tries to lock a lock word once
s32 func_020778bc(u16 lockID, UnkLockWord* lockp, void (*ctrlFunc)(void), BOOL disableFiq) {
    s32 lastLockFlag;
    u32 prev;

    if (disableFiq) {
        prev = OS_DisableFIQ();
    } else {
        prev = OS_DisableIRQ();
    }

    lastLockFlag = func_02067b80(lockID, &lockp->lockFlag);
    if (lastLockFlag == 0) {
        if (ctrlFunc) {
            ctrlFunc();
        }
        lockp->ownerID = lockID;
    }

    if (disableFiq) {
        OS_RestoreFIQ(prev);
    } else {
        OS_RestoreIRQ(prev);
    }
    return lastLockFlag;
}

s32 func_02077928(u16 lockID) {
    return func_02077838(lockID, LOCK_CARTRIDGE_BUF, func_0207798c, TRUE);
}

// clang-format off
asm s32 func_02077948(u16 lockID) {
    ldr r1, =func_02077928
    bx r1
}
// clang-format on

s32 func_02077954(u16 lockID) {
    return func_020778bc(lockID, LOCK_CARTRIDGE_BUF, func_02077974, TRUE);
}

void func_02077974(void) {
    REG_EXMEM_CNT &= ~0x80;
}

void func_0207798c(void) {
    REG_EXMEM_CNT |= 0x80;
}

s32 func_020779a4(u16 lockID) {
    return func_02077828(lockID, LOCK_CARD_BUF, func_020779dc);
}

s32 func_020779c0(u16 lockID) {
    return func_020778ac(lockID, LOCK_CARD_BUF, func_020779f4);
}

void func_020779dc(void) {
    REG_EXMEM_CNT &= ~0x800;
}

void func_020779f4(void) {
    REG_EXMEM_CNT |= 0x800;
}

u16 func_02077a0c(UnkLockWord* lockp) {
    return lockp->ownerID;
}

// Allocates a lock ID from the shared ID bit field
// clang-format off
asm s32 OS_GetLockID(void) {
    ldr r3, =0x027fffb0
    ldr r1, [r3]
    clz r2, r1
    cmp r2, #0x20
    movne r0, #0x40
    bne _found
    add r3, r3, #4
    ldr r1, [r3]
    clz r2, r1
    cmp r2, #0x20
    ldr r0, =0xfffffffd
    bxeq lr
    mov r0, #0x60
_found:
    add r0, r0, r2
    mov r1, #0x80000000
    mov r1, r1, lsr r2
    ldr r2, [r3]
    bic r2, r2, r1
    str r2, [r3]
    bx lr
}
// clang-format on
