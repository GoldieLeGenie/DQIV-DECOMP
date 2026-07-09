#pragma once
#include <globaldefs.h>


namespace dss{
    enum fx32 {
        _fx32_min_ = -0x7fffffff,
        _fx32_max_ = 0x7fffffff
    };
    struct Fx32
    {
        fx32 value;
    };
    template <typename T>
    struct BitFlag
    {
        T flag_;
    };
    struct BitFlaguint
    {
        unsigned int flag_;
    };
    struct BitFlagushort
    {
        unsigned short flag_;
    };
    struct BitFlaguchar
    {
        unsigned char flag_;
    };
    template <int N>
    struct FlagArray {
        BitFlag<unsigned int> flag_[7];
    };
    struct Vector3short {
        short vx;
        short vy;
        short vz;
    };
    struct Fx32Vector3 {
        Fx32 vx;
        Fx32 vy;
        Fx32 vz;
    };

    struct DssUtils
    {
       static int strcpy_s(char* dest, int size, char* src); 
    };
    
}