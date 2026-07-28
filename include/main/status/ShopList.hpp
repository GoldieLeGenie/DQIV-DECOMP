#pragma once
#include <globaldefs.h>
#include "main/param/Param.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/HaveItemSack.hpp"
#include "main/param/ShopDataFirst.hpp"
#include "main/param/ShopDataSecond.hpp"
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
        ShopList();
        ~ShopList();
        static void initialize();
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
extern char s_mj[4]; // 0x020bdc78
extern char s_md[4]; // 0x020bdc7c
extern char s_mb[4]; // 0x020bdc80
extern char s_cd[4]; // 0x020bdc84
extern char s_hc[4]; // 0x020bdc88
extern "C" char* func_020033e0(char* dst, const char* src);      // strcpy (MSL)
extern "C" int func_0200ce20(char* name);                        //
extern "C" int func_0200cc64(char* name);                        //
