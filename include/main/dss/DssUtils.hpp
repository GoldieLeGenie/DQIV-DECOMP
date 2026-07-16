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
        Fx32() {}
        Fx32(const Fx32& other);
        Fx32& operator=(fx32 v);
        Fx32& operator=(const Fx32& other);
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
        Vector3short() { vx = 0; vy = 0; vz = 0; }
    };
    struct Vector2int {
        int vx;
        int vy;
    };
    struct Fx32Vector3 {
        Fx32 vx;
        Fx32 vy;
        Fx32 vz;
        Fx32Vector3();                                       
        Fx32Vector3(const Fx32& x, const Fx32& y, const Fx32& z)
            : vx(x), vy(y), vz(z) {}
        Fx32Vector3& operator=(const Fx32Vector3& o);
    };

    struct DssUtils
    {
       static int strcpy_s(char* dest, int size, char* src); 
    };
    
}