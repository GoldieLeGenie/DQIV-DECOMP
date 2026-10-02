#pragma once
#include "globaldefs.h"
#include "main/window/ImageMap.hpp"

struct FieldSystem;

/* TU 0x0212a6e8-0x0212aa98 (not decompiled), vtable 0x02160a6c */
struct FieldImageMap : window::ImageMap {
    char unk_004[0x4fc];                        // 0x004

    FieldImageMap();
    ~FieldImageMap();
    void setup(FieldSystem* system);
    virtual void open();
    virtual void close();
    virtual int isOpen();
    virtual int isClose();
    virtual void cleanup();
    void execute();
    void draw();
    void clearAllMap();
};
