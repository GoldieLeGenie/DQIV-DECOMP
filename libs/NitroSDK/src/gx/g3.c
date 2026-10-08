#include "gx_internal.h"

#define REG_GXFIFO (*(vu32 *)0x04000400)

void func_02066dcc(const void *src, volatile void *dest);
void func_02067940(const void *src, volatile void *dest);

/* Matrix load/multiply commands sent through the geometry FIFO */
void func_02065034(const void *mtx) {
    REG_GXFIFO = 0x17;
    func_02066dcc(mtx, &REG_GXFIFO);
}

void func_02065050(const void *mtx) {
    REG_GXFIFO = 0x19;
    func_02066dcc(mtx, &REG_GXFIFO);
}

void func_0206506c(const void *mtx) {
    REG_GXFIFO = 0x1a;
    func_02067940(mtx, &REG_GXFIFO);
}
