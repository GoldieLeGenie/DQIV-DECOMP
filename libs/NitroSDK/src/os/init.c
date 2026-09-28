#include <nitro/reg.h>
#include <nitro/card.h>

// clang-format off
static asm void func_02079230(void) {
    mov     r12, #0x4000000
    ldr     r1, [r12, #0x208]
    str     r12, [r12, #0x208]
loop:
    ldrh    r0, [r12, #0x6]
    cmp     r0, #0x0
    bne     loop
    str     r1, [r12, #0x208]
    bx      lr
}
// clang-format on

void OS_InitAllSystems(void) {
    OS_RegionsInit();
    func_0207a074();
    func_02077710();
    OS_ExtendedRegionInit();
    OS_InitIRQQueue();
    func_020776dc();
    func_02079918();
    func_02067dd4();
    OS_VAlarmSystemInit();
    func_02079ecc();
    OS_InitThread();
    func_02079d9c();
    func_0205ec54();
    CARD_Init();
    func_0207b844();
    func_02079230();
}
