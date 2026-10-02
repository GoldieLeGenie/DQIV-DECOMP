#include "ov015/btl/BattleMenu.hpp"
#include "ov015/btl/BattleMenuPlayerControl.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"

THUMB void BattleMenu_ITEMUSE2PARTY::menuSetup()
{
    menuItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD, menu::MenuItem::CURSORTYPE_ACTIVE);
    cancelItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_CANCEL, menu::MenuItem::CURSORTYPE_NONE);
    unk_e4 = 0;
    unk_e8 = 0;
    unk_ec = status::g_Party.getCarriageOutCount();
}

THUMB void BattleMenu_ITEMUSE2PARTY::menuExecute()
{
    navigator_.setup(2, 2, unk_ec);
    func_ov015_0216c63c(&menuItem_, unk_ec);
    func_ov015_0216c5c4(&cancelItem_);
}

THUMB void BattleMenu_ITEMUSE2PARTY::menuDraw()
{
    func_ov015_0216bae8();
    menuItem_.drawActive();
}

THUMB void BattleMenu_ITEMUSE2PARTY::menuUpdate()
{
    if (MenuUpdate_Assist::isCancel(cancelItem_)) {
        int chara = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
        status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(chara)->haveStatusInfo_;
        if (info->isEquipEnable(info->haveItem_.getItem(btl::BattleMenuPlayerControl::getSingleton()->activeItem_))) {
            data_ov015_02179c10.open();
        } else {
            gBattleMenu_ITEM.open();
        }
        status::g_Party.getPlayerStatus(chara)->haveBattleStatus_.setSelectCommand(status::HaveBattleStatus::UseItem, -1);
        close();
        return;
    }
    int result = MenuUpdate_Assist::menuSelect(menuItem_, navigator_);
    if (result != 0) {
        redraw_ = 1;
        if (result == 2) {
            close();
            BattleMenuJudge::getSingleton()->setItemParty(unk_e8, menuItem_.active_);
            BattleMenuJudge::getSingleton()->setNextPlayer();
        }
        int target = menuItem_.active_;
        btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
    }
    int target = menuItem_.active_;
    btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
}
