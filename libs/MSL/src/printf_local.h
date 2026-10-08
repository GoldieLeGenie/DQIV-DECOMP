#ifndef PRINTF_LOCAL_H
#define PRINTF_LOCAL_H

#include <wstring.h>

// MSL character class table (<ctype.h>), 128 entries, defined in ctype.c
extern const unsigned short __ctype_mapC[128];

#define PRINTF_CMAP_DIGIT 0x008
#define PRINTF_CMAP_UPPER 0x200

// same as the <ctype.h> isdigit/isupper
static inline int printf_isdigit(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int)(__ctype_mapC[c] & PRINTF_CMAP_DIGIT);
}

static inline int printf_isupper(int c) {
    return ((c < 0) || (c >= 128)) ? 0 : (int)(__ctype_mapC[c] & PRINTF_CMAP_UPPER);
}

#endif
