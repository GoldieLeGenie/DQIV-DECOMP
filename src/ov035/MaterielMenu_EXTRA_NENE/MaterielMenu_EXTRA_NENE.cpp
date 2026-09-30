#include "ov035/MaterielMenu_EXTRA_NENE/MaterielMenu_EXTRA_NENE.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/text/TextAPI.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/HaveItemSack.hpp"
#include "main/status/ShopList.hpp"
#include "main/status/UseItem.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/dss/Random.hpp"
#include "main/cmn/CommonCounterInfo.hpp"

THUMB void MaterielMenu_EXTRA_NENE::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02051900(&menuItem_, 3, 5);
    func_02023324(&navigator_);
    func_ov016_0216ff34(func_ov016_0216ff2c());
    activeChara_ = 0;
    proceeds_ = 0;
    func_ov016_0216ff2c()->activeChara_ = 0;
    mode_ = 0;
    drawMode_ = 0;
    neneItemCount_ = status::g_Shop.haveItemNene_.getCount();
}

THUMB void MaterielMenu_EXTRA_NENE::menuExecute()
{
    switch (drawMode_) {
    case 0:
        func_ov016_02177a08(&menuItem_, menuItem_.active_, 2);
        break;
    case 1: {
        int count;
        if (func_ov016_0216ff2c()->activeChara_ == 1) {
            count = status::g_Party.haveItemSack_.getCount();
        } else {
            count = status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveItem_.getCount();
        }
        if (func_0202333c(&navigator_) == 0 && count > 6) {
            count = 6;
        } else if (func_0202333c(&navigator_) == func_02023348(&navigator_) - 1) {
            count -= func_0202333c(&navigator_) * 6;
        }
        func_0201e6c4(&menuItem_, count, menuItem_.active_);
        break;
    }
    case 2: {
        unsigned int count;
        int lastPage = func_02023348(&navigator_) - 1;
        int page = func_0202333c(&navigator_);
        if (page != lastPage && neneItemCount_ > 6) {
            count = 6;
        } else {
            lastPage = func_02023348(&navigator_) - 1;
            page = func_0202333c(&navigator_);
            if (page == lastPage) {
                count = neneItemCount_;
                if (count > 6) {
                    lastPage = func_02023348(&navigator_) - 1;
                    count = neneItemCount_ - lastPage * 6;
                }
            } else {
                count = neneItemCount_;
            }
        }
        func_0201e6c4(&menuItem_, count, menuItem_.active_);
        break;
    }
    }
}

THUMB void MaterielMenu_EXTRA_NENE::menuDraw()
{
    if (data_020ed1bc.isOpen() == false && mode_ != 0) {
        switch (drawMode_) {
        case 0:
            func_ov016_0216fb98();
            break;
        case 1:
            func_ov016_0216fdcc();
            break;
        case 2: {
            int lastPage = func_02023348(&navigator_) - 1;
            func_ov016_0216fe10(neneItemCount_, func_0202333c(&navigator_), lastPage);
            break;
        }
        }
        func_02051968(&menuItem_);
    }
}

THUMB void MaterielMenu_EXTRA_NENE::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if (data_020ed1bc.stat_ == menu::MenuBase::MENUBASE_STAT_OK) {
            data_020ed1bc.close();
            selectYes();
        } else if (data_020ed1bc.stat_ == menu::MenuBase::MENUBASE_STAT_CANCEL) {
            data_020ed1bc.close();
            selectNo();
        }
        return;
    }
    if (mode_ == 0) {
        showMessage(0x9473, -1, -1);
        data_020ed1bc.setYesNo();
        return;
    }
    int count = 0;
    switch (drawMode_) {
    case 0:
        count = 2;
        break;
    case 1:
        if (func_ov016_0216ff2c()->activeChara_ == 1) {
            count = status::g_Party.haveItemSack_.getCount();
        } else {
            count = status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveItem_.getCount();
        }
        break;
    case 2:
        count = status::g_Shop.haveItemNene_.getCount();
        break;
    }
    func_02023504(&navigator_, 2, 3, count);
    int result = func_02023274(&menuItem_, &navigator_);
    if (result == 0) {
        return;
    }
    if (drawMode_ == 0) {
        int active = menuItem_.active_;
        func_ov016_0216ff2c()->activeChara_ = active;
    }
    if (result == 2) {
        switch (drawMode_) {
        case 0:
            if (menuItem_.active_ == 1) {
                if (checkHaveItem(true) == true) {
                    menuItem_.active_ = 0;
                    drawMode_ = 1;
                }
            } else {
                if (checkHaveItem(false) == true) {
                    drawMode_ = 1;
                }
            }
            func_02023344(&navigator_, 0);
            break;
        case 1:
            checkSellItem();
            break;
        case 2:
            showMessage(0x9490, -1, -1);
            mode_ = 5;
            break;
        }
    }
    if (result == 3) {
        switch (drawMode_) {
        case 0:
            showMessage(0x948b, -1, -1);
            data_020ed1bc.setYesNo();
            mode_ = 3;
            break;
        case 1:
            drawMode_ = 0;
            menuItem_.active_ = func_ov016_0216ff2c()->activeChara_;
            break;
        case 2:
            showMessage(0x9490, -1, -1);
            mode_ = 5;
            break;
        }
    }
    int cursor = menuItem_.active_;
    func_ov016_0216ff2c()->activeItem_ = cursor;
    int page = func_0202333c(&navigator_);
    func_ov016_0216ff2c()->activeItemPage_ = page;
    redraw_ = 1;
}

THUMB void MaterielMenu_EXTRA_NENE::selectYes()
{
    switch (mode_) {
    case 0:
        if (cmn::g_CommonCounterInfo.freeCounter_[0] != 0) {
            calcProceeds();
            cmn::g_CommonCounterInfo.freeCounter_[0] = 0;
        }
        if (proceeds_ == 0) {
            if (checkHaveItem(true) == false && checkHaveItem(false) == false) {
                showMessage(0x9488, 0x948b, -1);
                data_020ed1bc.setYesNo();
                mode_ = 3;
                return;
            }
            showMessage(0x9476, -1, -1);
            mode_ = 4;
            return;
        }
        TextAPI::setMACRO0(0x36, 0xf0000000, proceeds_);
        showMessage(0x9474, 0x9475, -1);
        status::g_Party.addGold(proceeds_);
        mode_ = 1;
        break;
    case 1:
        if (checkHaveItem(true) == false && checkHaveItem(false) == false) {
            showMessage(0x9488, 0x948b, -1);
            data_020ed1bc.setYesNo();
            mode_ = 3;
            return;
        }
        showMessage(0x9476, -1, -1);
        mode_ = 4;
        break;
    case 2: {
        int index = func_020233cc(&navigator_, menuItem_.active_);
        int item;
        int count;
        if (func_ov016_0216ff2c()->activeChara_ == 1) {
            item = status::g_Party.haveItemSack_.getItem(index);
            status::g_Party.haveItemSack_.execThrow(index);
            if (checkHaveItem(true) == false) {
                drawMode_ = 0;
                func_ov016_0216ff2c()->activeChara_ = 0;
            }
            count = status::g_Party.haveItemSack_.getCount();
        } else {
            status::HaveStatusInfo& statusInfo = status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_;
            item = statusInfo.haveItem_.getItem(index);
            statusInfo.execThrow(index);
            count = statusInfo.haveItem_.getCount();
            if (checkHaveItem(false) == false) {
                drawMode_ = 0;
            }
        }
        if (func_020233cc(&navigator_, menuItem_.active_) >= count) {
            menuItem_.active_ = 0;
            func_02023344(&navigator_, 0);
            func_ov016_0216ff2c()->activeItem_ = 0;
            func_ov016_0216ff2c()->activeItemPage_ = 0;
        }
        redraw_ = 1;
        status::HaveItemSack& neneItemSack = status::g_Shop.haveItemNene_;
        neneItemSack.add(item);
        neneItemCount_ = status::g_Shop.haveItemNene_.getCount();
        TextAPI::setMACRO0(0xa, 0x40000000, item);
        showMessage(0x947b, 0x947c, -1);
        data_020ed1bc.setYesNo();
        mode_ = 1;
        break;
    }
    case 3:
        if (status::g_Shop.haveItemNene_.getCount() == 0) {
            showMessage(0x9493, -1, -1);
            mode_ = 5;
            return;
        }
        menuItem_.active_ = 0;
        func_02023504(&navigator_, 2, 3, neneItemCount_);
        func_02023344(&navigator_, 0);
        drawMode_ = 2;
        func_ov016_0216ff2c()->activeItem_ = 0;
        func_ov016_0216ff2c()->activeItemPage_ = 0;
        redraw_ = 1;
        break;
    case 5:
        MaterielMenu_WINDOW_MANAGER::getSingleton()->closeMaterielWindow();
        break;
    }
}

THUMB void MaterielMenu_EXTRA_NENE::selectNo()
{
    switch (mode_) {
    case 0:
        showMessage(0x9478, -1, -1);
        mode_ = 5;
        break;
    case 1:
        showMessage(0x948b, -1, -1);
        data_020ed1bc.setYesNo();
        mode_ = 3;
        break;
    case 2:
        TextAPI::setMACRO0(0xa, 0x40000000, sellItem_);
        showMessage(0x947e, 0x947c, -1);
        data_020ed1bc.setYesNo();
        mode_ = 1;
        break;
    case 3:
        showMessage(0x9490, -1, -1);
        mode_ = 5;
        break;
    }
}

THUMB void MaterielMenu_EXTRA_NENE::checkSellItem()
{
    int index = func_020233cc(&navigator_, menuItem_.active_);
    int itemID;
    switch (func_ov016_0216ff2c()->activeChara_) {
    case 1:
        itemID = status::g_Party.haveItemSack_.getItem(index);
        break;
    default:
        itemID = status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveItem_.getItem(index);
        break;
    }
    for (int i = 0; i < 162; i++) {
        if (itemID == status::g_Shop.haveItemNene_.getItem(i) && status::g_Shop.haveItemNene_.getItemCount(i) == 99) {
            showMessage(0x9484, 0x9485, 0x948b);
            data_020ed1bc.setYesNo();
            mode_ = 3;
            return;
        }
    }
    if (status::UseItem::getSellType(itemID) == 1) {
        TextAPI::setMACRO0(0xa, 0x40000000, itemID);
        showMessage(0x9481, 0x947c, -1);
        mode_ = 1;
    } else {
        int value = status::UseItem::getBuyPrice(itemID);
        if (value == 0) {
            value = status::UseItem::getSellPrice(itemID);
        }
        value += value / 2;
        sellItem_ = itemID;
        TextAPI::setMACRO0(0xa, 0x40000000, itemID);
        TextAPI::setMACRO0(0x4b, 0xf0000000, value);
        showMessage(0x947a, -1, -1);
        mode_ = 2;
    }
    data_020ed1bc.setYesNo();
}

THUMB void MaterielMenu_EXTRA_NENE::calcProceeds()
{
    proceeds_ = 0;
    for (int i = 0; i < status::g_Shop.haveItemNene_.getCount();) {
        int count = status::g_Shop.haveItemNene_.getItemCount(i);
        int item = status::g_Shop.haveItemNene_.getItem(i);
        int sellCount = 0;
        int price = status::UseItem::getBuyPrice(item);
        if (price == 0) {
            price = status::UseItem::getSellPrice(item);
        }
        for (int j = 0; j < count; j++) {
            if (dssrand::rand(4) != 0) {
                proceeds_ += dss::getRandomVariation(price, -50, 100);
                sellCount++;
            }
        }
        for (int j = 0; j < sellCount; j++) {
            status::g_Shop.haveItemNene_.execThrow(i);
        }
        if (sellCount != count) {
            i++;
        }
    }
    neneItemCount_ = status::g_Shop.haveItemNene_.getCount();
}

THUMB bool MaterielMenu_EXTRA_NENE::checkHaveItem(bool sack)
{
    if (sack == true) {
        if (status::g_Party.haveItemSack_.getCount() == 0) {
            return false;
        }
    } else {
        if (status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.haveItem_.getCount() == 0) {
            return false;
        }
    }
    return true;
}

THUMB void MaterielMenu_EXTRA_NENE::showMessage(int messageID1, int messageID2, int messageID3)
{
    data_020ed1bc.openMessageForTALK();
    data_020ed1bc.addMessage(messageID1);
    if (messageID2 != -1) {
        data_020ed1bc.addMessage(messageID2);
    }
    if (messageID3 != -1) {
        data_020ed1bc.addMessage(messageID3);
    }
}
