#include "os_internal.h"

#define REG_TM0CNT_L (*(vu16*)0x04000100)
#define REG_TM0CNT_H (*(vu16*)0x04000102)

#define IRQ_TIMER0 (1 << 3)

u16  data_021144dc; // initialized
BOOL data_021144e0; // timer needs a reset
vu64 data_021144e4; // tick counter

void func_02079af4(u32 timerNo);
void func_02079b88(void);

// Starts the system tick counter on timer 0
void func_02079b10(void) {
    if (data_021144dc) {
        return;
    }
    data_021144dc = TRUE;

    func_02079af4(0);

    data_021144e4 = 0;

    REG_TM0CNT_H = 0;
    REG_TM0CNT_L = 0;
    REG_TM0CNT_H = 0xc1;

    func_02077480(IRQ_TIMER0, func_02079b88);
    func_02077650(IRQ_TIMER0);

    data_021144e0 = FALSE;
}

// Timer 0 interrupt handler
void func_02079b88(void) {
    data_021144e4++;

    if (data_021144e0) {
        REG_TM0CNT_H = 0;
        REG_TM0CNT_L = 0;
        REG_TM0CNT_H = 0xc1;
        data_021144e0 = FALSE;
    }

    func_020775dc(0, (void (*)(void*))func_02079b88, NULL);
}

// Returns the system tick
u64 func_02079bf0(void) {
    vu16 countL;
    vu64 countH;
    u32  prev = OS_DisableIRQ();

    countL = REG_TM0CNT_L;
    countH = data_021144e4 & 0x0000ffffffffffffULL;

    if ((REG_IF & IRQ_TIMER0) && !(countL & 0x8000)) {
        countH++;
    }

    OS_RestoreIRQ(prev);
    return (countH << 16) | countL;
}

// Returns the low 16 bits of the system tick
u16 func_02079c90(void) {
    return REG_TM0CNT_L;
}
