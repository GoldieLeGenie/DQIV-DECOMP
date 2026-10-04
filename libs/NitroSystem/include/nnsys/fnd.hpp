#pragma once

struct NNSFndAllocator {
    void* pFunc;                                // 0x00
    void* pHeap;                                // 0x04
    unsigned int heapParam1;                    // 0x08
    unsigned int heapParam2;                    // 0x0C
};

extern "C" {
    void  func_02068a44(NNSFndAllocator* allocator, int heap, int alignment);       // NNS_FndInitAllocatorForExpHeap
    void* func_02068a1c(NNSFndAllocator* allocator, unsigned int size);             // NNS_FndAllocFromAllocator
    void  func_02068a30(NNSFndAllocator* allocator, void* memBlock);                // NNS_FndFreeToAllocator
}
