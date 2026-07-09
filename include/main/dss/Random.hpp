#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"

class dssrand {
public:
    struct Random {
        unsigned int state;      // Offset +0 (0x0211a7c4)
        unsigned int multiplier; // Offset +4 (0x0211a7c8)
        unsigned int increment;  // Offset +8 (0x0211a7cc)
    };

    static int rand(int n);
    static Random dssrand; 
};