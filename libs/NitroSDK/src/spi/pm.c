#include "../sdk_internal.h"

/* this file is built without IR loop-invariant code motion: in func_0207bdb4 the key argument of the
   sleep request is hoisted out of the retry loop by the back end, after the wake-up data */
#pragma opt_loop_invariants off

typedef void (*UnkPmCallback)(u32 result, void* arg);
typedef void (*UnkPmSleepCallback)(void* arg);

typedef struct UnkPmCallbackInfo {
    UnkPmSleepCallback func;
    void* arg;
    struct UnkPmCallbackInfo* next;
} UnkPmCallbackInfo;

typedef struct UnkPmRegisterRead {
    u16 done;
    u16 unk_02;
    u16* buffer;
} UnkPmRegisterRead;

/* PM state (definition order chosen for the .bss layout: the compiler sorts the objects by size) */
u16                data_02116140;        // initialized
UnkPmCallbackInfo* data_0211614c;        // pre-sleep callback list
vu32               data_02116144;        // set by notification 0x60
vu32               data_02116158;        // lock
u32*               data_02116164;
u32                data_02116150;        // LCD off count
UnkPmCallbackInfo* data_02116154;        // post-sleep callback list
vu32               data_02116148;        // set by notification 0x62
UnkPmCallback      data_0211615c;        // callback
void*              data_02116160;        // callback argument
UnkMutex           data_02116168;        // mutex
UnkPmRegisterRead  data_02116180[5];     // register reads

#define VBLANK_COUNT (*(vu32*)0x027ffc3c)
#define REG_POWCNT   (*(vu16*)0x04000304)
#define REG_IME_     (*(vu16*)0x04000208)

void func_0207b8e8(u32 tag, u32 data, BOOL err);
u32 func_0207ba44(u32 data, UnkPmCallback callback, void* arg);
u32 func_0207bb38(u32 type, UnkPmCallback callback, void* arg);
u32 func_0207bb8c(u32 type);
u32 func_0207bc30(u32 target, u32 on);
u32 func_0207bd04(void);
u32 func_0207bd2c(BOOL* top, BOOL* bottom);
void func_0207bd88(u32 data);
BOOL func_0207bfe4(u32 sw, u32 backLight, BOOL skipWait, BOOL isSync);
BOOL func_0207c0b8(u32 sw);
u32 func_0207c0d8(void);
void func_0207c19c(UnkPmCallbackInfo* info);

BOOL func_0207b780(void) {
    u32 enabled = OS_DisableIRQ();

    if (data_02116158) {
        OS_RestoreIRQ(enabled);
        return FALSE;
    }
    data_02116158 = TRUE;
    OS_RestoreIRQ(enabled);
    return TRUE;
}

void func_0207b7bc(void) {
    vu32* lock = &data_02116158;

    if (data_02116158) {
        do {
            if (OS_GetIRQFlag() == 0x80) {
                PXIi_HandlerRecvFifoNotEmpty();
            }
        } while (*lock);
    }
}

void func_0207b7fc(u32 result, void* arg) {
    *(u32*)arg = result;
}

void func_0207b804(u32 result) {
    UnkPmCallback callback = data_0211615c;
    void* arg = data_02116160;

    if (data_02116158) {
        data_02116158 = FALSE;
    }
    if (callback) {
        data_0211615c = NULL;
        callback(result, arg);
    }
}

void func_0207b844(void) {
    s32 i;

    if (data_02116140) {
        return;
    }
    data_02116140 = TRUE;
    data_02116158 = FALSE;
    data_0211615c = NULL;

    func_0207a074();
    while (!func_0207a1cc(8, 1)) {
    }
    func_0207a180(8, func_0207b8e8);

    for (i = 0; i < 5; i++) {
        data_02116180[i].done = 0;
    }
    OS_InitMutex(&data_02116168);
    data_02116150 = VBLANK_COUNT;
}

void func_0207b8e8(u32 tag, u32 data, BOOL err) {
    u16 command;
    u16 result;

    if (err) {
        func_0207b804(2);
        return;
    }

    command = (u16)((data & 0x7f00) >> 8);
    result = data & 0xff;
    if (command >= 0x70 && command <= 0x74) {
        s32 index = command - 0x70;
        u16* buf = data_02116180[index].buffer;
        u16 value = (u8)result;
        if (buf) {
            *buf = value;
        }
        data_02116180[index].done = TRUE;
        result = 0;
    } else if (command == 0x60) {
        data_02116144 = TRUE;
    } else if (command == 0x62) {
        data_02116148 = TRUE;
    } else if (command == 0x67) {
        if (data_02116164) {
            *data_02116164 = result;
        }
        result = 0;
    }
    func_0207b804(result);
}

u32 func_0207b9b0(u32 trigger, u32 keyPattern) {
    if (!func_0207b780()) {
        return 1;
    }

    data_02116144 = FALSE;
    func_0207bd88(0x03006000);
    while (!data_02116144) {
    }
    data_02116144 = FALSE;
    data_02116148 = FALSE;

    func_0207bfe4(0, 2, FALSE, TRUE);
    func_0207bd88(0x02006100 | (trigger & 0xff));
    func_0207bd88(0x01010000 | (u16)keyPattern);
    return 0;
}

u32 func_0207ba44(u32 data, UnkPmCallback callback, void* arg) {
    if (!func_0207b780()) {
        return 1;
    }
    data_0211615c = callback;
    data_02116160 = arg;
    func_0207bd88(0x02006300 | ((data >> 16) & 0xff));
    func_0207bd88(0x01010000 | (u16)data);
    return 0;
}

u32 func_0207baa4(u32 reg, u16* buffer, UnkPmCallback callback, void* arg) {
    if (!func_0207b780()) {
        return 1;
    }
    data_0211615c = callback;
    data_02116160 = arg;
    data_02116180[reg].done = FALSE;
    data_02116180[reg].buffer = buffer;
    func_0207bd88(0x03006500 | (reg & 0xff));
    return 0;
}

u32 func_0207bb10(u32 reg, u16* buffer) {
    u32 syncResult;
    u32 result = func_0207baa4(reg, buffer, func_0207b7fc, &syncResult);

    if (result != 0) {
        return result;
    }
    func_0207b7bc();
    return syncResult;
}

u32 func_0207bb38(u32 type, UnkPmCallback callback, void* arg) {
    u32 command;

    switch (type) {
    case 1:
        command = 1;
        break;
    case 3:
        command = 2;
        break;
    case 2:
        command = 3;
        break;
    default:
        command = 0;
        break;
    }
    if (command == 0) {
        return 0xffff;
    }
    return func_0207ba44(command, callback, arg);
}

u32 func_0207bb8c(u32 type) {
    u32 syncResult;
    u32 result = func_0207bb38(type, func_0207b7fc, &syncResult);

    if (result != 0) {
        return result;
    }
    func_0207b7bc();
    return syncResult;
}

u32 func_0207bbb4(u32 target, u32 on, UnkPmCallback callback, void* arg) {
    u32 command = 0;

    if (target == 0) {
        if (on == 1) {
            command = 6;
        }
        if (on == 0) {
            command = 7;
        }
    } else if (target == 1) {
        if (on == 1) {
            command = 4;
        }
        if (on == 0) {
            command = 5;
        }
    } else if (target == 2) {
        if (on == 1) {
            command = 8;
        }
        if (on == 0) {
            command = 9;
        }
    }
    if (command == 0) {
        return 0xffff;
    }
    return func_0207ba44(command, callback, arg);
}

u32 func_0207bc30(u32 target, u32 on) {
    u32 syncResult;
    u32 result = func_0207bbb4(target, on, func_0207b7fc, &syncResult);

    if (result != 0) {
        return result;
    }
    func_0207b7bc();
    return syncResult;
}

u32 func_0207bc58(UnkPmCallback callback, void* arg) {
    BOOL top;
    BOOL bottom;

    OS_Delay(0x996a00);
    if (func_0207c0d8() != 1) {
        func_0207bd2c(&top, &bottom);
        if (top) {
            func_0207bc30(0, 0);
        }
        if (bottom) {
            func_0207bc30(1, 0);
        }
        while (!func_0207c0b8(1)) {
            OS_Delay(0x996a00);
        }
    }
    return func_0207ba44(14, callback, arg);
}

u32 func_0207bd04(void) {
    u32 syncResult;
    u32 result = func_0207bc58(func_0207b7fc, &syncResult);

    if (result != 0) {
        return result;
    }
    func_0207b7bc();
    return syncResult;
}

u32 func_0207bd2c(BOOL* top, BOOL* bottom) {
    u16 status;
    u32 result = func_0207bb10(0, &status);

    if (result != 0) {
        return result;
    }
    if (top) {
        *top = (status & 8) ? TRUE : FALSE;
    }
    if (bottom) {
        *bottom = (status & 4) ? TRUE : FALSE;
    }
    return result;
}

void func_0207bd88(u32 data) {
    while (PXI_SendWordByFifo(8, data, FALSE) != 0) {
    }
}

static inline u16 PmDisableInterrupts(void) {
    u16 prev = REG_IME_;
    REG_IME_ = 0;
    return prev;
}

static inline u16 PmEnableInterrupts(void) {
    u16 prev = REG_IME_;
    REG_IME_ = 1;
    return prev;
}

static inline u16 PmRestoreInterrupts(u16 ime) {
    u16 prev = REG_IME_;
    REG_IME_ = ime;
    return prev;
}

static inline u32 GetVBlankCount(void) {
    return VBLANK_COUNT;
}

void func_0207bdb4(u32 trigger, u16 logic, u16 keyPattern) {
    BOOL top;
    BOOL bottom;
    vu32 vcount;
    u32 prevIntr;
    u32 prevIrqMask;
    u32 lcdPower;
    BOOL powerOff = FALSE;
    u32 dispCnt;
    u32 dbDispCnt;
    u16 prevIme;
    u16 data;

    func_0207c19c(data_0211614c);

    prevIme = PmDisableInterrupts();
    prevIntr = OS_DisableIRQ();
    prevIrqMask = func_02077680(0x3fffff);
    func_02077624(0x40000);
    OS_RestoreIRQ(prevIntr);
    PmEnableInterrupts();

    if (trigger & 8) {
        if (*(vu16*)0x027ffc40 == 2) {
            trigger &= ~8;
        }
    }
    if (trigger & 0x10) {
        if (!func_0205e9b4()) {
            trigger &= ~0x10;
        }
    }

    dispCnt = *(vu32*)0x04000000;
    dbDispCnt = *(vu32*)0x04001000;
    lcdPower = func_0207c0d8();
    func_0207bd2c(&top, &bottom);
    func_0207bc30(2, 0);

    vcount = GetVBlankCount();
    while (vcount == GetVBlankCount()) {
    }
    vcount = GetVBlankCount();
    *(vu32*)0x04000000 &= ~0x30000;
    *(vu32*)0x04001000 &= ~0x10000;
    while (vcount == GetVBlankCount()) {
    }
    vcount = GetVBlankCount();
    while (vcount == GetVBlankCount()) {
    }

    data = (u16)(trigger | (top << 5) | (bottom << 6));
    while (func_0207b9b0(data, (u16)(logic | keyPattern)) != 0) {
    }

    func_0207a068();
    OS_Delay(0x28e900);

    if (trigger & 8) {
        if (*(vu32*)0x04000214 & 0x100000) {
            powerOff = TRUE;
        }
    }

    if (!powerOff) {
        if (lcdPower == 1) {
            func_0207bfe4(1, 1, 1, 1);
        } else {
            func_0207bb8c(1);
        }
        *(vu32*)0x04000000 = dispCnt;
        *(vu32*)0x04001000 = dbDispCnt;
    }

    OS_DisableIRQ();
    func_02077624(prevIrqMask);
    OS_RestoreIRQ(prevIntr);
    PmRestoreInterrupts(prevIme);

    if (powerOff) {
        func_0207bd04();
    }
    func_0207c19c(data_02116154);
}

BOOL func_0207bfe4(u32 sw, u32 backLight, BOOL skipWait, BOOL isSync) {
    switch (sw) {
    case 1:
        if (!skipWait) {
            if ((u32)(VBLANK_COUNT - data_02116150) <= 7) {
                return FALSE;
            }
        }
        if (backLight) {
            if (isSync) {
                func_0207bb8c(backLight);
            } else {
                func_0207bb38(backLight, NULL, NULL);
            }
        }
        REG_POWCNT |= 1;
        break;
    case 0:
        REG_POWCNT &= ~1;
        data_02116150 = VBLANK_COUNT;
        if (backLight) {
            if (isSync) {
                func_0207bb8c(backLight);
            } else {
                func_0207bb38(backLight, NULL, NULL);
            }
        }
        break;
    }
    return TRUE;
}

BOOL func_0207c0b8(u32 sw) {
    if (sw != 1) {
        sw = 0;
    }
    return func_0207bfe4(sw, 0, FALSE, TRUE);
}

u32 func_0207c0d8(void) {
    return (REG_POWCNT & 1) ? 1 : 0;
}

void func_0207c0f4(UnkPmCallbackInfo** list, UnkPmCallbackInfo* info) {
    if (list) {
        info->next = *list;
        *list = info;
    }
}

void func_0207c108(UnkPmCallbackInfo** list, UnkPmCallbackInfo* info) {
    UnkPmCallbackInfo* p;

    if (!list) {
        return;
    }
    p = *list;
    if (p == NULL) {
        info->next = NULL;
        *list = info;
        return;
    }
    while (p->next) {
        p = p->next;
    }
    info->next = p->next;
    p->next = info;
}

void func_0207c154(UnkPmCallbackInfo** list, UnkPmCallbackInfo* info) {
    UnkPmCallbackInfo* p;
    UnkPmCallbackInfo* prev;

    if (!list) {
        return;
    }
    prev = p = *list;
    while (p) {
        if (p == info) {
            if (p == prev) {
                *list = p->next;
            } else {
                prev->next = p->next;
            }
            return;
        }
        prev = p;
        p = p->next;
    }
}

void func_0207c19c(UnkPmCallbackInfo* info) {
    while (info) {
        info->func(info->arg);
        info = info->next;
    }
}

void func_0207c1c4(UnkPmCallbackInfo* info) {
    func_0207c108(&data_0211614c, info);
}

void func_0207c1dc(UnkPmCallbackInfo* info) {
    func_0207c0f4(&data_0211614c, info);
}

void func_0207c1f4(UnkPmCallbackInfo* info) {
    func_0207c108(&data_02116154, info);
}

void func_0207c20c(UnkPmCallbackInfo* info) {
    func_0207c154(&data_0211614c, info);
}

void func_0207c224(UnkPmCallbackInfo* info) {
    func_0207c154(&data_02116154, info);
}
