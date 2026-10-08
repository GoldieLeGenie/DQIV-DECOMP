#include "os_internal.h"

// IRQ handler table and IRQ thread queue, linked into the DTCM

// default handlers (os_irqwait.c)
void func_0207735c(void);
void func_020773e8(void);
void func_020773f8(void);
void func_02077408(void);
void func_02077418(void);
void func_02077428(void);
void func_02077438(void);
void func_02077448(void);
void func_02077458(void);

// one entry per IE bit; DMA 0-3 and timer 0-3 go through the callback dispatchers
UnkIrqFunction data_027e0000[22] = {
    func_0207735c, func_0207735c, func_0207735c, func_02077428, func_02077438, func_02077448,
    func_02077458, func_0207735c, func_020773e8, func_020773f8, func_02077408, func_02077418,
    func_0207735c, func_0207735c, func_0207735c, func_0207735c, func_0207735c, func_0207735c,
    func_0207735c, func_0207735c, func_0207735c, func_0207735c,
};

UnkThreadQueue data_027e0060;
