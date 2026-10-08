#include "../sdk_internal.h"

void OS_Terminate(void) {
    while (TRUE) {
        OS_DisableIRQ();
        func_0207a068();
    }
}

// clang-format off
asm void func_0207a068(void) {
    mov r0, #0
    mcr p15, 0, r0, c7, c0, 4
    bx lr
}
// clang-format on
