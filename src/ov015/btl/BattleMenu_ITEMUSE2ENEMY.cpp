#include "ov015/btl/BattleMenu.hpp"
#include "ov015/btl/BattleMenuPlayerControl.hpp"
#include "ov003/btl/BattleMonsterMask.hpp"
#include "main/status/PartyStatus.hpp"

THUMB void BattleMenu_ITEMUSE2ENEMY::menuSetup()
{
    status::g_Party.setBattleMode();
    unk_148 = 0;
    unk_14c = 0;
    unk_150 = 0;
    unk_154 = 0;
    unk_158 = 0;
    func_02051900(&menuItem_, 1, 0);
    func_02051900(&cancelItem_, 2, 0);
    menuItem_.active_ = 0;
    unk_150 = func_ov015_0216c9a8(func_ov015_0216c7b0(), unk_160);
    for (int i = 0; i < unk_150; i++) {
        if (unk_160[i].group == btl::BattleMenuPlayerControl::getSingleton()->getTargetGroup()) {
            menuItem_.active_ = i;
            break;
        }
    }
    int group = unk_160[menuItem_.active_].group;
    btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = group;
    btl::BattleMenuPlayerControl::getSingleton()->setTargetGroup(unk_160[menuItem_.active_].group);
    unk_15c = 1;
}

THUMB void BattleMenu_ITEMUSE2ENEMY::menuExecute()
{
    BattleMonsterMask::getSingleton()->execute();
    unk_150 = func_ov015_0216c9a8(func_ov015_0216c7b0(), unk_160);
    func_ov015_0216c6dc(&menuItem_, menuItem_.active_, unk_160, unk_150);
    func_ov015_0216c5c4(&cancelItem_);
    if (unk_15c == 1) {
        BattleMonsterMask::getSingleton()->select(unk_160[menuItem_.active_].group);
    } else {
        BattleMonsterMask::getSingleton()->select(-1);
    }
}

THUMB void BattleMenu_ITEMUSE2ENEMY::menuDraw()
{
    func_ov015_0216baf4(unk_160[menuItem_.active_].group);
}

THUMB void BattleMenu_ITEMUSE2ENEMY::menuUpdate()
{
    unk_154 = unk_160[menuItem_.active_].group;
    unk_158 = menuItem_.active_;
    if (func_ov015_0216cee0(this)) {
        func_ov015_0216ce00(this);
    }
}

extern "C" THUMB void func_ov015_0216cd44(BattleMenu_ITEMUSE2ENEMY* self)
{
    self->unk_15c = 0;
    self->menuItem_.result_ = 0;
    self->menuItem_.lastresult_ = 0;
    func_ov015_0216c92c(func_ov015_0216c7b0(), self->unk_14c, self->unk_160[self->menuItem_.active_].group);
    func_ov015_0216ca70(func_ov015_0216c7b0());
    self->close();
}

extern "C" THUMB void func_ov015_0216cd80(BattleMenu_ITEMUSE2ENEMY* self, int index)
{
    int old = self->unk_158;
    for (;;) {
        if (index == old) {
            return;
        }
        if (index == self->unk_150) {
            index = 0;
            continue;
        }
        if (self->unk_154 != self->unk_160[index].group) {
            self->menuItem_.active_ = index;
            return;
        }
        index++;
    }
}

extern "C" THUMB void func_ov015_0216cdc0(BattleMenu_ITEMUSE2ENEMY* self, int index)
{
    int old = self->unk_158;
    for (;;) {
        if (index == old) {
            return;
        }
        if (index == -1) {
            index = self->unk_150 - 1;
            continue;
        }
        if (self->unk_154 != self->unk_160[index].group) {
            self->menuItem_.active_ = index;
            return;
        }
        index--;
    }
}

extern "C" THUMB void func_ov015_0216ce00(BattleMenu_ITEMUSE2ENEMY* self)
{
    func_02051a7c(&self->menuItem_);
    switch (self->menuItem_.result_) {
    case 1:
        self->redraw_ = 1;
        if (self->unk_154 == self->unk_160[self->menuItem_.active_].group) {
            if (self->menuItem_.reason_ == 2) {
                func_ov015_0216cd44(self);
            } else if (self->unk_158 < self->menuItem_.active_) {
                func_ov015_0216cd80(self, self->menuItem_.active_);
            } else {
                func_ov015_0216cdc0(self, self->menuItem_.active_);
            }
        }
        break;
    case 2:
        self->redraw_ = 1;
        func_ov015_0216cd44(self);
        break;
    case 5:
    case 6:
    case 7:
        self->redraw_ = 1;
        func_ov015_0216cdc0(self, self->unk_150 - 1);
        break;
    case 8:
        self->redraw_ = 1;
        func_ov015_0216cd80(self, 0);
        break;
    }
    func_ov015_0216ad40(func_ov015_0216aa2c(), self->unk_160[self->menuItem_.active_].group);
    int target = self->unk_160[self->menuItem_.active_].group;
    btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
    btl::BattleMenuPlayerControl::getSingleton()->setTargetGroup(self->unk_160[self->menuItem_.active_].group);
}

extern "C" THUMB int func_ov015_0216cee0(BattleMenu_ITEMUSE2ENEMY* self)
{
    if (func_02023230(&self->cancelItem_)) {
        self->unk_15c = 0;
        self->close();
        data_ov015_02179d68.open();
        return 0;
    }
    return 1;
}
