#include "ov028/MaterielMenu_SHOP/MaterielMenu_SHOP.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/UseItem.hpp"

static inline int getItem(status::HaveItem* haveItem, int index)
{
    return haveItem->getItem(index);
}

THUMB void MaterielMenu_SHOP_SELL_ITEM::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02051900(&menuItem_, 3, 5);
    func_02051900(&menuItem3_, 0, 0);
    func_02051900(&menuItem2_, 2, 0);
    activeChara_ = func_ov016_0216ff2c()->activeChara_;
    pageStart_ = 0;
    int i = 0;
    status::HaveItem& haveItem = status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveItem_;
    while (haveItem.isEquipment(i) == true) {
        i++;
        if (i > haveItem.getCount()) {
            break;
        }
    }
    itemIndex_ = i;
    if (i == haveItem.getCount()) {
        itemIndex_ = 0;
    }
    int itemIndex = itemIndex_;
    func_ov016_0216ff2c()->activeItem_ = itemIndex;
    func_ov016_0216ff2c()->activeItemPage_ = 0;
    func_02023324(&navigator_);
}

THUMB void MaterielMenu_SHOP_SELL_ITEM::menuExecute()
{
    status::HaveItem& haveItem = status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveItem_;
    int itemCount;
    if (pageStart_ == 0 && haveItem.getCount() > 6) {
        itemCount = 6;
    } else if (pageStart_ == 1) {
        itemCount = haveItem.getCount() - 6;
    } else {
        itemCount = haveItem.getCount();
    }
    func_0201e6c4(&menuItem_, itemCount, itemIndex_);
    func_ov016_02177a98(&menuItem2_);
    if (haveItem.getCount() > 6) {
        func_ov016_02177aac(&menuItem3_);
    }
}

THUMB void MaterielMenu_SHOP_SELL_ITEM::menuDraw()
{
    if (data_020ed1bc.isOpen()) {
        func_ov016_0216fc58();
        return;
    }
    func_ov016_0216fbbc();
    func_02051968(&menuItem3_);
    func_02051968(&menuItem_);
}

THUMB void MaterielMenu_SHOP_SELL_ITEM::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
        }
        return;
    }
    if (func_02023230(&menuItem2_)) {
        close();
        data_ov016_02186d28.open();
    }
    func_02023504(&navigator_, 2, 3, status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveItem_.getCount());
    int result = func_02023274(&menuItem_, &navigator_);
    if (result != 0) {
        if (result == 2) {
            int itemID = getItem(&status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveItem_, itemIndex_ + pageStart_ * 6);
            MaterielMenu_SHOP_MANAGER::getSingleton()->setSellQuantity(1);
            close();
            data_ov016_02185968.sellType_ = status::UseItem::getSellType(itemID);
            data_ov016_02185968.open();
            return;
        }
        itemIndex_ = menuItem_.active_;
        pageStart_ = func_0202333c(&navigator_);
        int itemIndex = itemIndex_;
        func_ov016_0216ff2c()->activeItem_ = itemIndex;
        int pageStart = pageStart_;
        func_ov016_0216ff2c()->activeItemPage_ = pageStart;
        redraw_ = 1;
        return;
    }
    int active = menuItem_.active_;
    if (func_020231c8(&menuItem3_, &navigator_, &active)) {
        itemIndex_ = menuItem_.active_ = active;
        pageStart_ = func_0202333c(&navigator_);
        int itemIndex = itemIndex_;
        func_ov016_0216ff2c()->activeItem_ = itemIndex;
        int pageStart = pageStart_;
        func_ov016_0216ff2c()->activeItemPage_ = pageStart;
        redraw_ = 1;
    }
}
