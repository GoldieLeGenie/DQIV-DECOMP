#pragma once
#include <globaldefs.h>
#include "nitro/fx.hpp"
#include <stddef.h>

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
        bool check(T flag) const { return (flag_ & flag) ? true : false; }
        void clear() { flag_ = 0; }
    };

    template <>
    struct BitFlag<unsigned char>
    {
        unsigned char flag_;
        BitFlag() { flag_ = 0; }
        void clear() { flag_ = 0; }
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
    template <typename T> T max(T a, T b);
    template <typename T> T min(T a, T b);
    template <typename T> T clamp(T a, T b, T c);      // min(max(a, b), c)
    template <typename T> T loop(T x, T a, T b);       // x > b: a, x < a: b

    int sprintf(char* dst, const char* fmt, ...);
    unsigned int strlen(const char* str);
    char* strcpy(char* dst, const char* src);
    char* strcat(char* dst, const char* src);
    char* strstr(const char* str, const char* sub);
    int strcmp(const char* str1, const char* str2);
    int strncmp(const char* str1, const char* str2, unsigned int n);
    char* strchr(const char* str, int c);
    void* memset(void* dst, int c, int n);
    void* memcpy(void* dst, void* src, int n);
    int sprintf_s(char* dst, size_t size, const char* fmt, ...);    // -1 if truncated
    int strcpy_s(char* dst, size_t size, const char* src);
    int strcat_s(char* dst, size_t size, const char* src);
    
}

extern "C" {
    unsigned int STD_GetStringLength(const char* str);
    char* STD_ConcatenateString(char* dst, const char* src);
    char* func_0207c2d0(const char* str, const char* sub);                             // strstr
    void MI_CpuSet(void* dest, unsigned char value, unsigned int count);
    void MI_CpuCopyU8(const void* src, void* dest, unsigned int count);
    int func_0208a104(void);                                                          // language
    int func_02080d94(dss::Fix32 value);
    void func_020885f8(MtxFx43* m);
    void func_02088698(MtxFx43* m, short angle);
    void func_020886d0(MtxFx43* m, short angle);
    dss::Fix32Vector3 func_02088670(MtxFx43* m, dss::Fix32Vector3* v);
    void func_02087590(int id);                                               // FS_LoadOverlay(arm9, id)
    void func_020875a4(int id);                                               // FS_UnloadOverlay(arm9, id)
    void func_02087564(void* slot);                                           // unload the overlay held by the slot
    void func_02084dd4(int value);
}

extern char data_020efc58[];                    // overlay slot (loaded flag, id)

// overlay ids: OVERLAY_<n>_ID are defined by the linker script, the address is the id
extern unsigned int OVERLAY_0_ID;
extern unsigned int OVERLAY_1_ID;
extern unsigned int OVERLAY_3_ID;
extern unsigned int OVERLAY_6_ID;
extern unsigned int OVERLAY_9_ID;
extern unsigned int OVERLAY_15_ID;
extern unsigned int OVERLAY_16_ID;
