#include "main/dss/UnkMemory.hpp"
#include "main/dss/UnkHeapLog.hpp"
#include "main/object/DSSAObject.hpp"
#include "nitro/os.hpp"

ARM UnkTouchPanel::UnkTouchPanel()
{
    touch_ = 0;
    x_ = 0;
    y_ = 0;
    unk_24 = 0;
    unk_28 = 0;
    unk_2c = 0;
}

UnkTouchPanel data_0211a5d4;

ARM void unkfunc_0207f4c4(void* src)
{
    data_0211a604[0] = src;
}

ARM void unkfunc_0207f4d4(void* dst)
{
    data_0211a604[1] = dst;
    switch (*(unsigned int*)data_0211a604[0] & 0xf0) {
    case 0x10:
        func_02067b88(data_0211a604[0], dst);
        break;
    case 0x20:
        func_02067c1c(data_0211a604[0], dst);
        break;
    case 0x30:
        func_02067cf4(data_0211a604[0], dst);
        break;
    }
    DC_CleanAll();
}

ARM unsigned int unkfunc_0207f52c(void* src)
{
    if (src == NULL) {
        src = data_0211a604[0];
    }
    return *(unsigned int*)src >> 8;
}

ARM int unkfunc_0207f548(void* data)
{
    switch (*(int*)data & 0xf0) {
    case 0x10:
    case 0x20:
    case 0x30:
    case 0x80:
        return 1;
    }
    return 0;
}

ARM void* unkfunc_0207f590(void* data)
{
    unkfunc_0207f4c4(data);
    void* dst = unkfunc_0207f834(&data_0211a60c, unkfunc_0207f52c(data), 4);
    unkfunc_0207f4d4(dst);
    return dst;
}

ARM void unkfunc_0207f5c8(UnkHeap* heap, unsigned int size0, unsigned int size1, unsigned int size2, int flag)
{
    unsigned int size;
    void* memory0 = OS_AllocFromArenaLo(0, size0, 0x20);
    void* memory1 = OS_AllocFromArenaLo(0, size1, 0x20);
    int lo = DSSAData::align((int)OS_GetArenaLo(0), 0x20);
    size = unkfunc_0207ebf8((unsigned int)OS_GetArenaHi(0), 0x20) - lo;
    void* memory2;
    if (flag == 0) {
        memory2 = OS_AllocFromArenaLo(0, size, 0x20);
    } else {
        size = size2;
        memory2 = OS_AllocFromArenaLo(2, size2, 0x20);
    }
    heap->heap0_ = func_020685e0(memory0, size0, 2);
    heap->heap1_ = func_020685e0(memory1, size1, 2);
    heap->heap2_ = func_020685e0(memory2, size, 1);
    func_02068a44(&heap->allocator0_, (int)heap->heap0_, 0x20);
    func_02068a44(&heap->allocator1_, (int)heap->heap1_, 0x20);
    func_02068a44(&heap->allocator2_, (int)heap->heap2_, 0x20);
    heap->size0_ = size0;
    heap->size1_ = size1;
    heap->size2_ = size;
    heap->free0_ = unkfunc_0207f84c(heap);
    heap->free1_ = unkfunc_0207f85c(heap);
    heap->free2_ = unkfunc_0207f86c(heap);
    if ((unsigned int)memory0 - 0x02000000 > 0x100000) {
        unkfunc_0207e7f4("Program Memory Over!!!! : 0x%08x\n", (unsigned int)memory0 - 0x02000000);
    }
    heap->unk_54 = (int)memory0 - 0x02000000;
    data_02120948.unkfunc_02089214();
}

ARM void unkfunc_0207f728(UnkHeap* heap, void* p)
{
    register void* caller = 0;
    asm { mov caller, lr }
    func_02068648(heap->heap1_, p);
    data_02120948.unkfunc_020892cc("SYS", p, caller, &heap->heap1_);
}

ARM void* unkfunc_0207f77c(UnkHeap* heap, int size, int align)
{
    register void* caller = 0;
    asm { mov caller, lr }
    register void* p = 0;
    p = func_02068618(heap->heap2_, size, align);
    data_02120948.unkfunc_02089250("APP", p, size, caller, &heap->heap2_);
    return p;
}

ARM void unkfunc_0207f7e0(UnkHeap* heap, void* p)
{
    register void* caller = 0;
    asm { mov caller, lr }
    func_02068648(heap->heap2_, p);
    data_02120948.unkfunc_020892cc("APP", p, caller, &heap->heap2_);
}

ARM void* unkfunc_0207f834(UnkHeap* heap, int size, int align)
{
    return unkfunc_0207f77c(heap, size, align);
}

ARM void unkfunc_0207f840(UnkHeap* heap, void* p)
{
    unkfunc_0207f7e0(heap, p);
}

ARM unsigned int unkfunc_0207f84c(UnkHeap* heap)
{
    return func_02068684(heap->heap0_);
}

ARM unsigned int unkfunc_0207f85c(UnkHeap* heap)
{
    return func_02068684(heap->heap1_);
}

ARM unsigned int unkfunc_0207f86c(UnkHeap* heap)
{
    return func_02068684(heap->heap2_);
}

ARM unsigned int unkfunc_0207f87c(UnkHeap* heap)
{
    return func_02068684(heap->heap2_);
}

ARM void** unkfunc_0207f88c(UnkHeap* heap)
{
    return &heap->heap0_;
}

ARM void** unkfunc_0207f890(UnkHeap* heap)
{
    return &heap->heap1_;
}

ARM void unkfunc_0207f898(UnkHeap* heap)
{
    data_02120948.unkfunc_020893e0();
}

ARM void unkfunc_0207f8ac(void* p)
{
    unkfunc_0207f728(&data_0211a60c, p);
}

ARM int unkfunc_0207f8c4(void* archive)
{
    return ((int*)archive)[4];
}

ARM int unkfunc_0207f8cc(void* archive, int index)
{
    return ((int*)archive)[index * 2 + 9];
}

ARM void* unkfunc_0207f8dc(void* archive, int index)
{
    return (unsigned char*)archive + (((unsigned int*)archive)[index * 2 + 8] & ~3) + (((unsigned int*)archive)[5] & ~3);
}

void* data_0211a604[2];
UnkHeap data_0211a60c;
