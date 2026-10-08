#include <math.h>
#include "msl_fp_internal.h"

int func_02004424(double x) {
    return __HI(x) & 0x80000000;
}

int __fpclassifyd(double x) {
    switch (__HI(x) & 0x7FF00000) {
        case 0x7FF00000:
            if ((__HI(x) & 0x000FFFFF) || (__LO(x) & 0xFFFFFFFF)) {
                return FP_NAN;
            } else {
                return FP_INFINITE;
            }
        case 0:
            if ((__HI(x) & 0x000FFFFF) || (__LO(x) & 0xFFFFFFFF)) {
                return FP_SUBNORMAL;
            } else {
                return FP_ZERO;
            }
    }
    return FP_NORMAL;
}
