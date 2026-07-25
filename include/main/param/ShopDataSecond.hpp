#pragma once
#include <globaldefs.h>


namespace param{
    struct ShopDataSecond {
        unsigned short item;
        unsigned short price;
        static int getIndex(char *name);
    };
}