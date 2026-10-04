#pragma once
#include <globaldefs.h>

struct DataObject {
    // vtable                                   // 0x00
    int m_flag;                                 // 0x04
    void* m_addr;                               // 0x08
    long m_size;                                // 0x0C

    DataObject();
    ~DataObject();
    virtual void setup(const char* filename, int a, int b);
    virtual void setup(void* addr);
    void cleanup();
    void* getAddr();
    long getSize();
};

struct LZDataObject : DataObject {
    LZDataObject() {}
    ~LZDataObject() {}
    virtual void setup(const char* filename, int a, int b);
    virtual void setup(void* addr);
};

// DS-only main heap
struct UnkHeap {
    char unk_00[0x54];
    unsigned int unk_54;                        // 0x54
};

extern UnkHeap data_0211a60c;

extern "C" {
    void* func_0207f834(void* heap, int size, int align);  /* heap alloc */
    void  func_0207f840(void* heap, void* p);      /* heap free */
    void  func_0207f898(void* heap);               /* heap */
    unsigned int func_0207f87c(void* heap);        /* heap free size */
    int   func_0207f548(void* data);               /* is LZ compressed */
    long  func_0207f52c(void* data);               /* uncompressed size */
    void* func_0207f590(void* data);               /* decompress (allocates) */
}
