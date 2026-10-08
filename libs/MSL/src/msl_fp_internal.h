#ifndef MSL_FP_INTERNAL_H
#define MSL_FP_INTERNAL_H

#include <ansi_fp.h>

#ifdef __cplusplus
extern "C" {
#endif

int  __must_round(const decimal* d, int digits);
void __dorounddecup(decimal* d, int digits);
void __rounddec(decimal* d, int digits);
void __ull2dec(decimal* result, unsigned long long val);
void __timesdec(decimal* result, const decimal* x, const decimal* y);
void func_02003d48(decimal* d, const char* s, short exp);   // digit string -> decimal (rounded to 32 digits)
void func_02003de4(decimal* result, long exp);               // 2^exp as decimal
void func_02004168(decimal* d, double x);                    // double -> decimal (all digits)
int  func_02004390(unsigned long long x);                    // 64-bit population count
int  func_02004424(double x);                                // sign bit of x (0 or 0x80000000)


#ifdef __cplusplus
}
#endif

#endif
