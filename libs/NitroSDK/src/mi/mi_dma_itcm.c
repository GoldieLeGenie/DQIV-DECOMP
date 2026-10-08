#include <nitro.h>

// DMA register setup routines, linked into the ITCM

u32 OS_DisableIRQ(void);
u32 OS_RestoreIRQ(u32 state);

void func_01ff8000(u32 dmaNo, const void* src, void* dest, u32 ctrl)
{
    u32 e = OS_DisableIRQ();
    vu32* p = (vu32*)(0x040000b0 + dmaNo * 12);
    p[0] = (u32)src;
    p[1] = (u32)dest;
    p[2] = ctrl;
    OS_RestoreIRQ(e);
}

void func_01ff8040(u32 dmaNo, const void* src, void* dest, u32 ctrl)
{
    u32 e = OS_DisableIRQ();
    vu32* p = (vu32*)(0x040000b0 + dmaNo * 12);
    p[0] = (u32)src;
    p[1] = (u32)dest;
    p[2] = ctrl;
    {
        u32 dummy = *(vu32*)0x040000b0;
        dummy = *(vu32*)0x040000b0;
    }
    if (dmaNo == 0) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0x81400001;
    }
    OS_RestoreIRQ(e);
}

void func_01ff80b0(u32 dmaNo, volatile const void* src, void* dest, u32 ctrl)
{
    vu32* p = (vu32*)(0x040000b0 + dmaNo * 12);
    p[0] = (u32)src;
    p[1] = (u32)dest;
    p[2] = ctrl;
}

void func_01ff80d4(u32 dmaNo, volatile const void* src, void* dest, u32 ctrl)
{
    vu32* p = (vu32*)(0x040000b0 + dmaNo * 12);
    p[0] = (u32)src;
    p[1] = (u32)dest;
    p[2] = ctrl;
    {
        u32 dummy = *(vu32*)0x040000b0;
        dummy = *(vu32*)0x040000b0;
    }
    if (dmaNo == 0) {
        p[0] = 0;
        p[1] = 0;
        p[2] = 0x81400001;
    }
    {
        u32 dummy = *(vu32*)0x040000b0;
        dummy = *(vu32*)0x040000b0;
    }
}
