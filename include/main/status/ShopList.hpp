#pragma once
#include <globaldefs.h>
#include "main/param/Param.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/HaveItemSack.hpp"

namespace status{
    struct ShopData {                              // data_020d0bcc
        int section_;                              // +0
        param::ShopDataFirst* shopDataFirst_;      // +4
        param::ShopDataSecond* shopDataSecond_;    // +8
    };

    struct ShopList {
        enum ChurchType{
            NoExist = 0,
            Exist   = 1,
            NoPray  = 2,
        };
        char pad_[0x1c];                           // +0x00
        HaveItemSack sack_;                        // +0x1c
        static void initialize();
        ShopList();
        ~ShopList();
        int getDataIndex(int shop);
        int getShopCount(int shop);
        int getShopItem(int shop, int index);
        int getShopPrice(int shop, int index);
        int getHotelPrice(int second);
        ChurchType getChurchType(int first);

    };
    extern ShopData ShopData_;                 // data_020d0bcc
}

extern char check_map[];                   // 0x020bdc70
extern char data_020bdc78[]; //mj
extern char data_020bdc7c[]; //md
extern char data_020bdc80[]; //mb
extern char data_020bdc84[]; //cd
extern char data_020bdc88[]; //hc
extern "C" char* func_020033e0(char* dst, const char* src);      // strcpy (MSL)
extern "C" int func_0200ce20(char* name);                        //
extern "C" int func_0200cc64(char* name);                        //
