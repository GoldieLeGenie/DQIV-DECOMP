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