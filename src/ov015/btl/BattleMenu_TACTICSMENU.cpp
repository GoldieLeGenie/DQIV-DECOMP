#include "ov015/btl/BattleMenu.hpp"
#include "ov015/btl/BattleMenuPlayerControl.hpp"
#include "main/profile/Profile.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"

THUMB void BattleMenu_TACTICSMENU::menuSetup()
{
    status::g_Party.setBattleMode();
    func_02051900(&menuItem_, 1, 5);
    func_02051900(&unk_120, 0, 0);
    func_02051900(&cancelItem_, 2, 0);
    unk_20 = 0;
    unk_1c = 0;
    unk_28 = status::g_Party.getPlayerStatus(0)->haveStatusInfo_.battleCommand_;
    unk_24 = 0;
    unk_54 = 1;
    func_020882d4(unk_2c, -1, sizeof(unk_2c));
    for (int i = 0; i < status::g_Party.getCarriageOutCount(); i++) {
        status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(i)->haveStatusInfo_;
        if (info->haveStatus_.isPlayer_ != 0 && (int)info->haveStatus_.playerIndex_ > 2) {
            unk_2c[unk_54] = i;
            unk_54++;
        }
    }
    unk_2c[0] = -1;
    unk_2c[unk_54] = -1;
    func_02023324(&unk_1f4);
}

THUMB void BattleMenu_TACTICSMENU::menuExecute()
{
    func_02023504(&unk_1f4, 3, 2, 6);
    func_02023504(&unk_1e8, 5, 1, unk_54);
    if (unk_1c == 0) {
        func_ov015_0216c66c(&menuItem_, unk_24, unk_54);
    } else {
        func_ov015_0216c620(&unk_120, unk_28);
    }
    func_ov015_0216c5c4(&cancelItem_);
}

THUMB void BattleMenu_TACTICSMENU::menuDraw()
{
    if (unk_1c == 0) {
        func_ov015_0216bbdc();
    } else {
        func_ov015_0216bc84();
    }
    func_02051968(&menuItem_);
    func_02051968(&unk_120);
}

THUMB void BattleMenu_TACTICSMENU::menuUpdate()
{
    if (!func_ov015_0216fc4c(this) && !func_ov015_0216fb88(this)) {
        func_ov015_0216fbdc(this);
    }
    unk_24 = func_020233cc(&unk_1e8, menuItem_.active_);
    unk_28 = func_020233cc(&unk_1f4, unk_120.active_);
    if (unk_20 != unk_1c) {
        if (unk_1c == 0) {
            func_02051900(&menuItem_, 3, 5);
            func_02051900(&unk_120, 0, 0);
        } else {
            func_02051900(&menuItem_, 0, 0);
            func_02051900(&unk_120, 3, 5);
        }
        menuItem_.active_ = unk_24;
        unk_120.active_ = unk_28;
        unk_20 = unk_1c;
    }
}

extern "C" THUMB int func_ov015_0216fb88(BattleMenu_TACTICSMENU* self)
{
    int result = func_02023274(&self->menuItem_, &self->unk_1e8);
    if (result != 0) {
        self->menuItem_.result_ = 0;
        self->menuItem_.lastresult_ = 0;
        self->redraw_ = 1;
        if (result == 1) {
            self->unk_1c = 0;
        } else if (result == 2) {
            self->unk_1c = 1;
        }
        self->unk_24 = func_020233cc(&self->unk_1e8, self->menuItem_.active_);
        func_ov015_0216fc98(self);
        return 1;
    }
    return 0;
}

extern "C" THUMB void func_ov015_0216fbdc(BattleMenu_TACTICSMENU* self)
{
    int result = func_02023274(&self->unk_120, &self->unk_1f4);
    if (result != 0) {
        if (result == 1) {
            self->unk_1c = 1;
            self->redraw_ = 1;
            return;
        }
        if (result == 2) {
            if (self->unk_1c == 0) {
                self->unk_1c = 1;
            } else if (self->unk_1c == 1) {
                func_ov015_0216fcec(self);
                self->unk_1c = 0;
            }
            if (self->unk_24 == 0) {
                self->close();
                gBattleMenu_ROOT.open();
                gBattleMenu_ROOT.menuItem_.active_ = 2;
            }
            self->unk_120.result_ = 0;
            self->unk_120.lastresult_ = 0;
            self->redraw_ = 1;
        }
    }
}

extern "C" THUMB int func_ov015_0216fc4c(BattleMenu_TACTICSMENU* self)
{
    if (func_02023230(&self->cancelItem_)) {
        self->cancelItem_.result_ = 0;
        self->cancelItem_.lastresult_ = 0;
        if (self->unk_1c == 0) {
            self->close();
            gBattleMenu_ROOT.open();
            gBattleMenu_ROOT.menuItem_.active_ = 2;
        } else if (self->unk_1c == 1) {
            self->unk_1c = 0;
        }
        self->redraw_ = 1;
        return 1;
    }
    return 0;
}

extern "C" THUMB void func_ov015_0216fc98(BattleMenu_TACTICSMENU* self)
{
    int chara = self->unk_2c[self->unk_24];
    btl::BattleMenuPlayerControl::getSingleton()->activeChara_ = chara;
    if (self->unk_24 < 0) {
        self->unk_28 = status::g_Party.getPlayerStatus(self->unk_2c[self->unk_24])->haveStatusInfo_.battleCommand_;
    } else if (self->unk_2c[1] != -1) {
        self->unk_28 = status::g_Party.getPlayerStatus(self->unk_2c[1])->haveStatusInfo_.battleCommand_;
    } else {
        self->unk_28 = 0;
    }
}

extern "C" THUMB void func_ov015_0216fcec(BattleMenu_TACTICSMENU* self)
{
    CommandType command[6] = {
        COMMAND_GANGANIKOUZE,
        COMMAND_BACCHIRIGANBARE,
        COMMAND_ORENIMAKASERO,
        COMMAND_JYUMONTUKAUNA,
        COMMAND_INOCHIDAIZINI,
        COMMAND_MEIREISASERO
    };
    if (self->unk_24 != 0) {
        status::g_Party.getPlayerStatus(self->unk_2c[self->unk_24])->haveStatusInfo_.battleCommand_ = command[self->unk_28];
        return;
    }
    for (int i = 0; i < status::g_Party.getCount(); i++) {
        status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(i)->haveStatusInfo_;
        if (info->haveStatus_.isPlayer_ != 0 && info->haveStatus_.playerIndex_ != 1 && info->haveStatus_.playerIndex_ != 2) {
            info->battleCommand_ = command[self->unk_28];
        }
    }
}
