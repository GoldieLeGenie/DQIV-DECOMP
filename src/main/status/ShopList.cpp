#include "main/status/ShopList.hpp"

status::ShopData status::ShopData_;

THUMB void status::ShopList::initialize()
{
    ShopData_.shopDataFirst_ = excelParam.shopDataFirst_;
    ShopData_.shopDataSecond_ = excelParam.shopDataSecond_;
}
