#include "ov028/MaterielMenu_SHOP/MaterielMenu_SHOP.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/text/TextAPI.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"

THUMB void MaterielMenu_SHOP_WHO_SELL::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02080e78();
    func_02051900(&menuItem_, 3, 5);
    func_02051900(&menuItem2_, 2, 0);
    activeChara_ = func_ov016_0216ff2c()->activeChara_;
    messageCurse_ = 0;
    return_ = 0;
    maxCharaCount_ = status::g_Party.getCount();
    if (status::g_Party.fukuro_ != 0) {
        maxCharaCount_++;
    }
    func_02023324(&navigator_);
    if (MaterielMenu_SHOP_MANAGER::getSingleton()->getExtraShop() == 2) {
        extraShop_ = 1;
        extraMode_ = 0;
    } else {
        extraShop_ = 0;
        extraMode_ = 1;
    }
}

THUMB void MaterielMenu_SHOP_WHO_SELL::menuExecute()
{
    func_ov016_02177a08(&menuItem_, activeChara_, maxCharaCount_);
    func_ov016_02177a98(&menuItem2_);
}

THUMB void MaterielMenu_SHOP_WHO_SELL::menuDraw()
{
    if (messageCurse_ != 1 && return_ != 1 && extraMode_ == 1) {
        if (data_020ed1bc.isOpen()) {
            func_ov016_0216fc58();
            return;
        }
        func_ov016_0216fb98();
        func_02051968(&menuItem_);
    }
}

THUMB void MaterielMenu_SHOP_WHO_SELL::menuUpdate()
{
    if (extraShop_) {
        if (extraMessageUpdata()) {
            return;
        }
    } else if (data_020ed1bc.isOpen()) {
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
            messageCurse_ = 0;
            return_ = 0;
        }
        return;
    }
    if (func_02023230(&menuItem2_)) {
        if (extraShop_) {
            showMessage(0x6d9c, 0x6d9d);
            extraMode_ = 3;
            return;
        }
        close();
        data_020ed1bc.openMessageForTALK();
        data_020ed1bc.addMessageNOWAIT(MaterielMenu_SHOP_MESSAGE_MANAGER::getSingleton()->cancel());
        data_020ed1bc.addMessageWAITKEY();
        data_ov016_02185c10.open();
        data_ov016_02185c10.mode_ = 1;
        return;
    }
    func_02023504(&navigator_, 5, 2, maxCharaCount_);
    int result = func_02023274(&menuItem_, &navigator_);
    if (result != 0) {
        int activeChara = menuItem_.active_;
        activeChara_ = activeChara;
        func_ov016_0216ff2c()->activeChara_ = activeChara;
        if (result == 2) {
            cancel();
        }
        redraw_ = 1;
    }
}

THUMB void MaterielMenu_SHOP_WHO_SELL::cancel()
{
    if (extraShop_) {
        if (activeChara_ == status::g_Party.getCount()) {
            if (status::g_Party.haveItemSack_.getCount() == 0) {
                showMessage(0x6d88, -1);
                extraMode_ = 3;
                return;
            }
        } else if (status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveItem_.getCount() == 0) {
            showMessage(0x6d88, -1);
            extraMode_ = 3;
            return;
        }
        showMessage(0x6d8a, -1);
        extraMode_ = 2;
        return;
    }
    int itemCount;
    if (activeChara_ == status::g_Party.getCount()) {
        itemCount = status::g_Party.haveItemSack_.getCount();
    } else {
        itemCount = status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveItem_.getCount();
    }
    if (itemCount > 0) {
        close();
        if (activeChara_ == status::g_Party.getCount()) {
            data_ov016_021874e0.open();
        } else {
            data_ov016_02187640.open();
        }
        return;
    }
    close();
    int playerIndex = status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveStatus_.playerIndex_;
    data_020ed1bc.openMessageForTALK();
    TextAPI::setMACRO0(0x12, 0x50000000, playerIndex);
    int mes[2];
    if (activeChara_ == status::g_Party.getCount()) {
        MaterielMenu_SHOP_MESSAGE_MANAGER::getSingleton()->haveNoItem(true, mes);
    } else {
        MaterielMenu_SHOP_MESSAGE_MANAGER::getSingleton()->haveNoItem(false, mes);
    }
    data_020ed1bc.addMessage(mes[0]);
    data_020ed1bc.addMessageNOWAIT(mes[1]);
    data_020ed1bc.addMessageWAITKEY();
    data_ov016_02185c10.open();
    data_ov016_02185c10.mode_ = 1;
}

THUMB bool MaterielMenu_SHOP_WHO_SELL::extraMessageUpdata()
{
    if (data_020ed1bc.isOpen()) {
        if (data_020ed1bc.stat_ == menu::MenuBase::MENUBASE_STAT_OK) {
            data_020ed1bc.close();
            switch (extraMode_) {
            case 0:
                extraMode_ = 1;
                break;
            case 2:
                close();
                data_ov016_02186b14.open();
                break;
            case 3:
                MaterielMenu_WINDOW_MANAGER::getSingleton()->closeMaterielWindow();
                break;
            }
        } else if (data_020ed1bc.stat_ == menu::MenuBase::MENUBASE_STAT_CANCEL) {
            data_020ed1bc.close();
            if (extraMode_ == 0) {
                showMessage(0x6d9c, 0x6d9d);
                extraMode_ = 3;
            }
        }
        return true;
    }
    if (extraMode_ == 0) {
        showMessage(0x6d84, 0x6d85);
        data_020ed1bc.setYesNo();
    }
    return false;
}

THUMB void MaterielMenu_SHOP_WHO_SELL::showMessage(int mes1, int mes2)
{
    data_020ed1bc.openMessageForTALK();
    data_020ed1bc.addMessage(mes1);
    if (mes2 != -1) {
        data_020ed1bc.addMessage(mes2);
    }
}
