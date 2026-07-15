#pragma once
#include <globaldefs.h>
#include "main/param/Param.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/StageStatus.hpp"

namespace status{
    struct ShopData {                              // data_020d0bcc
        int section_;                              // +0
        param::ShopDataFirst* shopDataFirst_;      // +4
        param::ShopDataSecond* shopDataSecond_;    // +8
    };

    struct ShopList {
        static void initialize();
        int getDataIndex(int shop);

    };
    extern ShopData ShopData_;                 // data_020d0bcc
}

extern char data_020bdc70[];
extern char check_map[];                   // 0x020bdc70
extern "C" char* func_020033e0(char* dst, const char* src);      // strcpy (MSL)
extern "C" int func_0200ce20(char* name);                        //
extern "C" int func_0200cc64(char* name);                        //
