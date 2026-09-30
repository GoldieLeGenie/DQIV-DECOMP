#include "ov015/btl/BattleMenu.hpp"
#include "ov015/btl/BattleMenuPlayerControl.hpp"
#include "main/profile/Profile.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/UseAction.hpp"
#include <mem.h>

THUMB void BattleMenu_ARRAY_ALL::menuSetup()
{
    status::g_Party.setMemberShiftMode();
    gBattleMenuSub_HISTORY.close();
    func_02051900(&menuItem_, 1, 5);
    func_02051900(&cancelItem_, 2, 0);
    unk_2c = 0;
    unk_1c[0] = -1;
    unk_1c[1] = -1;
    unk_1c[2] = -1;
    unk_1c[3] = -1;
    func_02023324(&navigator_);
}

THUMB void BattleMenu_ARRAY_ALL::menuExecute()
{
    status::g_Party.setMemberShiftMode();
    int num = unk_2c;
    int count = status::g_Party.getCount() - num;
    if (num > 0 && status::g_Party.getCarriageEnableOnGame()) {
        count++;
    }
    func_02023504(&navigator_, 5, 2, count);
    func_ov015_0216c6c0(&menuItem_, menuItem_.active_, count);
    func_ov015_0216c5c4(&cancelItem_);
}

THUMB void BattleMenu_ARRAY_ALL::menuDraw()
{
    int list[10];
    memset(list, -1, sizeof(list));
    status::g_Party.setMemberShiftMode();
    status::g_Party.getCarriageOutCount();
    int count = status::g_Party.getCount();
    int num = 0;
    for (int i = 0; i < count; i++) {
        int free = 1;
        for (int j = 0; j < unk_2c; j++) {
            if (i == unk_1c[j]) {
                free = 0;
            }
        }
        if (free) {
            if (num == menuItem_.active_) {
                btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = i;
            }
            list[num] = i;
            num++;
        }
    }
    if (unk_2c > 0 && status::g_Party.getCarriageEnableOnGame()) {
        if (num == menuItem_.active_) {
            int target = status::g_Party.getCount();
            btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
        }
        list[num] = -1;
        num++;
    }
    func_ov015_0216bec8(list, num, unk_1c, unk_2c);
    func_02051968(&menuItem_);
    func_02051968(&cancelItem_);
    int actionCount;
    int chara = btl::BattleMenuPlayerControl::getSingleton()->targetChara_;
    if (chara != -1) {
        status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(chara)->haveStatusInfo_;
        actionCount = info->haveAction_.getCount();
        int actions[20];
        int actionNum = 0;
        func_020882d4(actions, 0, sizeof(actions));
        for (int i = 0; i < actionCount; i++) {
            if (status::UseAction::isBattleUse(info->haveAction_.getAction(i))) {
                actions[actionNum] = info->haveAction_.getAction(i);
                actionNum++;
            }
        }
        func_ov015_0216c524(actions, actionNum, chara);
    }
}

THUMB void BattleMenu_ARRAY_ALL::menuUpdate()
{
    status::g_Party.setMemberShiftMode();
    if (func_02023230(&cancelItem_)) {
        cancelItem_.result_ = 0;
        cancelItem_.lastresult_ = 0;
        if (unk_2c == 0) {
            close();
            gBattleMenu_ARRAYMENU.open();
            gBattleMenu_ARRAYMENU.unk_1c = 1;
            redraw_ = 1;
        } else {
            unk_2c--;
            unk_1c[unk_2c] = -1;
        }
        menuItem_.result_ = 0;
        menuItem_.lastresult_ = 0;
        redraw_ = 1;
        return;
    }
    int result = func_02023274(&menuItem_, &navigator_);
    if (result != 0) {
        redraw_ = 1;
        if (result == 2) {
            int used = 0;
            menuItem_.result_ = 0;
            menuItem_.lastresult_ = 0;
            int list[10];
            func_020882d4(list, 0, sizeof(list));
            int num = 0;
            int active = menuItem_.active_;
            int count = status::g_Party.getCount();
            for (int i = 0; i < count; i++) {
                for (int j = 0; j < unk_2c; j++) {
                    if (i == unk_1c[j]) {
                        used = 1;
                    }
                }
                if (!used) {
                    list[num] = i;
                    num++;
                }
                used = 0;
            }
            if (num - 1 == active) {
                menuItem_.active_ = active - 1;
            }
            if (active == count - unk_2c && unk_2c != 0) {
                func_ov015_0216f868(this);
                close();
                gBattleMenu_ARRAYMENU.open();
                gBattleMenu_ARRAYMENU.unk_1c = 0;
                return;
            }
            unk_1c[unk_2c] = list[active];
            unk_2c++;
            int max = status::g_Party.getCount();
            if (max > 4) {
                max = 4;
            }
            if (unk_2c == max) {
                func_ov015_0216f868(this);
                close();
                gBattleMenu_ARRAYMENU.open();
                gBattleMenu_ARRAYMENU.unk_1c = 0;
            }
        }
    }
}

extern "C" THUMB void func_ov015_0216f868(BattleMenu_ARRAY_ALL* self)
{
    for (int i = 0; i < 4; i++) {
        if (self->unk_1c[i] >= 0) {
            self->unk_1c[i] = status::g_Party.getPlayerIndex(self->unk_1c[i]);
        } else {
            self->unk_1c[i] = 0;
        }
    }
    status::g_Party.reorder(self->unk_1c[0], self->unk_1c[1], self->unk_1c[2], self->unk_1c[3]);
    func_020882d4(btl::BattleMenuPlayerControl::getSingleton()->targetMonsterGroup_, 0, sizeof(btl::BattleMenuPlayerControl::getSingleton()->targetMonsterGroup_));
}
