#include "ov028/MaterielMenu_SHOP/MaterielMenu_SHOP.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/UseItem.hpp"

THUMB void MaterielMenu_SHOP_SELL_SACK::menuSetup()
{
    status::g_Party.setPlayerMode();
    menuItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD_CANCEL, menu::MenuItem::CURSORTYPE_ACTIVE);
    menuItem3_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH, menu::MenuItem::CURSORTYPE_NONE);
    menuItem2_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_CANCEL, menu::MenuItem::CURSORTYPE_NONE);
    navigator_.setupBase();
    itemIndex_ = 0;
    pageStart_ = 0;
    func_ov016_0216ff2c()->activeItem_ = 0;
    func_ov016_0216ff2c()->activeItemPage_ = 0;
    if (status::g_Party.haveItemSack_.getCount() > 6) {
        itemCount_ = 6;
    } else {
        itemCount_ = status::g_Party.haveItemSack_.getCount();
    }
}

THUMB void MaterielMenu_SHOP_SELL_SACK::menuExecute()
{
    if (status::g_Party.haveItemSack_.getCount() > 6) {
        func_ov016_02177acc(&menuItem3_, menuItem3_.active_);
    }
    func_0201e6c4(&menuItem_, itemCount_, itemIndex_);
    func_ov016_02177a98(&menuItem2_);
}

THUMB void MaterielMenu_SHOP_SELL_SACK::menuDraw()
{
    if (data_020ed1bc.isOpen()) {
        func_ov016_0216fc58();
        return;
    }
    func_ov016_0216fbf4();
    menuItem_.drawActive();
}

THUMB void MaterielMenu_SHOP_SELL_SACK::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
        }
        return;
    }
    if (MenuUpdate_Assist::isCancel(menuItem2_)) {
        close();
        data_ov016_02186d28.open();
    }
    navigator_.setup(2, 3, status::g_Party.haveItemSack_.getCount());
    int result = MenuUpdate_Assist::menuSelect(menuItem_, navigator_);
    if (result != 0) {
        if (result == 2) {
            selectItem();
        }
        pageStart_ = navigator_.getPageNo();
        int itemIndex = menuItem_.active_;
        itemIndex_ = itemIndex;
        func_ov016_0216ff2c()->activeItem_ = itemIndex;
        int pageStart = pageStart_;
        func_ov016_0216ff2c()->activeItemPage_ = pageStart;
        changeItem();
        redraw_ = 1;
    }
    int active = menuItem_.active_;
    if (MenuUpdate_Assist::isPageFlip(menuItem3_, navigator_, active)) {
        itemIndex_ = menuItem_.active_ = active;
        pageStart_ = navigator_.getPageNo();
        int itemIndex = itemIndex_;
        func_ov016_0216ff2c()->activeItem_ = itemIndex;
        int pageStart = pageStart_;
        func_ov016_0216ff2c()->activeItemPage_ = pageStart;
        changeItem();
        redraw_ = 1;
    }
}

THUMB void MaterielMenu_SHOP_SELL_SACK::selectItem()
{
    int itemID = status::g_Party.haveItemSack_.getItem(itemIndex_ + pageStart_ * 6);
    close();
    if (status::UseItem::getSellType(itemID) == 1) {
        data_ov016_02185968.sellType_ = 1;
        data_ov016_02185968.open();
        return;
    }
    if (status::g_Party.haveItemSack_.getItemCount(itemIndex_ + pageStart_ * 6) == 1) {
        MaterielMenu_SHOP_MANAGER::getSingleton()->setSellQuantity(1);
        data_ov016_02185968.sellType_ = status::UseItem::getSellType(itemID);
        data_ov016_02185968.open();
        return;
    }
    data_ov016_02185f88.open();
}

THUMB void MaterielMenu_SHOP_SELL_SACK::changeItem()
{
    if (status::g_Party.haveItemSack_.getCount() < 6) {
        itemCount_ = status::g_Party.haveItemSack_.getCount();
    } else if ((pageStart_ + 1) * 6 > status::g_Party.haveItemSack_.getCount()) {
        itemCount_ = status::g_Party.haveItemSack_.getCount() - pageStart_ * 6;
    } else {
        itemCount_ = 6;
    }
    if (itemIndex_ > itemCount_ - 1) {
        itemIndex_ = itemCount_ - 1;
    }
}
