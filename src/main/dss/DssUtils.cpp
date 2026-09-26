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

ARM int dss::DssUtils::strcat_s(char* dest, int size, char* src)
{
    char* start;

    if (dest == NULL)
        return -1;
    if (size == 0)
        return -1;
    if (src == NULL)
        return -1;

    size--;
    start = dest;

    while (*dest != '\0') {
        if (size == 0) {
            *dest = '\0';
            return -1;
        }
        dest++;
        size--;
    }

    while (*src != '\0') {
        if (size == 0) {
            *start = '\0';
            return -1;
        }
        size--;
        *dest++ = *src++;
    }

    *dest = '\0';
    return 0;
}