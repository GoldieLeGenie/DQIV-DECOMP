#include "os_internal.h"

u32 data_020c405c = 0xffffffff; // console type cache

// Returns whether running on an emulator
BOOL func_02078d40(void) {
    return FALSE;
}

// Returns the console type
u32 func_02078d48(void) {
    data_020c405c = 0x82000001;
    return data_020c405c;
}
