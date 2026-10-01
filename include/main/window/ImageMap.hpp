#pragma once
#include <globaldefs.h>

namespace window {
    /* vtable 0x020c13c8 */
    struct ImageMap {
        ImageMap();                             // C2 func_0203972c
        ~ImageMap();                            // D2 func_0203973c
        virtual void open() = 0;
        virtual void close() = 0;
        virtual int isOpen() = 0;
        virtual int isClose() = 0;
        virtual int isEnable();
        virtual void openBlack();
        virtual void closeBlack();
        virtual void cleanup();
    };
}
