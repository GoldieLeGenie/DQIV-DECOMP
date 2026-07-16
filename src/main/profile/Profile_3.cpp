#include "globaldefs.h"

extern "C" {
    void func_0208753c(void *a, int b);
    extern int data_020efc58;
}

// ARM helper: map idx 0..14 to a constant for func_0208753c(&data_020efc58, imm).
// Baserom uses an addls-pc jump table (size 0x168). This if/return chain matches
// that size under MWCC -O4,p. For idx > 14, baserom returns without calling;
// this version falls through to imm 0x24 (same as idx 14).
extern "C" ARM void func_02039460(int idx)
{
    if (idx == 0) {
        func_0208753c(&data_020efc58, 0x18);
        return;
    }
    if (idx == 1) {
        func_0208753c(&data_020efc58, 0x1B);
        return;
    }
    if (idx == 2) {
        func_0208753c(&data_020efc58, 0x1C);
        return;
    }
    if (idx == 3) {
        func_0208753c(&data_020efc58, 0x1D);
        return;
    }
    if (idx == 4) {
        func_0208753c(&data_020efc58, 0x1E);
        return;
    }
    if (idx == 5) {
        func_0208753c(&data_020efc58, 0x1F);
        return;
    }
    if (idx == 6) {
        func_0208753c(&data_020efc58, 0x20);
        return;
    }
    if (idx == 7) {
        func_0208753c(&data_020efc58, 0x21);
        return;
    }
    if (idx == 8) {
        func_0208753c(&data_020efc58, 0x24);
        return;
    }
    if (idx == 9) {
        func_0208753c(&data_020efc58, 0x23);
        return;
    }
    if (idx == 10) {
        func_0208753c(&data_020efc58, 0x22);
        return;
    }
    if (idx == 11) {
        func_0208753c(&data_020efc58, 0x19);
        return;
    }
    if (idx == 12) {
        func_0208753c(&data_020efc58, 0x1A);
        return;
    }
    if (idx == 13) {
        func_0208753c(&data_020efc58, 0x25);
        return;
    }
    func_0208753c(&data_020efc58, 0x24);
}
