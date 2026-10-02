#include "ov028/MaterielMenu_CHANGEGIFT/MaterielMenu_CHANGEGIFT.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/text/TextAPI.hpp"
#include "main/status/PartyStatus.hpp"

THUMB void MaterielMenu_CHANGEGIFT_SELECTGIFT::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02080e64(-4, 0);
    menuItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD, menu::MenuItem::CURSORTYPE_ACTIVE);
    menuItem2_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_CANCEL, menu::MenuItem::CURSORTYPE_NONE);
    navigator_.setupBase();
    activeItem_ = 0;
    itemCount_ = MaterielMenu_SHOP_MANAGER::getSingleton()->getSellItemCount();
    message_ = 0;
    selectChara_ = 0;
    for (int i = 0; i < itemCount_; i++) {
        for (int j = 0; j < status::g_Party.haveItemSack_.getCount(); j++) {
            int itemID = MaterielMenu_SHOP_MANAGER::getSingleton()->getItem(i);
            if (itemID == status::g_Party.haveItemSack_.getItem(j)) {
                fukuroItemCount_[i] = status::g_Party.haveItemSack_.getItemCount(j);
                break;
            }
            fukuroItemCount_[i] = 0;
        }
    }
}

THUMB void MaterielMenu_CHANGEGIFT_SELECTGIFT::menuExecute()
{
    func_ov016_021779ec(&menuItem_, activeItem_, itemCount_);
    func_ov016_02177a98(&menuItem2_);
}

THUMB void MaterielMenu_CHANGEGIFT_SELECTGIFT::menuDraw()
{
    if (data_020ed1bc.isOpen()) {
        func_ov016_0216fce8();
        return;
    }
    func_ov016_0216fb24(fukuroItemCount_, 1);
    menuItem_.drawActive();
}

THUMB void MaterielMenu_CHANGEGIFT_SELECTGIFT::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
            if (message_) {
                cancelChange();
            }
            if (selectChara_) {
                close();
                data_ov016_0218681c.open();
                func_02080e78();
            }
        }
        return;
    }
    if (MenuUpdate_Assist::isCancel(menuItem2_)) {
        cancelChange();
        return;
    }
    navigator_.setup(1, 6, itemCount_);
    int result = MenuUpdate_Assist::menuSelect(menuItem_, navigator_);
    if (result != 0) {
        activeItem_ = menuItem_.active_;
        int activeItem = activeItem_;
        func_ov016_0216ff2c()->activeItem_ = activeItem;
        if (result == 2) {
            checkAmount();
        }
        redraw_ = 1;
    }
}

THUMB void MaterielMenu_CHANGEGIFT_SELECTGIFT::checkAmount()
{
    int itemID = MaterielMenu_SHOP_MANAGER::getSingleton()->getItem(activeItem_);
    int itemPrice = MaterielMenu_SHOP_MANAGER::getSingleton()->getItemPrice(activeItem_);
    data_020ed1bc.openMessageForTALK();
    TextAPI::setMACRO0(0xa, 0x40000000, itemID);
    if (status::g_Party.casinoCoin_ < itemPrice) {
        data_020ed1bc.addMessage(0xc8aff);
        message_ = 1;
        return;
    }
    data_020ed1bc.addMessage(0xc8b02, 0xc8b03);
    menuItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD_CANCEL, menu::MenuItem::CURSORTYPE_NONE);
    selectChara_ = 1;
}

THUMB void MaterielMenu_CHANGEGIFT_SELECTGIFT::cancelChange()
{
    int leadpc = func_ov016_0216ff2c()->leadpc_;
    close();
    data_ov016_02185928.open();
    data_ov016_02185928.mode_ = 3;
    data_020ed1bc.openMessageForTALK();
    TextAPI::setMACRO0(0xb, 0x50000000, status::g_Party.getPlayerIndex(leadpc));
    TextAPI::setMACRO0(0x2a, 0xf0000000, status::g_Party.casinoCoin_);
    data_020ed1bc.addMessage(0xc8afa);
    data_020ed1bc.setYesNo();
    func_02080e78();
}
