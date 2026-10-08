#include "os_internal.h"

typedef struct UnkVAlarmState {
    /* 0x00 */ u16   active;
    /* 0x04 */ s32   unk_04;
    /* 0x08 */ s32   unk_08;
    /* 0x0c */ void* head;
    /* 0x10 */ void* tail;
} UnkVAlarmState;

UnkVAlarmState data_021144ec;

#define IRQ_VCOUNT (1 << 2)

void OS_VAlarmSystemInit(void) {
    if (data_021144ec.active == FALSE) {
        data_021144ec.active = TRUE;

        data_021144ec.head = NULL;
        data_021144ec.tail = NULL;

        func_02077680(IRQ_VCOUNT);

        data_021144ec.unk_08 = 0;
        data_021144ec.unk_04 = 0;
    }
}
