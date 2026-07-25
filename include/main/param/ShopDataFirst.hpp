#pragma once
#include <globaldefs.h>


namespace param{
    struct ShopDataFirst {
        unsigned short item;
        unsigned short price;
        static int getIndex(char *name);
    };
}