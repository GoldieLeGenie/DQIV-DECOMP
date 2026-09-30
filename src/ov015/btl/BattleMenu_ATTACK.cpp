#include "ov015/btl/BattleMenu.hpp"
#include "ov015/btl/BattleMenuPlayerControl.hpp"
#include "ov003/btl/BattleMonsterMask.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"

THUMB void BattleMenu_ATTACK::menuSetup()
{
    func_02051900(&menuItem_, 1, 0);
    func_02051900(&cancelItem_, 2, 0);
    monsterMask_ = 1;
    menuItem_.active_ = 0;
    enemyMaxNum_ = func_ov015_0216c9a8(func_ov015_0216c7b0(), touchRect_);
    for (int i = 0; i < enemyMaxNum_; i++) {
        if (touchRect_[i].group == btl::BattleMenuPlayerControl::getSingleton()->getTargetGroup()) {
            menuItem_.active_ = i;
            break;
        }
    }
    int group = touchRect_[menuItem_.active_].group;
    btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = group;
    btl::BattleMenuPlayerControl::getSingleton()->setTargetGroup(touchRect_[menuItem_.active_].group);
}

THUMB void BattleMenu_ATTACK::menuExecute()
{
    BattleMonsterMask::getSingleton()->execute();
    enemyMaxNum_ = func_ov015_0216c9a8(func_ov015_0216c7b0(), touchRect_);
    func_ov015_0216c6dc(&menuItem_, menuItem_.active_, touchRect_, enemyMaxNum_);
    func_ov015_0216c5c4(&cancelItem_);
    if (monsterMask_ == 1) {
        BattleMonsterMask::getSingleton()->select(touchRect_[menuItem_.active_].group);
    } else {
        BattleMonsterMask::getSingleton()->select(-1);
    }
}

THUMB void BattleMenu_ATTACK::menuDraw()
{
    func_ov015_0216ba54(touchRect_[menuItem_.active_].group);
}

THUMB void BattleMenu_ATTACK::menuUpdate()
{
    int group = touchRect_[menuItem_.active_].group;
    g_monster.getGroupCount();
    if (func_02023230(&cancelItem_)) {
        gBattleMenu_ACTIONMENU.open();
        gBattleMenu_ACTIONMENU.pageItem_.active_ = 0;
        BattleMonsterMask::getSingleton()->select(-1);
        monsterMask_ = 0;
        close();
        return;
    }
    int old = menuItem_.active_;
    func_02051a7c(&menuItem_);
    int i = menuItem_.active_;
    switch (menuItem_.result_) {
    case 1:
        redraw_ = 1;
        if (group != touchRect_[menuItem_.active_].group) {
            break;
        }
        if (menuItem_.reason_ == 2) {
            menuItem_.result_ = 0;
            menuItem_.lastresult_ = 0;
            func_ov015_0216ea10(this);
            return;
        }
        if (old < i) {
            for (;;) {
                if (i == old) {
                    menuItem_.active_ = i;
                    int target = touchRect_[i].group;
                    btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
                    break;
                }
                if (i == enemyMaxNum_) {
                    i = 0;
                    continue;
                }
                if (group != touchRect_[i].group) {
                    menuItem_.active_ = i;
                    int target = touchRect_[i].group;
                    btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
                    break;
                }
                i++;
            }
        } else {
            for (;;) {
                if (i == old) {
                    menuItem_.active_ = i;
                    int target = touchRect_[i].group;
                    btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
                    break;
                }
                if (i == -1) {
                    i = enemyMaxNum_ - 1;
                    continue;
                }
                if (group != touchRect_[i].group) {
                    menuItem_.active_ = i;
                    int target = touchRect_[i].group;
                    btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
                    break;
                }
                i--;
            }
        }
        break;
    case 2:
        menuItem_.result_ = 0;
        menuItem_.lastresult_ = 0;
        func_ov015_0216ea10(this);
        return;
    case 7:
        redraw_ = 1;
        for (i = enemyMaxNum_ - 1;;) {
            if (i == old) {
                menuItem_.active_ = i;
                int target = touchRect_[i].group;
                btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
                break;
            }
            if (i == -1) {
                i = enemyMaxNum_ - 1;
                continue;
            }
            if (group != touchRect_[i].group) {
                menuItem_.active_ = i;
                int target = touchRect_[i].group;
                btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
                break;
            }
            i--;
        }
        break;
    case 8:
        redraw_ = 1;
        for (i = 0;;) {
            if (i == old) {
                menuItem_.active_ = i;
                int target = touchRect_[i].group;
                btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
                break;
            }
            if (i == enemyMaxNum_) {
                i = 0;
                continue;
            }
            if (group != touchRect_[i].group) {
                menuItem_.active_ = i;
                int target = touchRect_[i].group;
                btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
                break;
            }
            i++;
        }
        break;
    }
    if (group != touchRect_[i].group) {
        func_ov015_0216ad40(func_ov015_0216aa2c(), touchRect_[i].group);
        int target = touchRect_[i].group;
        btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
        btl::BattleMenuPlayerControl::getSingleton()->setTargetGroup(touchRect_[i].group);
    }
}

extern "C" THUMB void func_ov015_0216ea10(BattleMenu_ATTACK* self)
{
    func_ov015_0216c874(func_ov015_0216c7b0(), self->touchRect_[self->menuItem_.active_].group);
    func_ov015_0216ca70(func_ov015_0216c7b0());
    self->monsterMask_ = 0;
    BattleMonsterMask::getSingleton()->select(-1);
    self->redraw_ = 1;
    self->close();
}
