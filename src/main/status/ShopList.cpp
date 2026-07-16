#include "main/status/ShopList.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/status/GameFlag.hpp"
status::ShopData status::ShopData_;
char check_map[4] = "en";

THUMB status::ShopList::ShopList(){
    return;
}
THUMB status::ShopList::~ShopList(){
    return;
}

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


THUMB int status::ShopList::getShopCount(int shop)
{
    int count = 0;
    int dataIndex = getDataIndex(shop);
    char buf[3] = { 0, 0, 0 };
    int limit;                                   
    buf[0] = g_Stage.getMapName()[0];
    buf[1] = g_Stage.getMapName()[1];
    switch (shop)
    {
        case 2:
        {
            char* town = data_020bdc7c;
            if (func_020882b0(buf, data_020bdc78) == 0 && g_Story.chapter_ >= 5)
            {
                limit = 0;
            }
            else if (func_020882b0(buf, town) == 0 && g_AreaFlag.check(0x5E) == 0)
            {
                limit = 0;
            }
            else
            {
                limit = 6;
            }
            break;
        }
        case 8:
            if (func_020882b0(buf, data_020bdc80) == 0 && g_AreaFlag.check(0x147) == 0)
            { limit = 0; } else { limit = 6; }
            break;
        case 3:
            if (func_020882b0(buf, data_020bdc84 ) == 0 && g_Story.chapter_ < 5)
            { limit = 0; } else { limit = 6; }
            break;
        case 9:
            if (func_020882b0(buf, data_020bdc88) == 0 && g_AreaFlag.check(0x147) == 0)
            { limit = 0; } else { limit = 6; }
            break;
        case 4:
            limit = 6;
            break;
        case 10:
            limit = 6;
            break;
        case 5:
        case 11:
            limit = 6;
            break;
    }
    if (ShopData_.section_ == 0)
    {
        for (int i = 0; i < limit; i++)
        {
            if (ShopData_.shopDataFirst_[dataIndex + i].item != 0)
            {
                count++;
            }
        }
    }
    else
    {
        for (int i = 0; i < limit; i++)
        {
            if (ShopData_.shopDataSecond_[dataIndex + i].item != 0)
            {
                count++;
            }
        }
    }
    return count;
}

THUMB int status::ShopList::getShopItem(int shop, int index)
{
    int dataIndex = getDataIndex(shop);

    if (ShopData_.section_ == 0)
    {
        return ShopData_.shopDataFirst_[dataIndex + index].item;
    }
    else
    {
        return ShopData_.shopDataSecond_[dataIndex + index].item;
    }
}

THUMB int status::ShopList::getShopPrice(int shop, int index)
{
    int dataIndex = getDataIndex(shop);

    if (ShopData_.section_ == 0)
    {
        return ShopData_.shopDataFirst_[dataIndex + index].price;
    }
    else
    {
        return ShopData_.shopDataSecond_[dataIndex + index].price;
    }
}

THUMB int status::ShopList::getHotelPrice(int second)
{
    int dataIndex;

    if (second == 0)
    {
        dataIndex = getDataIndex(0);
    }
    else
    {
        dataIndex = getDataIndex(6);
    }

    if (ShopData_.section_ == 0)
    {
        return ShopData_.shopDataFirst_[dataIndex].price;
    }
    else
    {
        return ShopData_.shopDataSecond_[dataIndex].price;
    }
}

THUMB status::ShopList::ChurchType status::ShopList::getChurchType(int first)
{
    int dataIndex;

    if (first == 0)
    {
        dataIndex = getDataIndex(1);
    }
    else
    {
        dataIndex = getDataIndex(7);
    }

    if (ShopData_.section_ == 0)
    {
        switch (ShopData_.shopDataFirst_[dataIndex].price)
        {
        case NoExist: return NoExist;
        case Exist:   return Exist;
        case NoPray:  return NoPray;
        }
    }
    else
    {
        switch (ShopData_.shopDataSecond_[dataIndex].price)
        {
        case NoExist: return NoExist;
        case Exist:   return Exist;
        case NoPray:  return NoPray;
        }
    }
    return Exist;
}