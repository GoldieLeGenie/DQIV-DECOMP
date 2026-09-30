#include "ov015/btl/BattleMenu.hpp"
#include "ov015/btl/BattleMenuPlayerControl.hpp"
#include "ov003/btl/BattleMonsterMask.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/profile/Profile.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/UseAction.hpp"
#include "main/text/TextAPI.hpp"

THUMB void BattleMenu_MAGIC::menuSetup()
{
    status::g_Party.setBattleMode();
    func_02051900(&menuItem_, 1, 5);
    func_02051900(&cancelItem_, 2, 0);
    func_02051900(&unk_e4, 0, 0);
    BattleMonsterMask::getSingleton()->select(-1);
    count_ = 0;
    func_020882d4(haveAction_, -1, sizeof(haveAction_));
    func_020882d4(haveActionIndex_, -1, sizeof(haveActionIndex_));
    func_ov015_0216ded8(this);
    func_02023324(&navigator_);
    func_02023504(&navigator_, 2, 3, count_);
    int pos = btl::BattleMenuPlayerControl::getSingleton()->getMagicPosition();
    int page = pos / 6;
    pos = pos % 6;
    menuItem_.active_ = pos;
    func_02023344(&navigator_, page);
    int magic = haveActionIndex_[pos];
    btl::BattleMenuPlayerControl::getSingleton()->activeMagic_ = magic;
}

THUMB void BattleMenu_MAGIC::setActiveMagicPos(int pos)
{
    int active = pos;
    active %= 6;
    menuItem_.active_ = active;
    func_02023344(&navigator_, pos / 6);
}

THUMB void BattleMenu_MAGIC::menuExecute()
{
    func_02023504(&navigator_, 2, 3, count_);
    func_ov015_0216c60c(&menuItem_, func_020233f0(&navigator_));
    func_ov015_0216c5c4(&cancelItem_);
    int max = func_02023348(&navigator_) - 1;
    func_0201e684(&unk_e4, func_020233cc(&navigator_, unk_e4.active_), max, 0xd8, 0x78);
}

THUMB void BattleMenu_MAGIC::menuDraw()
{
    if (!data_020ed1bc.isOpen()) {
        func_ov015_0216bb00(haveAction_, count_, func_0202333c(&navigator_));
        func_02051968(&menuItem_);
        func_02051968(&cancelItem_);
    }
}

THUMB void BattleMenu_MAGIC::menuUpdate()
{
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus((short)btl::BattleMenuPlayerControl::getSingleton()->activeChara_)->haveStatusInfo_;
    short pos = func_020233cc(&navigator_, menuItem_.active_);
    int action = haveAction_[pos];
    int magic = haveActionIndex_[func_020233cc(&navigator_, menuItem_.active_)];
    if (data_020ed1bc.isOpen()) {
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
            return;
        }
    } else {
        if (func_02023230(&cancelItem_)) {
            func_ov015_0216c84c(func_ov015_0216c7b0(), 1);
            close();
            return;
        }
        int active = menuItem_.active_;
        if (func_02023204(&unk_e4, &navigator_, &active)) {
            menuItem_.active_ = active;
            redraw_ = 1;
            return;
        }
        int result = func_02023274(&menuItem_, &navigator_);
        if (result != 0) {
            redraw_ = 1;
            if (result == 2) {
                menuItem_.result_ = 0;
                menuItem_.lastresult_ = 0;
                if (!status::UseAction::isUse(action, info)) {
                    TextAPI::setMACRO0(1, 0x50000000, info->haveStatus_.playerIndex_);
                    data_020ed1bc.openMessageForBATTLE();
                    data_020ed1bc.addMessage(0xc3c6f);
                    return;
                }
                if (action == 0x13 && !status::g_Party.isExecMinadein()) {
                    data_020ed1bc.openMessageForBATTLE();
                    data_020ed1bc.addMessage(0xc394d);
                    return;
                }
                btl::BattleMenuPlayerControl::getSingleton()->setMagicPosition(pos);
                switch (status::UseAction::getUseType(action)) {
                case status::UseItem::Enemy:
                    if (status::UseAction::getUseArea(action) == status::UseItem::Group || status::UseAction::getUseArea(action) == status::UseItem::One) {
                        if (g_monster.getGroupCount() > 1) {
                            func_ov015_0216c8a0(func_ov015_0216c7b0(), magic, -1);
                            int target = func_ov015_0216ca28(func_ov015_0216c7b0());
                            btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
                            close();
                            func_ov015_0216aa34(func_ov015_0216aa2c());
                            func_ov015_0216aa54(func_ov015_0216aa2c());
                            btl::BattleMenuPlayerControl::getSingleton()->activeMagic_ = magic;
                            gBattleMenu_MAGIC2ENEMY.open();
                            gBattleMenu_MAGIC2ENEMY.activeMagicPos_ = func_020233cc(&navigator_, menuItem_.active_);
                            gBattleMenu_MAGIC2ENEMY.activeMagicIndex_ = action;
                        } else {
                            if (action == 0x13) {
                                func_ov015_0216c7b0()->minadeinFlag_ = 1;
                            }
                            close();
                            int group = 0;
                            for (int i = 0; i < g_monster.getCount(); i++) {
                                if (g_monster.getMonsterStatus(i)->isEnable()) {
                                    group = g_monster.getMonsterGroup(i);
                                    break;
                                }
                            }
                            func_ov015_0216c8a0(func_ov015_0216c7b0(), magic, group);
                            func_ov015_0216ca70(func_ov015_0216c7b0());
                        }
                    } else {
                        setMagicTargetFree(magic);
                    }
                    break;
                case status::UseItem::Friend:
                    if (status::UseAction::getUseArea(action) == status::UseItem::One) {
                        func_ov015_0216c8e4(func_ov015_0216c7b0(), magic, -1);
                        btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = 0;
                        close();
                        if (status::g_Party.getCarriageOutCount() > 1) {
                            btl::BattleMenuPlayerControl::getSingleton()->activeMagic_ = magic;
                            gBattleMenu_MAGIC2PARTY.open();
                            gBattleMenu_MAGIC2PARTY.activeMagicPos_ = func_020233cc(&navigator_, menuItem_.active_);
                        } else {
                            func_ov015_0216c8e4(func_ov015_0216c7b0(), magic, 0);
                            func_ov015_0216ca70(func_ov015_0216c7b0());
                        }
                    } else {
                        setMagicTargetFree(magic);
                    }
                    break;
                default:
                    setMagicTargetFree(magic);
                    break;
                }
            }
        }
        btl::BattleMenuPlayerControl::getSingleton()->activeMagic_ = magic;
    }
}

extern "C" THUMB void func_ov015_0216ded8(BattleMenu_MAGIC* self)
{
    int count;
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(btl::BattleMenuPlayerControl::getSingleton()->activeChara_)->haveStatusInfo_;
    count = info->haveAction_.getCount();
    int num = 0;
    self->count_ = num;
    func_020882d4(self->haveAction_, -1, sizeof(self->haveAction_));
    func_020882d4(self->haveActionIndex_, -1, sizeof(self->haveActionIndex_));
    for (int i = 0; i < count; i++) {
        int action = info->haveAction_.getAction(i);
        if (status::UseAction::isBattleUse(action)) {
            self->haveAction_[num] = action;
            self->haveActionIndex_[num] = i;
            num++;
        }
    }
    self->count_ = num;
}

THUMB void BattleMenu_MAGIC::setMagicTargetFree(int magic)
{
    close();
    func_ov015_0216c8e4(func_ov015_0216c7b0(), magic, -1);
    func_ov015_0216ca70(func_ov015_0216c7b0());
}
