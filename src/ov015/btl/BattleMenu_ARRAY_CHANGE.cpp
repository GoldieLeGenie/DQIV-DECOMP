#include "ov015/btl/BattleMenu.hpp"
#include "ov015/btl/BattleMenuPlayerControl.hpp"
#include "main/profile/Profile.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/UseAction.hpp"

THUMB void BattleMenu_ARRAY_CHANGE::menuSetup()
{
    status::g_Party.setMemberShiftMode();
    gBattleMenuSub_HISTORY.close();
    func_02051900(&menuItem_, 1, 5);
    func_02051900(&unk_8c, 0, 0);
    func_02051900(&unk_f0, 0, 0);
    func_02051900(&cancelItem_, 2, 0);
    unk_20 = 0;
    unk_1c = 0;
    unk_24 = 0;
    func_02023324(&unk_1b8);
    func_02023324(&unk_1c4);
}

THUMB void BattleMenu_ARRAY_CHANGE::menuExecute()
{
    status::g_Party.setMemberShiftMode();
    if (unk_1c == 0) {
        func_02023504(&unk_1b8, 4, 1, status::g_Party.getCarriageOutCount());
        int chara = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
        func_ov015_0216c688(&menuItem_, chara, status::g_Party.getCarriageOutCount());
    } else {
        int count = status::g_Party.getCount() - status::g_Party.getCarriageOutCount();
        func_02023504(&unk_1c4, 4, 1, count);
        int num = count - func_020233e4(&unk_1c4) * func_0202333c(&unk_1c4);
        int page;
        int last = func_02023348(&unk_1c4) - 1;
        page = func_0202333c(&unk_1c4);
        if (page != last) {
            num = func_020233e4(&unk_1c4);
        }
        func_ov015_0216c6a4(&unk_8c, unk_24, num);
        int max = func_02023348(&unk_1c4) - 1;
        func_0201e684(&unk_f0, unk_f0.active_, max, 0xc4, 0x88);
    }
    func_ov015_0216c5c4(&cancelItem_);
}

THUMB void BattleMenu_ARRAY_CHANGE::menuDraw()
{
    status::g_Party.setMemberShiftMode();
    if (unk_1c == 0) {
        func_ov015_0216bdd4();
    } else {
        int list[10];
        func_020882d4(list, -1, sizeof(list));
        int out = status::g_Party.getCarriageOutCount();
        int num = 0;
        for (int i = out; i < status::g_Party.getCount(); i++) {
            list[num] = i;
            num++;
        }
        int target = out + func_020233cc(&unk_1c4, unk_24);
        btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
        func_ov015_0216be58(list, num, func_0202333c(&unk_1c4));
    }
    int chara = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
    if (unk_1c != 0) {
        chara = btl::BattleMenuPlayerControl::getSingleton()->targetChara_;
    }
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(chara)->haveStatusInfo_;
    int count = info->haveAction_.getCount();
    int actions[20];
    int num = 0;
    func_020882d4(actions, 0, sizeof(actions));
    for (int i = 0; i < count; i++) {
        if (status::UseAction::isBattleUse(info->haveAction_.getAction(i))) {
            actions[num] = info->haveAction_.getAction(i);
            num++;
        }
    }
    func_ov015_0216c524(actions, num, chara);
    func_02051968(&menuItem_);
    func_02051968(&unk_8c);
}

THUMB void BattleMenu_ARRAY_CHANGE::menuUpdate()
{
    if (!func_ov015_0216f4cc(this)) {
        if (unk_1c == 0) {
            func_ov015_0216f37c(this);
        } else {
            func_ov015_0216f3c4(this);
        }
    }
    if (unk_20 != unk_1c) {
        if (unk_1c == 0) {
            func_02051900(&menuItem_, 3, 5);
            func_02051900(&unk_8c, 0, 0);
            menuItem_.active_ = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
            unk_8c.active_ = 0;
        } else {
            func_02051900(&menuItem_, 0, 0);
            func_02051900(&unk_8c, 3, 5);
            menuItem_.active_ = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
            unk_8c.active_ = unk_24;
        }
        unk_20 = unk_1c;
    }
}

extern "C" THUMB int func_ov015_0216f37c(BattleMenu_ARRAY_CHANGE* self)
{
    int result = func_02023274(&self->menuItem_, &self->unk_1b8);
    if (result != 0) {
        self->redraw_ = 1;
        if (result == 1) {
            self->unk_1c = 0;
        }
        if (result == 2) {
            self->unk_1c = 1;
            self->menuItem_.result_ = 0;
            self->menuItem_.lastresult_ = 0;
        }
        int chara = self->menuItem_.active_;
        btl::BattleMenuPlayerControl::getSingleton()->activeChara_ = chara;
        return 1;
    }
    int chara = self->menuItem_.active_;
    btl::BattleMenuPlayerControl::getSingleton()->activeChara_ = chara;
    return 0;
}

extern "C" THUMB int func_ov015_0216f3c4(BattleMenu_ARRAY_CHANGE* self)
{
    int result = func_02023274(&self->unk_8c, &self->unk_1c4);
    if (result != 0) {
        self->redraw_ = 1;
        self->unk_24 = self->unk_8c.active_;
        if (result == 1) {
            self->unk_1c = 1;
        }
        if (result == 2) {
            int order[4];
            func_020882d4(order, 0, sizeof(order));
            for (int i = 0; i < status::g_Party.getCarriageOutCount(); i++) {
                order[i] = status::g_Party.getPlayerIndex(i);
                if (i == btl::BattleMenuPlayerControl::getSingleton()->activeChara_) {
                    order[i] = status::g_Party.getPlayerIndex(btl::BattleMenuPlayerControl::getSingleton()->targetChara_);
                }
            }
            status::g_Party.reorder(order[0], order[1], order[2], order[3]);
            self->unk_8c.result_ = 0;
            self->unk_8c.lastresult_ = 0;
            self->redraw_ = 1;
            func_020882d4(btl::BattleMenuPlayerControl::getSingleton()->targetMonsterGroup_, 0, sizeof(btl::BattleMenuPlayerControl::getSingleton()->targetMonsterGroup_));
            self->close();
            gBattleMenu_ROOT.open();
            gBattleMenu_ROOT.menuItem_.active_ = 1;
        }
        return 1;
    }
    self->unk_24 = self->unk_8c.active_;
    int active = self->unk_8c.active_;
    if (func_02023204(&self->unk_f0, &self->unk_1c4, &active)) {
        self->unk_8c.active_ = active;
        self->unk_24 = active;
        self->redraw_ = 1;
        return 1;
    }
    return 0;
}

extern "C" THUMB int func_ov015_0216f4cc(BattleMenu_ARRAY_CHANGE* self)
{
    if (func_02023230(&self->cancelItem_)) {
        if (self->unk_1c == 0) {
            self->close();
            gBattleMenu_ARRAYMENU.open();
            gBattleMenu_ARRAYMENU.unk_1c = 0;
        } else if (self->unk_1c == 1) {
            self->unk_1c = 0;
        }
        self->redraw_ = 1;
        return 1;
    }
    return 0;
}
