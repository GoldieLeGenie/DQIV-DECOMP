#include <globaldefs.h>
#include "main/dss/Random.hpp"


int dssrand::rand(int n) {
    unsigned int masked_n;
    
    dssrand::dssrand.state = dssrand::dssrand.multiplier * dssrand::dssrand.state + dssrand::dssrand.increment;

    masked_n = (unsigned int)n & 0xFFFF;

    if (masked_n != 0) {
        return ((((dssrand::dssrand.state >> 16) * masked_n) >> 16) & 0xFFFF);
    }
    return ((dssrand::dssrand.state >> 16) & 0xFFFF);
}

extern "C" unsigned int func_02080d80(unsigned int a, unsigned int b, unsigned int c, unsigned int d);

#pragma thumb off
extern "C" asm unsigned int func_02080d80(unsigned int a, unsigned int b, unsigned int c, unsigned int d)
{
    mov r1, r1, lsl 16
    orr r0, r1, r0, lsl 24
    orr r0, r0, r2, lsl 8
    orr r0, r3, r0
    bx lr
}
#pragma thumb on
