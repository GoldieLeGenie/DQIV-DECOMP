#pragma once
#include <globaldefs.h>

#pragma always_inline on
namespace dss{
    
    typedef signed int fx32;
    struct VecFx32 {
        fx32 x;
        fx32 y;
        fx32 z;
    };
    struct Fx32 {
        fx32 value;
        Fx32();                         // func_020870fc
        Fx32(fx32 v);                   // func_02087108  
        Fx32(const Fx32& other);
        Fx32& operator=(fx32 v);
        Fx32 operator-(const Fx32& o);
        Fx32(const long& v);            // func_02087110
        Fx32(const float& v);           // func_02087120
        Fx32& operator=(long v);        // func_02087154
        bool operator>=(const Fx32& o) const;
        Fx32& operator*=(const Fx32& o);       // func_020872fc
        Fx32& operator+=(const Fx32& o);       // func_020871f4
        Fx32 operator*(int v) const;           // func_02087268
        Fx32 operator+(const Fx32& o) const;   // func_020871bc
        Fx32 operator/(const Fx32& o) const;   // func_02087348
        bool operator<(const Fx32& o) const;   // func_02087408
        bool operator==(const Fx32& o) const;  // func_020873a8
        bool operator!=(const Fx32& o) const;  // func_020873c0
        Fx32 operator/(int v) const;           // func_02087320
    };

    template <typename T>
    void swap(T* a, T* b)
    {
        T temp = *b;
        *b = *a;
        *a = temp;
    }

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
        void set(short x, short y, short z) { vx = x; vy = y; vz = z; }
    };
    template <typename T>
    struct Vector3;

    template <>
    struct Vector3<short> : Vector3short {
        Vector3() { vx = 0; vy = 0; vz = 0; }
        Vector3(const short& x, const short& y, const short& z) { vx = x; vy = y; vz = z; }
    };
    struct Vector3int {
        int vx;
        int vy;
        int vz;
    };
    struct Fx32Vector3
    {
        Fx32 vx;
        Fx32 vy;
        Fx32 vz;
        Fx32Vector3();                                      // func_02088740
        Fx32Vector3(const int x, const int y, const int z);                // func_0208877c

        Fx32Vector3(const Fx32& x, const Fx32& y, const Fx32& z)
            : vx(x), vy(y), vz(z) {}
        void set(fx32 x, fx32 y, fx32 z);                   // func_02088854
        Fx32Vector3& operator=(const Fx32Vector3& o);       // func_020888bc
        void operator+=(const Fx32Vector3& o);              // func_0208895c
        Fx32Vector3 operator*(const Fx32& s) const;         // func_02088a28
        Fx32 operator*(const Fx32Vector3& o) const;         // func_02088d40 (dot product)
        Fx32Vector3 operator+(const Fx32Vector3& o) const;  // func_020888e8
        bool operator!=(const Fx32Vector3& o) const;        // func_02088cf4
    };
    int arrayToIndex(int* array, int value, int max);
    int getRandomVariation(int value, int under, int over);
    int arrayToMinIndex(int* array, int count);

    struct DssUtils
    {
    
       static int strcpy_s(char* dest, int size, char* src); 
       static int strcat_s(char* dest, int size, char* src);
    };
    
}

struct Mtx43 {
    int m[12];
};

extern "C" {
    int func_02080d94(dss::Fx32 value);
    void func_020885f8(Mtx43* m);
    void func_02088698(Mtx43* m, short angle);
    void func_020886d0(Mtx43* m, short angle);
    void func_0208888c(dss::Fx32Vector3* v, int x, int y, int z);
    void func_02088b10(dss::Fx32Vector3* v, void* scale);
    dss::Fx32Vector3 func_02088670(Mtx43* m, dss::Fx32Vector3* v);
}
