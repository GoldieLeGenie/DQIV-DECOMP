#include "ov028/MaterielMenu_SHOP/MaterielMenu_SHOP.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/text/TextAPI.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/UseItem.hpp"

THUMB void MaterielMenu_SHOP_BUYMENU::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02080e64(-4, 0);
    menuItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD, menu::MenuItem::CURSORTYPE_ACTIVE);
    menuItem2_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD_CANCEL, menu::MenuItem::CURSORTYPE_NONE);
    navigator_.setupBase();
    activeItem_ = func_ov016_0216ff2c()->activeItem_;
    message_ = 0;
    for (int i = 0; i < MaterielMenu_SHOP_MANAGER::getSingleton()->getSellItemCount(); i++) {
        int itemID;
        if (MaterielMenu_SHOP_MANAGER::getSingleton()->getExtraShop() == 1) {
            if (i == 0) {
                itemID = 0x6f;
            } else {
                itemID = 7;
            }
        } else {
            itemID = MaterielMenu_SHOP_MANAGER::getSingleton()->getItem(i);
        }
        for (int j = 0; j < status::g_Party.haveItemSack_.getCount(); j++) {
            if (itemID == status::g_Party.haveItemSack_.getItem(j)) {
                fukuroItemCount_[i] = status::g_Party.haveItemSack_.getItemCount(j);
                break;
            }
            fukuroItemCount_[i] = 0;
        }
    }
}

THUMB void MaterielMenu_SHOP_BUYMENU::menuExecute()
{
    func_ov016_021779ec(&menuItem_, activeItem_, MaterielMenu_SHOP_MANAGER::getSingleton()->getSellItemCount());
    func_ov016_02177a98(&menuItem2_);
}

THUMB void MaterielMenu_SHOP_BUYMENU::menuDraw()
{
    if (data_020ed1bc.isOpen()) {
        func_ov016_0216fc58();
        return;
    }
    func_ov016_0216fb24(fukuroItemCount_, 0);
    menuItem_.drawActive();
}

THUMB void MaterielMenu_SHOP_BUYMENU::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
            if (message_) {
                menuItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD_CANCEL, menu::MenuItem::CURSORTYPE_ACTIVE);
                message_ = 0;
            }
        }
        return;
    }
    if (MenuUpdate_Assist::isCancel(menuItem2_)) {
        close();
        data_020ed1bc.openMessageForTALK();
        data_020ed1bc.addMessageNOWAIT(MaterielMenu_SHOP_MESSAGE_MANAGER::getSingleton()->cancel());
        data_020ed1bc.addMessageWAITKEY();
        data_ov016_02185c10.open();
        data_ov016_02185c10.mode_ = 1;
        return;
    }
    navigator_.setup(1, 6, MaterielMenu_SHOP_MANAGER::getSingleton()->getSellItemCount());
    int active = menuItem_.active_;
    int result = MenuUpdate_Assist::menuSelect(menuItem_, navigator_);
    if (result != 0) {
        if (result == 2) {
            checkBuy();
        } else if (result == 6) {
            changeQuantity(false);
        } else if (result == 7) {
            changeQuantity(true);
        } else {
            MaterielMenu_SHOP_MANAGER::getSingleton()->setItemQuantity(active, 1);
        }
        activeItem_ = menuItem_.active_;
        int activeItem = activeItem_;
        func_ov016_0216ff2c()->activeItem_ = activeItem;
        redraw_ = 1;
    }
}

THUMB void MaterielMenu_SHOP_BUYMENU::checkBuy()
{
    MaterielMenu_SHOP_MANAGER* manager = MaterielMenu_SHOP_MANAGER::getSingleton();
    data_020ed1bc.openMessageForTALK();
    unsigned int gold = status::g_Party.gold_;
    if (gold < manager->getItemPriceSum(activeItem_)) {
        int mes[2];
        MaterielMenu_SHOP_MESSAGE_MANAGER::getSingleton()->noMoney(mes);
        data_020ed1bc.addMessage(mes[0]);
        data_020ed1bc.addMessageNOWAIT(mes[1]);
        data_020ed1bc.addMessageWAITKEY();
        close();
        data_ov016_02185c10.open();
        data_ov016_02185c10.mode_ = 1;
        return;
    }
    bool plural = false;
    bool battleUse = false;
    int mes[3] = {0, 0, 0};
    if (manager->getItemQuantity(activeItem_) > 1) {
        plural = true;
    }
    if (status::UseItem::isUsuallyUse(manager->getItem(activeItem_))) {
        battleUse = true;
    }
    MaterielMenu_SHOP_MESSAGE_MANAGER::getSingleton()->buyItem(plural, battleUse, mes);
    if (MaterielMenu_SHOP_MANAGER::getSingleton()->getExtraShop() == 1) {
        if (menuItem_.active_ == 0) {
            TextAPI::setMACRO0(0xa, 0x40000000, 0x6f);
        } else {
            TextAPI::setMACRO0(0xa, 0x40000000, 7);
        }
    } else {
        TextAPI::setMACRO0(0xa, 0x40000000, manager->getItem(activeItem_));
    }
    TextAPI::setMACRO0(0x54, 0xf0000000, manager->getItemQuantity(activeItem_));
    if (mes[2] == 0) {
        data_020ed1bc.addMessage(mes[0], mes[1]);
    } else {
        data_020ed1bc.addMessage(mes[0], mes[1], mes[2]);
    }
    data_020ed1bc.setMessageLastCursor(true);
    close();
    int activeItem = activeItem_;
    func_ov016_0216ff2c()->activeItem_ = activeItem;
    data_ov016_02186c1c.open();
}

THUMB void MaterielMenu_SHOP_BUYMENU::changeQuantity(bool add)
{
    if (add) {
        MaterielMenu_SHOP_MANAGER::getSingleton()->addItem(activeItem_);
    } else {
        MaterielMenu_SHOP_MANAGER::getSingleton()->subItem(activeItem_);
    }
}
