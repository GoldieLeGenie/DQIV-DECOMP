#include <nitro/types.h>

extern void func_020670bc(u32 bank);
extern void func_020673ec(u32 dmaNo);

/* MI module init: gives all shared WRAM to ARM7 and stops DMA 0. */
void func_02067dd4(void) {
    func_020670bc(3);
    func_020673ec(0);
}
