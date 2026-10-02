#pragma once
#include <globaldefs.h>
#include "nitro/fx.hpp"

extern "C" fx32 FX_Divide(fx32 numer, fx32 denom);
extern "C" fx32 FX_Sqrt(fx32 value);

#pragma always_inline on
namespace dss{
    
    struct Fix32 {
        fx32 value;
        Fix32();
        Fix32(fx32 v);
        Fix32(const long& v);
        Fix32(const float& v);
        Fix32(const Fix32& other);
        Fix32& operator=(long v);
        Fix32& operator=(fx32 v);
        Fix32& operator=(float v);
        Fix32& operator=(const Fix32& other);
        Fix32 operator+(int v) const;
        Fix32 operator+(const Fix32& o) const;
        void operator+=(int v);
        void operator+=(const Fix32& o);
        Fix32 operator-(int v) const;
        Fix32 operator-(const Fix32& o) const;
        void operator-=(const Fix32& o);
        Fix32 operator*(int v) const;
        Fix32 operator*(const Fix32& o) const;
        void operator*=(int v);
        void operator*=(const Fix32& o);
        Fix32 operator/(int v) const;
        Fix32 operator/(const Fix32& o) const;
        void operator/=(int v);
        void operator/=(const Fix32& o);
        bool operator==(const Fix32& o) const;
        bool operator!=(const Fix32& o) const;
        bool operator>(const Fix32& o) const;
        bool operator>=(const Fix32& o) const;
        bool operator<(const Fix32& o) const;
        bool operator<=(const Fix32& o) const;
        Fix32 sqrt();
        float getfloat();
    };

    struct Fix16 {
        fx16 value;
        Fix16() { value = 0; }
        Fix16(const long& v);
        Fix16(const Fix16& other);
        Fix16& operator=(long v);
        Fix16& operator=(float v);
        Fix16& operator=(const Fix16& other);
        Fix16& operator=(const Fix32& other);
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

        BitFlag() { flag_ = 0; }
        void set(T flag) { flag_ |= flag; }
        void remove(T flag) { flag_ &= ~flag; }
        bool check(T flag) const { return (flag_ & flag) ? true : false; }
        void clear() { flag_ = 0; }
    };

    template <>
    struct BitFlag<unsigned char>
    {
        unsigned char flag_;
        BitFlag() { flag_ = 0; }
        bool check(unsigned char flag) const { return (flag_ & flag) ? true : false; }
        void set(unsigned char flag) { flag_ |= flag; }
        void remove(unsigned char flag) { flag_ &= ~flag; }
    };

    typedef BitFlag<unsigned int> Flag;

    struct Flag32 : BitFlag<unsigned int> {
        Flag32() { flag_ = 0; }
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
    struct Vector2 {
        T vx;
        T vy;
        inline Vector2();     // defined in DssVectorDefault.hpp
        Vector2(long x, long y) { vx = x; vy = y; }
        void operator=(const Vector2& o) { vx = o.vx; vy = o.vy; }
    };
    template <typename T>
    struct Vector3 {
        T vx;
        T vy;
        T vz;
        inline Vector3();     // defined in DssVectorDefault.hpp
        Vector3(float x, float y, float z) { vx = x; vy = y; vz = z; }
        void operator=(const Vector3& o) { vx = o.vx; vy = o.vy; vz = o.vz; }
    };
    template <>
    inline Vector2<int>::Vector2() { vx = 0; vy = 0; }

    template <>
    struct Vector3<short> : Vector3short {
        Vector3() { vx = 0; vy = 0; vz = 0; }
        Vector3(const short& x, const short& y, const short& z) { vx = x; vy = y; vz = z; }
        void set(const short& x, const short& y, const short& z) { vx = x; vy = y; vz = z; }
        void operator=(const Vector3<short>& o) { vx = o.vx; vy = o.vy; vz = o.vz; }
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
        Fix32Vector3();
        Fix32Vector3(const int x, const int y, const int z);
        Fix32Vector3(float x, float y, float z);

        Fix32Vector3(const Fix32& x, const Fix32& y, const Fix32& z)
        {
            vx = x;
            vy = y;
            vz = z;
        }
        void set(const Fix32& x, const Fix32& y, const Fix32& z);
        void set(fx32 x, fx32 y, fx32 z);
        void set(float x, float y, float z);
        void setFix32(int x, int y, int z);
        void operator=(const Fix32Vector3& o);
        Fix32Vector3 operator+(const Fix32Vector3& o) const;
        void operator+=(const Fix32Vector3& o);
        Fix32Vector3 operator-(const Fix32Vector3& o) const;
        void operator-=(const Fix32Vector3& o);
        Fix32Vector3 operator*(const Fix32& s) const;
        Fix32Vector3 operator*(int s) const;
        void operator*=(const Fix32& s);
        void operator*=(int s);
        Fix32Vector3 operator/(const Fix32& s) const;
        Fix32Vector3 operator/(int s) const;
        void operator/=(const Fix32& s);
        void operator/=(int s);
        bool operator==(const Fix32Vector3& o) const;
        bool operator!=(const Fix32Vector3& o) const;
        Fix32 operator*(const Fix32Vector3& o) const;
        Fix32Vector3 operator%(const Fix32Vector3& o) const;
        Fix32 length() const;
        Fix32 lengthsq() const;
        Fix32 length(const Fix32Vector3& o) const;
        Fix32 lengthsq(const Fix32Vector3& o) const;
        void normalize();
    };
    int arrayToIndex(int* array, int value, int max);
    int getRandomVariation(int value, int under, int over);
    int arrayToMinIndex(int* array, int count);

    struct DssUtils
    {
    
       static int strcpy_s(char* dest, int size, char* src); 
       static int strcat_s(char* dest, int size, char* src);
       static int unkfunc_020882b0(const char* str1, const char* str2);   // strcmp
       static void* unkfunc_020882d4(void* dst, int c, int n);               // memset
    };
    
}

extern "C" {
    unsigned int func_02008ea0(unsigned int value, unsigned int min, unsigned int max);   // clamp
    char* func_0208828c(char* dst, const char* src);                                   // strcpy
    unsigned int func_02088280(const char* str);                                       // strlen
    int func_020882bc(const char* a, const char* b, unsigned int n);                   // strncmp
    int func_02088308(char* buf, int size, const char* fmt, ...);                      // sprintf_s
    int func_0208a104(void);                                                          // language
    int func_02080d94(dss::Fix32 value);
    void func_020885f8(MtxFx43* m);
    void func_02088698(MtxFx43* m, short angle);
    void func_020886d0(MtxFx43* m, short angle);
    dss::Fix32Vector3 func_02088670(MtxFx43* m, dss::Fix32Vector3* v);
    int func_02008eb8(int a, int b);                                           // max
    int func_02008ec4(int a, int b);                                           // min
}
