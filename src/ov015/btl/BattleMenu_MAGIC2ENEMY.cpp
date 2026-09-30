#include "ov015/btl/BattleMenu.hpp"
#include "ov015/btl/BattleMenuPlayerControl.hpp"
#include "ov003/btl/BattleMonsterMask.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"

THUMB void BattleMenu_MAGIC2ENEMY::menuSetup()
{
    status::g_Party.setBattleMode();
    func_02051900(&menuItem_, 1, 0);
    func_02051900(&cancelItem_, 2, 0);
    unk_f8 = 1;
    menuItem_.active_ = 0;
    enemyNumMax_ = func_ov015_0216c9a8(func_ov015_0216c7b0(), touchRect_);
    for (int i = 0; i < enemyNumMax_; i++) {
        if (touchRect_[i].group == btl::BattleMenuPlayerControl::getSingleton()->getTargetGroup()) {
            menuItem_.active_ = i;
            break;
        }
    }
    int group = touchRect_[menuItem_.active_].group;
    btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = group;
    btl::BattleMenuPlayerControl::getSingleton()->setTargetGroup(touchRect_[menuItem_.active_].group);
    activeMagic_ = btl::BattleMenuPlayerControl::getSingleton()->activeMagic_;
    activeMagicIndex_ = 0;
}

THUMB void BattleMenu_MAGIC2ENEMY::menuExecute()
{
    BattleMonsterMask::getSingleton()->execute();
    enemyNumMax_ = func_ov015_0216c9a8(func_ov015_0216c7b0(), touchRect_);
    func_ov015_0216c6dc(&menuItem_, menuItem_.active_, touchRect_, enemyNumMax_);
    func_ov015_0216c5c4(&cancelItem_);
    if (unk_f8 == 1) {
        BattleMonsterMask::getSingleton()->select(touchRect_[menuItem_.active_].group);
    } else {
        BattleMonsterMask::getSingleton()->select(-1);
    }
}

THUMB void BattleMenu_MAGIC2ENEMY::menuDraw()
{
    func_ov015_0216bbc0(touchRect_[menuItem_.active_].group);
}

THUMB void BattleMenu_MAGIC2ENEMY::menuUpdate()
{
    int group = touchRect_[menuItem_.active_].group;
    int old = menuItem_.active_;
    func_02051a7c(&menuItem_);
    int i = menuItem_.active_;
    if (func_02023230(&cancelItem_)) {
        status::g_Party.getPlayerStatus(btl::BattleMenuPlayerControl::getSingleton()->activeChara_)->haveBattleStatus_.setSelectCommand(status::HaveBattleStatus::UseAction, -1);
        gBattleMenu_MAGIC.open();
        gBattleMenu_MAGIC.setActiveMagicPos(activeMagicPos_);
        unk_f8 = 0;
        close();
        return;
    }
    switch (menuItem_.result_) {
    case 1:
        redraw_ = 1;
        if (group != touchRect_[menuItem_.active_].group) {
            break;
        }
        if (menuItem_.reason_ == 2) {
            unk_f8 = 0;
            menuItem_.result_ = 0;
            menuItem_.lastresult_ = 0;
            func_ov015_0216c8a0(func_ov015_0216c7b0(), activeMagic_, touchRect_[menuItem_.active_].group);
            func_ov015_0216ca70(func_ov015_0216c7b0());
            close();
            break;
        }
        if (old < i) {
            for (;;) {
                if (i == old) {
                    break;
                }
                if (i == enemyNumMax_) {
                    i = 0;
                    continue;
                }
                if (group != touchRect_[i].group) {
                    menuItem_.active_ = i;
                    break;
                }
                i++;
            }
        } else {
            for (;;) {
                if (i == old) {
                    break;
                }
                if (i == -1) {
                    i = enemyNumMax_ - 1;
                    continue;
                }
                if (group != touchRect_[i].group) {
                    menuItem_.active_ = i;
                    break;
                }
                i--;
            }
        }
        break;
    case 2:
        redraw_ = 1;
        close();
        menuItem_.result_ = 0;
        menuItem_.lastresult_ = 0;
        if (activeMagicIndex_ == 0x13) {
            func_ov015_0216c7b0()->minadeinFlag_ = 1;
        }
        func_ov015_0216c8a0(func_ov015_0216c7b0(), activeMagic_, touchRect_[menuItem_.active_].group);
        func_ov015_0216ca70(func_ov015_0216c7b0());
        unk_f8 = 0;
        break;
    case 5:
    case 6:
    case 7:
        redraw_ = 1;
        for (i = enemyNumMax_ - 1;;) {
            if (i == old) {
                break;
            }
            if (i == -1) {
                i = enemyNumMax_ - 1;
                continue;
            }
            if (group != touchRect_[i].group) {
                menuItem_.active_ = i;
                break;
            }
            i--;
        }
        break;
    case 8:
        redraw_ = 1;
        for (i = 0;;) {
            if (i == old) {
                break;
            }
            if (i == enemyNumMax_) {
                i = 0;
                continue;
            }
            if (group != touchRect_[i].group) {
                menuItem_.active_ = i;
                break;
            }
            i++;
        }
        break;
    }
    func_ov015_0216ad40(func_ov015_0216aa2c(), touchRect_[menuItem_.active_].group);
    int target = touchRect_[menuItem_.active_].group;
    btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
    btl::BattleMenuPlayerControl::getSingleton()->setTargetGroup(touchRect_[menuItem_.active_].group);
}
