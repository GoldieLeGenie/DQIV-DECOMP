#include "os_internal.h"

typedef struct UnkArenaInfo {
    /* 0x00 */ void* lo[9];
    /* 0x24 */ void* hi[9];
} UnkArenaInfo;

#define ARENA_INFO (*(UnkArenaInfo*)0x027ffda0)

typedef struct UnkArenaState {
    /* 0x00 */ BOOL initialized;
    /* 0x04 */ BOOL mainExEnabled;
} UnkArenaState;

UnkArenaState data_02114420;

extern char unk_IrqStackSize[];   // linker constant (0x1000)
extern char unk_SysStackSize[];   // linker constant (0)
extern char unk_DtcmArenaStart[]; // linker constant (0x027e0080)
extern char unk_MainArenaStart[]; // linker constant (0x0218d220)
extern char unk_ItcmArenaStart[]; // linker constant (0x01ff8300)

u32   func_02078d48(void);        // console type
void  func_02079908(u32 param);   // protection region 1
void  func_02079910(u32 param);   // protection region 2
void* OS_GetArenaHi(u32 id);
void* OS_GetArenaLo(u32 id);
void* OS_GetInitArenaHi(u32 id);
void* OS_GetInitArenaLo(u32 id);
void  OS_SetArenaHi(u32 id, void* hi);
void  OS_SetArenaLo(u32 id, void* lo);

void OS_RegionsInit(void) {
    if (data_02114420.initialized) {
        return;
    }
    data_02114420.initialized = TRUE;

    OS_SetArenaHi(0, OS_GetInitArenaHi(0));
    OS_SetArenaLo(0, OS_GetInitArenaLo(0));

    OS_SetArenaLo(2, NULL);
    OS_SetArenaHi(2, NULL);

    OS_SetArenaHi(3, OS_GetInitArenaHi(3));
    OS_SetArenaLo(3, OS_GetInitArenaLo(3));

    OS_SetArenaHi(4, OS_GetInitArenaHi(4));
    OS_SetArenaLo(4, OS_GetInitArenaLo(4));

    OS_SetArenaHi(5, OS_GetInitArenaHi(5));
    OS_SetArenaLo(5, OS_GetInitArenaLo(5));

    OS_SetArenaHi(6, OS_GetInitArenaHi(6));
    OS_SetArenaLo(6, OS_GetInitArenaLo(6));
}

void OS_ExtendedRegionInit(void) {
    OS_SetArenaHi(2, OS_GetInitArenaHi(2));
    OS_SetArenaLo(2, OS_GetInitArenaLo(2));

    if (!data_02114420.mainExEnabled || (func_02078d48() & 3) == 1) {
        func_02079908(0x0200002b);
        func_02079910(0x023e0021);
    }
}

void* OS_GetArenaHi(u32 id) {
    return ARENA_INFO.hi[id];
}

void* OS_GetArenaLo(u32 id) {
    return ARENA_INFO.lo[id];
}

void* OS_GetInitArenaHi(u32 id) {
    switch (id) {
        case 0:
            return (void*)0x023e0000;
        case 2:
            if (!data_02114420.mainExEnabled || (func_02078d48() & 3) == 1) {
                return NULL;
            } else {
                return (void*)0x02700000;
            }
        case 3:
            return (void*)0x02000000;
        case 4: {
            u32 irqStackLo = (u32)(u8*)data_027e0000 + 0x3f80 - (u32)unk_IrqStackSize;
            u32 sysStackLo;

            if ((u32)unk_SysStackSize == 0) {
                sysStackLo = (u32)(u8*)data_027e0000;
                if (sysStackLo < (u32)unk_DtcmArenaStart) {
                    sysStackLo = (u32)unk_DtcmArenaStart;
                }
            } else if ((s32)unk_SysStackSize < 0) {
                sysStackLo = (u32)unk_DtcmArenaStart - (u32)unk_SysStackSize;
            } else {
                sysStackLo = irqStackLo - (u32)unk_SysStackSize;
            }
            return (void*)sysStackLo;
        }
        case 5:
            return (void*)0x027ff680;
        case 6:
            return (void*)0x037f8000;
        default:
            return NULL;
    }
}

void* OS_GetInitArenaLo(u32 id) {
    switch (id) {
        case 0:
            return (void*)unk_MainArenaStart;
        case 2:
            if (!data_02114420.mainExEnabled || (func_02078d48() & 3) == 1) {
                return NULL;
            } else {
                return (void*)0x023e0000;
            }
        case 3:
            return (void*)unk_ItcmArenaStart;
        case 4:
            return (void*)unk_DtcmArenaStart;
        case 5:
            return (void*)0x027ff000;
        case 6:
            return (void*)0x037f8000;
        default:
            return NULL;
    }
}

void OS_SetArenaHi(u32 id, void* hi) {
    ARENA_INFO.hi[id] = hi;
}

void OS_SetArenaLo(u32 id, void* lo) {
    ARENA_INFO.lo[id] = lo;
}

void* OS_AllocFromArenaLo(u32 id, u32 size, u32 align) {
    void* ptr = OS_GetArenaLo(id);
    u32   newLo;

    if (!ptr) {
        return NULL;
    }

    ptr   = (void*)(((u32)ptr + align - 1) & ~(align - 1));
    newLo = (u32)((u8*)ptr + size + align - 1) & ~(align - 1);

    if (newLo > (u32)OS_GetArenaHi(id)) {
        return NULL;
    }
    OS_SetArenaLo(id, (void*)newLo);
    return ptr;
}

void OS_EnableMainExArena(void) {
    data_02114420.mainExEnabled = TRUE;
}
