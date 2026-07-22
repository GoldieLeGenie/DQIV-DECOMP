#pragma once
#include <globaldefs.h>


namespace dss{
    typedef signed int fx32;
    struct Fx32 {
        fx32 value;
        Fx32();                         // func_020870fc
        Fx32(fx32 v);                   // func_02087108  
        Fx32(const Fx32& other);
        Fx32& operator=(fx32 v);
        Fx32 operator-(const Fx32& o);
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
    struct Vector3int {
        int vx;
        int vy;
        int vz;
    };
    struct Fx32Vector3 {
        Fx32 vx;
        Fx32 vy;
        Fx32 vz;
        Fx32Vector3();                                       
        Fx32Vector3(const Fx32& x, const Fx32& y, const Fx32& z)
            : vx(x), vy(y), vz(z) {}
        Fx32Vector3 operator*(const Fx32& s);          // func_02088a28
        Fx32Vector3 operator+(const Fx32Vector3& o);   // func_020888e8
        Fx32Vector3& operator=(const Fx32Vector3& o);  // func_020888bc 
        
    };

    struct DssUtils
    {
       static int strcpy_s(char* dest, int size, char* src); 
    };
    
}