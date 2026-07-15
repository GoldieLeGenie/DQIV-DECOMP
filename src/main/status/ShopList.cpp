#include "main/status/ShopList.hpp"

status::ShopData status::ShopData_;
char check_map[4] = "en";

THUMB void status::ShopList::initialize()
{
    ShopData_.shopDataFirst_ = excelParam.shopDataFirst_;
    ShopData_.shopDataSecond_ = excelParam.shopDataSecond_;
}


THUMB int status::ShopList::getDataIndex(int shop)
{
    char name[4];
    

    if (g_Stage.crusingPeopleEncount_ == 1) {
        func_020033e0(name, check_map);
        name[2] = '\0';
    } else {
        char* check = "ss";
        name[0] = g_Stage.getMapName()[0];
        name[1] = g_Stage.getMapName()[1];
        name[2] = '\0';
        
        if (func_020882b0(name, check) == 0) {
            name[2] = g_Stage.getMapName()[2];
            name[3] = '\0';
        }
    }

    int index;
    if (ShopData_.section_ == 0) {
        index = func_0200ce20(name);
    } else {
        index = func_0200cc64(name);
    }

    switch (shop) {
        case 1:  index += 1;  break;
        case 2:  index += 2;  break;
        case 3:  index += 8;  break;
        case 4:  index += 14; break;
        case 5:  index += 20; break;
        case 6:  index += 26; break;
        case 7:  index += 27; break;
        case 8:  index += 28; break;
        case 9:  index += 34; break;
        case 10: index += 40; break;
        case 11: index += 46; break;
    }
    return index;
}