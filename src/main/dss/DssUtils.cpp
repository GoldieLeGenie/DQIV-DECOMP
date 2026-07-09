#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"


ARM int dss::DssUtils::strcpy_s(char* dest, int size, char* src)
{
    if (dest == 0) return -1;
    if (size == 0) return -1;
    if (src == 0) return -1;

    size = size - 1;
    char* p = dest;

    while (*src != '\0') {
        if (size == 0) {
            *p = '\0';
            return -1;
        }

        size--;
        *dest++ = *src++;
    }

    *dest = '\0';
    return 0;
}

