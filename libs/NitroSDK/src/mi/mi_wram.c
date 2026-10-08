#include <nitro/types.h>

#define REG_WRAMCNT (*(vu8 *)0x04000247)

/* Set the shared WRAM bank assignment */
void func_020670bc(u32 cnt) {
    REG_WRAMCNT = cnt;
}
