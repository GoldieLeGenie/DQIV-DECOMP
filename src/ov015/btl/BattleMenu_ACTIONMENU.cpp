#include "ov015/btl/BattleMenu.hpp"
#include "ov015/btl/BattleMenuPlayerControl.hpp"
#include "ov003/btl/BattleMonsterMask.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/UseAction.hpp"

THUMB void BattleMenu_ACTIONMENU::menuSetup()
{
    status::g_Party.setBattleMode();
    func_02051900(&menuItem_, 0, 0);
    func_02051900(&pageItem_, 1, 5);
    func_02051900(&cancelItem_, 2, 0);
    BattleMonsterMask::getSingleton()->select(-1);
    activeCharacter_ = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
    gBattleMenuSub_HISTORY.commandChara_ = activeCharacter_;
    status::g_Party.getPlayerStatus(activeCharacter_)->haveBattleStatus_.setSelectCommand(status::HaveBattleStatus::NoSelect, 0);
    unk_14c = -1;
    func_02023324(&navigator_);
}

THUMB void BattleMenu_ACTIONMENU::menuExecute()
{
    func_02023504(&navigator_, 2, 2, 4);
    func_ov015_0216c734(&menuItem_);
    func_ov015_0216c5d8(&pageItem_, 4, pageItem_.active_);
    func_ov015_0216c5c4(&cancelItem_);
}

THUMB void BattleMenu_ACTIONMENU::menuDraw()
{
    func_ov015_0216b9e8(0xf0);
    func_02051968(&pageItem_);
}

THUMB void BattleMenu_ACTIONMENU::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
        }
        return;
    }
    if (func_02023230(&cancelItem_)) {
        close();
        func_ov015_0216cad8(func_ov015_0216c7b0());
        return;
    }
    func_02051a7c(&menuItem_);
    if (menuItem_.result_ == 2) {
        selectAttack();
        if (unk_14c == -1) {
            func_ov015_0216c7b0();
            gBattleMenuSub_HISTORY.select_ = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
        }
        return;
    }
    int result = func_02023274(&pageItem_, &navigator_);
    if (result == 0) {
        return;
    }
    if (result == 1) {
        if (unk_14c == -1) {
            func_ov015_0216c7b0();
            gBattleMenuSub_HISTORY.select_ = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
        }
        unk_14c = pageItem_.active_;
    }
    if (result == 2) {
        if (unk_14c == -1) {
            func_ov015_0216c7b0();
            gBattleMenuSub_HISTORY.select_ = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
        }
        pageItem_.result_ = 0;
        pageItem_.lastresult_ = 0;
        switch (pageItem_.active_) {
        case 0:
            selectAttack();
            return;
        case 1:
            selectMagic();
            return;
        case 2:
            selectItem();
            return;
        case 3:
            selectDefence();
            return;
        }
    }
}

THUMB int BattleMenu_ACTIONMENU::getUseActionNum(int chara)
{
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(btl::BattleMenuPlayerControl::getSingleton()->activeChara_)->haveStatusInfo_;
    int count = info->haveAction_.getCount();
    int num = 0;
    for (int i = 0; i < count; i++) {
        if (status::UseAction::isBattleUse(info->haveAction_.getAction(i))) {
            num++;
        }
    }
    return num;
}

THUMB void BattleMenu_ACTIONMENU::selectAttack()
{
    int groupCount = g_monster.getGroupCount();
    int chara = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(chara)->haveStatusInfo_;
    if (groupCount > 1 && !info->haveEquipment_.isEquipment(0x28)) {
        close();
        status::HaveBattleStatus* battleStatus = &status::g_Party.getPlayerStatus(chara)->haveBattleStatus_;
        battleStatus->setSelectCommand(status::HaveBattleStatus::Attack, 0);
        battleStatus->selectedGroup_ = -1;
        int target = btl::BattleMenuPlayerControl::getSingleton()->getTargetGroup();
        btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
        gBattleMenu_ATTACK.open();
        return;
    }
    close();
    func_ov015_0216c874(func_ov015_0216c7b0(), g_monster.getMonsterGroup(0));
    func_ov015_0216ca70(func_ov015_0216c7b0());
}

THUMB void BattleMenu_ACTIONMENU::selectMagic()
{
    int chara = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
    if (getUseActionNum(0)) {
        close();
        btl::BattleMenuPlayerControl::getSingleton()->activeMagic_ = 0;
        status::g_Party.getPlayerStatus(chara)->haveBattleStatus_.setSelectCommand(status::HaveBattleStatus::UseAction, -1);
        gBattleMenu_MAGIC.open();
        return;
    }
    close();
    gBattleMenu_NGMESSAGE.open();
    gBattleMenu_NGMESSAGE.messageID_ = 0xc3c75;
    gBattleMenu_NGMESSAGE.returnPos_ = 1;
    gBattleMenu_NGMESSAGE.returnMenu_ = BattleMenu_NGMESSAGE::MENU_ACTIONMENU;
}

THUMB void BattleMenu_ACTIONMENU::selectItem()
{
    int chara = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
    if (status::g_Party.getPlayerStatus(chara)->haveStatusInfo_.haveItem_.getCount() > 0) {
        close();
        btl::BattleMenuPlayerControl::getSingleton()->activeItem_ = -1;
        status::g_Party.getPlayerStatus(chara)->haveBattleStatus_.setSelectCommand(status::HaveBattleStatus::UseItem, -1);
        data_ov015_02179d68.open();
        return;
    }
    close();
    gBattleMenu_NGMESSAGE.open();
    gBattleMenu_NGMESSAGE.messageID_ = 0xc3a1b;
    gBattleMenu_NGMESSAGE.returnPos_ = 2;
    gBattleMenu_NGMESSAGE.returnMenu_ = BattleMenu_NGMESSAGE::MENU_ACTIONMENU;
}

THUMB void BattleMenu_ACTIONMENU::selectDefence()
{
    close();
    status::g_Party.getPlayerStatus(btl::BattleMenuPlayerControl::getSingleton()->activeChara_)->haveBattleStatus_.setSelectCommand(status::HaveBattleStatus::Defence, 0);
    func_ov015_0216ca70(func_ov015_0216c7b0());
}
