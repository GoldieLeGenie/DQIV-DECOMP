#include <globaldefs.h>
#include "main/dss/Random.hpp"

dssrand::Random dssrand::dssrand;


ARM void dssrand::unkfunc_02080cec()
{
    unsigned int buffer[8];
    unsigned int seed = 0;
    OS_GetLowEntropyData(buffer);
    for (int i = 0; i < 8; i++) {
        seed += buffer[i];
    }
    dssrand.state = seed;
    dssrand.multiplier = 0x5d588b65;
    dssrand.increment = 0x269ec3;
}

ARM int dssrand::rand(int n) {
    unsigned int masked_n;
    
    dssrand::dssrand.state = dssrand::dssrand.multiplier * dssrand::dssrand.state + dssrand::dssrand.increment;

    masked_n = (unsigned int)n & 0xFFFF;

    if (masked_n != 0) {
        return ((((dssrand::dssrand.state >> 16) * masked_n) >> 16) & 0xFFFF);
    }
    return ((dssrand::dssrand.state >> 16) & 0xFFFF);
}