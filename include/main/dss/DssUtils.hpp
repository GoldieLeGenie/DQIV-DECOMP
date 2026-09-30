#pragma once
#include <globaldefs.h>
#include "nitro/fx.hpp"

#pragma always_inline on
namespace dss{
    
    struct Fix32 {
        fx32 value;
        Fix32();                         // func_020870fc
        Fix32(fx32 v);                   // func_02087108  
        Fix32(const Fix32& other);
        Fix32& operator=(const Fix32& other);
        Fix32& operator=(fx32 v);
        Fix32 operator-(const Fix32& o) const;
        Fix32(const long& v);            // func_02087110
        Fix32(const float& v);           // func_02087120
        Fix32& operator=(long v);        // func_02087154
        bool operator>=(const Fix32& o) const;
        bool operator>(const Fix32& o) const;
        bool operator<=(const Fix32& o) const;
        Fix32& operator*=(const Fix32& o);       // func_020872fc
        Fix32& operator+=(const Fix32& o);       // func_020871f4
        Fix32 operator*(int v) const;           // func_02087268
        Fix32 operator*(const Fix32& o) const;   // func_020872a0
        Fix32 operator+(const Fix32& o) const;   // func_020871bc
        Fix32 operator/(const Fix32& o) const;   // func_02087348
        bool operator<(const Fix32& o) const;   // func_02087408
        bool operator==(const Fix32& o) const;  // func_020873a8
        bool operator!=(const Fix32& o) const;  // func_020873c0
        Fix32 operator/(int v) const;           // func_02087320
        Fix32& operator/=(int v);
        Fix32 operator-(int v) const;
    };

    struct Fix16 {
        fx16 value;
        Fix16() { value = 0; }
        Fix16(const Fix16& other);
        Fix16& operator=(const Fix16& other);
        Fix16 operator*(int v);
        Fix16 operator/(int v);
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

    template <>
    struct BitFlag<unsigned char>
    {
        unsigned char flag_;
        BitFlag() { flag_ = 0; }
    };

    typedef BitFlag<unsigned int> Flag;

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
    template <typename T>
    struct Vector2 {
        T vx;
        T vy;
        Vector2() { vx = 0; vy = 0; }
    };
    struct Vector3int {
        int vx;
        int vy;
        int vz;
    };
    template <>
    struct Vector3<int> : Vector3int {
        Vector3() { vx = 0; vy = 0; vz = 0; }
    };
    struct Fix32Vector3
    {
        Fix32 vx;
        Fix32 vy;
        Fix32 vz;
        Fix32Vector3();                                      // func_02088740
        Fix32Vector3(const int x, const int y, const int z);                // func_0208877c
        Fix32Vector3(float x, float y, float z);

        Fix32Vector3(const Fix32& x, const Fix32& y, const Fix32& z)
            : vx(x), vy(y), vz(z) {}
        void set(fx32 x, fx32 y, fx32 z);                   // func_02088854
        Fix32Vector3& operator=(const Fix32Vector3& o);       // func_020888bc
        void operator+=(const Fix32Vector3& o);              // func_0208895c
        Fix32Vector3 operator*(const Fix32& s) const;         // func_02088a28
        Fix32 operator*(const Fix32Vector3& o) const;         // func_02088d40 (dot product)
        Fix32Vector3 operator+(const Fix32Vector3& o) const;  // func_020888e8
        bool operator!=(const Fix32Vector3& o) const;        // func_02088cf4
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

extern "C" {
    unsigned int func_02008ea0(unsigned int value, unsigned int min, unsigned int max);   // clamp
    int func_02080d94(dss::Fix32 value);
    void func_020885f8(MtxFx43* m);
    void func_02088698(MtxFx43* m, short angle);
    void func_020886d0(MtxFx43* m, short angle);
    void func_0208888c(dss::Fix32Vector3* v, int x, int y, int z);
    void func_02088b10(dss::Fix32Vector3* v, void* scale);
    dss::Fix32Vector3 func_02088670(MtxFx43* m, dss::Fix32Vector3* v);
    dss::Fix32Vector3 func_02088988(const dss::Fix32Vector3& a, const dss::Fix32Vector3& b);
    dss::Fix32Vector3 func_02088bdc(const dss::Fix32Vector3& v, int div);
    dss::Fix32Vector3 func_02088b68(const dss::Fix32Vector3& v, const dss::Fix32& div);
    dss::Fix32 func_02088e90(const dss::Fix32Vector3& v);
    int func_02008eb8(int a, int b);                                           // max
    void func_02087168(void*, int);
}
