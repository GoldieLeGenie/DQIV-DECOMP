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

extern char data_0211a60c[];   

extern "C" {
    void  func_0207f840(void* heap, void* p);      /* heap free */
    int   func_0207f548(void* data);               /* is LZ compressed */
    long  func_0207f52c(void* data);               /* uncompressed size */
    void* func_0207f590(void* data);               /* decompress (allocates) */
}
