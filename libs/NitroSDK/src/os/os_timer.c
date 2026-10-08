#include "os_internal.h"

u16 data_021144d8; // reserved timer flags

// Marks a hardware timer as reserved by the system
void func_02079af4(u32 timerNo) {
    data_021144d8 |= 1 << timerNo;
}
