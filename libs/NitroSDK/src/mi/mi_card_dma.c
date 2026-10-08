#include <nitro/types.h>

extern void func_02067468(u32 dmaNo, s32 timing);
extern void func_020674ec(u32 dmaNo, const void* src, u32 size, u32 mode);
extern void func_01ff8000(u32 dmaNo, const void* src, void* dest, u32 ctrl);

/* Starts a 32-bit DMA transfer triggered by the DS card (timing 5). */
void func_02067d60(u32 dmaNo, const void* src, void* dest, u32 size) {
    vu32* reg;

    func_02067468(dmaNo, -1);
    func_020674ec(dmaNo, src, size, 0x1000000);
    if (size == 0) {
        return;
    }
    reg = (vu32*)0x040000b0 + (dmaNo * 3 + 2);
    while (*reg & 0x80000000) {
    }
    func_01ff8000(dmaNo, src, dest, 0xaf000001);
}
