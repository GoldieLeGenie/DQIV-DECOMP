#pragma once
#include <globaldefs.h>
#include "main/param/Param.hpp"
#include "main/status/ExcelParam.hpp"

namespace status{
    struct ShopData {                              // data_020d0bcc
        int section_;                              // +0
        param::ShopDataFirst* shopDataFirst_;      // +4
        param::ShopDataSecond* shopDataSecond_;    // +8
    };
    
    struct ShopList {
        static void initialize();
    };
    extern ShopData ShopData_;                 // data_020d0bcc
}