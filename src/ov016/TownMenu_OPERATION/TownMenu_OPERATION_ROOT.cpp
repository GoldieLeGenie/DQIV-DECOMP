#include "ov016/TownMenu_OPERATION/TownMenu_OPERATION_ROOT.hpp"
#include "ov016/TownMenu_OPERATION/TownMenu_OPERATION_CAREER.hpp"
#include "ov016/TownMenu_ROOT/TownMenu_ROOT.hpp"
#include "ov016/TownMenuPlayerControl.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/menu/CatalogView.hpp"
#include "main/sound/SoundManager.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/OptionStatus.hpp"
#include "main/status/GameFlag.hpp"
#include "main/status/UseAction.hpp"
#include "main/text/TextAPI.hpp"

THUMB void TownMenu_OPERATION_ROOT::menuSetup()
{
    status::g_Party.setPlayerMode();
    menuItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD_CANCEL, menu::MenuItem::CURSORTYPE_ACTIVE);
    cancelItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_CANCEL, menu::MenuItem::CURSORTYPE_NONE);
    sortItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD_CANCEL, menu::MenuItem::CURSORTYPE_ACTIVE);
    charaItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD, menu::MenuItem::CURSORTYPE_ACTIVE);
    mode_ = 0;
    abort_ = 0;
    unk_1ac = 0;
    saveResult_ = 0;
    isMantan_ = 0;
    useKiari_ = 0;
    saveCount_ = 0;
    seCount_ = 0;
    navigator_.setupBase();
    charaNavigator_.setupBase();
    commandCount_ = unkfunc_0217a4e4(command_);
    menuItem_.active_ = TownMenuPlayerControl::getSingleton()->activeTactics_;
}

THUMB void TownMenu_OPERATION_ROOT::menuExecute()
{
    if (data_020ed1bc.isOpen()) {
        return;
    }
    func_ov016_02173a40(&cancelItem_);
    if (mode_ == 1) {
        func_ov016_02173d04(&sortItem_, sortItem_.active_);
        return;
    }
    if (mode_ == 2) {
        if (status::g_Party.getCount() < 5) {
            func_ov016_02173cb0(&charaItem_, status::g_Party.getCount() + 1, charaItem_.active_);
        } else {
            func_ov016_02173bf4(&charaItem_, status::g_Party.getCount() + 1, charaItem_.active_, -1, -1);
        }
    }
    func_ov016_02173a54(&menuItem_, menuItem_.active_, commandCount_);
}

THUMB void TownMenu_OPERATION_ROOT::menuDraw()
{
    if (charaItem_.getActive() == status::g_Party.getCount()) {
        func_ov016_0217dcb0(mode_, command_, commandCount_, -2);
    } else {
        func_ov016_0217dcb0(mode_, command_, commandCount_, charaItem_.getActive());
    }
    if (data_020ed1bc.isOpen()) {
        return;
    }
    cancelItem_.drawActive();
    if (mode_ == 1) {
        sortItem_.drawActive();
        return;
    }
    if (mode_ == 2) {
        charaItem_.drawActive();
        return;
    }
    menuItem_.drawActive();
}

THUMB void TownMenu_OPERATION_ROOT::menuUpdate()
{
    if (seCount_ > 30 && useKiari_ == 0) {
        SoundManager::playSe(0x1f5, 0);
        seCount_ = 0;
        if (actionIndex_ != 0xc7) {
            isMantan_ = 0;
        }
    }
    if (data_020ed1bc.isOpen()) {
        int stat = data_020ed1bc.stat_;
        if (func_0204e004(s_draw)) {
            isMantan_ = 0;
            if (mode_ == 3) {
                status::UseActionParam useActionParam;
                useActionParam.clear();
                if (status::g_Party.isRecoveryForMantan()) {
                    if (status::g_Party.recoveryForMantan(useActionParam)) {
                        data_020ed1bc.restartMessage();
                        allRecoveryMessage(useActionParam);
                        redraw_ = 1;
                        isMantan_ = 1;
                        useKiari_ = 0;
                        seCount_ = 0;
                        return;
                    }
                } else if (status::g_Party.isPoisonForMantan()) {
                    if (status::g_Party.destroyPoisonForMantan(useActionParam)) {
                        data_020ed1bc.restartMessage();
                        allRecoveryMessage(useActionParam);
                        useKiari_ = 1;
                        redraw_ = 1;
                    } else {
                        mode_ = 0;
                    }
                    isMantan_ = 1;
                    seCount_ = 0;
                } else {
                    mode_ = 0;
                }
                status::g_Party.setPlayerMode();
                return;
            }
        }
        if (isMantan_ == 1) {
            seCount_++;
        }
        if (data_020ed1bc.isMessageWAITPROG()) {
            if (abort_ == 2) {
                saveResult_ = func_0202b8b8(3, 3);
                abort_ = 3;
            }
            unkfunc_0217a67c();
            return;
        }
        if (stat == menu::MenuBase::MENUBASE_STAT_OK) {
            if (mode_ == 8) {
                unkfunc_0217a67c();
                return;
            }
            data_020ed1bc.close();
            if (mode_ == 1 || mode_ == 2) {
                if (unk_1ac == 1) {
                    menuItem_.bActive_ = menu::MenuItem::CURSORTYPE_ACTIVE;
                    menuItem_.drawActive();
                    mode_ = 0;
                    unk_1ac = 0;
                    return;
                }
                unkfunc_0217a438();
                return;
            }
        } else if (stat == menu::MenuBase::MENUBASE_STAT_CANCEL) {
            data_020ed1bc.close();
            if (mode_ != 1) {
                mode_ = 0;
                menuItem_.bActive_ = menu::MenuItem::CURSORTYPE_ACTIVE;
                menuItem_.drawActive();
                redraw_ = 1;
            }
        }
        return;
    }
    if (MenuUpdate_Assist::isCancel(cancelItem_)) {
        if (mode_ == 1 || mode_ == 2) {
            mode_ = 0;
            menuItem_.bActive_ = menu::MenuItem::CURSORTYPE_ACTIVE;
            menuItem_.drawActive();
            redraw_ = 1;
            return;
        }
        close();
        data_ov016_02187c60.open();
        data_ov016_02187c60.menuItem_.active_ = TownMenu_ROOT::ROOT_OPERATION;
        return;
    }
    navigator_.setup(2, 5, commandCount_);
    sortNavigator_.setup(2, 1, 2);
    charaNavigator_.setup(5, 2, status::g_Party.getCount() + 1);
    if (mode_ == 1) {
        int result = MenuUpdate_Assist::menuSelect(sortItem_, sortNavigator_);
        if (result == 0) {
            return;
        }
        if (result == 2) {
            unkfunc_0217a2a0();
        }
        redraw_ = 1;
        return;
    }
    if (mode_ == 2) {
        int result = MenuUpdate_Assist::menuSelect(charaItem_, charaNavigator_);
        if (result == 0) {
            return;
        }
        if (result == 2) {
            unkfunc_0217a278();
        }
        redraw_ = 1;
        return;
    }
    int result = MenuUpdate_Assist::menuSelect(menuItem_, navigator_);
    if (result == 0) {
        return;
    }
    if (result == 2) {
        TownMenuPlayerControl::getSingleton()->setActiveTactics(menuItem_.active_);
        switch (command_[menuItem_.active_]) {
        case 0:
            unkfunc_0217a318();
            break;
        case 1:
            close();
            data_ov016_02188f30.open();
            break;
        case 2:
            unkfunc_0217a3e0();
            break;
        case 3:
            if (status::g_Party.getCount() > 2 ||
                (int)status::g_Party.getPlayerStatus(0)->haveStatusInfo_.haveStatus_.playerIndex_ > 2 ||
                (int)status::g_Party.getPlayerStatus(1)->haveStatusInfo_.haveStatus_.playerIndex_ > 2) {
                close();
                data_ov016_02188734.open();
            }
            break;
        case 4:
            mode_ = 2;
            break;
        case 5:
            mode_ = 1;
            break;
        case 6:
            close();
            data_ov016_02187bc4.open();
            break;
        case 7:
            close();
            data_ov016_0218912c.open();
            break;
        case 8:
            mode_ = 8;
            data_020ed1bc.openMessageForMENU();
            if (!g_Stage.isAbortSaveDungeon()) {
                data_020ed1bc.addMessage(0xcba22, 0xcba23);
            } else if (!g_Stage.isAbortSaveTown()) {
                data_020ed1bc.addMessage(0xcba25, 0xcba26, 0xcba2a);
            } else {
                data_020ed1bc.addMessage(0xcba12);
                data_020ed1bc.setYesNo();
                data_020ed1bc.setYesNoSuperCancel(false);
                abort_ = 2;
            }
            break;
        }
    }
    redraw_ = 1;
}

THUMB void TownMenu_OPERATION_ROOT::unkfunc_0217a278()
{
    data_020ed1bc.openMessageForMENU();
    data_020ed1bc.addMessage(0xc3d5b);
    data_020ed1bc.setYesNo();
    menuItem_.bActive_ = menu::MenuItem::CURSORTYPE_NONE;
}

THUMB void TownMenu_OPERATION_ROOT::unkfunc_0217a2a0()
{
    if (status::g_Party.haveItemSack_.getItem(0) != 0) {
        data_020ed1bc.openMessageForMENU();
        if (sortItem_.active_ == 0) {
            g_Option.setSackSort(0);
            data_020ed1bc.addMessage(0xc3d60);
        } else {
            g_Option.setSackSort(1);
            data_020ed1bc.addMessage(0xc3d65);
        }
        data_020ed1bc.setYesNo();
        menuItem_.bActive_ = menu::MenuItem::CURSORTYPE_NONE;
        return;
    }
    data_020ed1bc.openMessageForMENU();
    data_020ed1bc.addMessage(0xc3d68);
}

THUMB void TownMenu_OPERATION_ROOT::unkfunc_0217a318()
{
    status::g_Party.setBattleMode();
    int noRecovery = 1;
    status::UseActionParam useActionParam;
    useActionParam.clear();
    data_020ed1bc.openMessageForMENU();
    if (status::g_Party.isRecoveryForMantan()) {
        if (status::g_Party.recoveryForMantan(useActionParam)) {
            allRecoveryMessage(useActionParam);
            noRecovery = 0;
        }
        mode_ = 3;
        isMantan_ = 1;
    } else if (status::g_Party.isPoisonForMantan()) {
        if (status::g_Party.destroyPoisonForMantan(useActionParam)) {
            allRecoveryMessage(useActionParam);
            noRecovery = 0;
        }
        mode_ = 3;
        isMantan_ = 1;
    }
    if (noRecovery) {
        isMantan_ = 0;
        data_020ed1bc.addMessage(0xc3d6b);
    }
    status::g_Party.setPlayerMode();
}

THUMB void TownMenu_OPERATION_ROOT::unkfunc_0217a3e0()
{
    status::g_Party.setMemberShiftMode();
    if (status::g_Party.getCount() == 1 && !status::g_Party.getCarriageEnableOnGame()) {
        menuItem_.result_ = 0;
        menuItem_.lastresult_ = 0;
        data_020ed1bc.openMessageForMENU();
        data_020ed1bc.addMessage(0xc3d59);
        status::g_Party.setPlayerMode();
        return;
    }
    close();
    data_ov016_02188140.open();
}

THUMB void TownMenu_OPERATION_ROOT::unkfunc_0217a438()
{
    int count = status::g_Party.getCount();
    if (mode_ == 1) {
        if (status::g_Party.haveItemSack_.getItem(0) == 0) {
            return;
        }
        status::g_Party.haveItemSack_.sortOutSack((status::HaveItemSack::SortType)g_Option.getSackSort());
        data_020ed1bc.openMessageForMENU();
        data_020ed1bc.addMessage(0xc3d63);
    } else {
        if (count == charaItem_.active_) {
            for (int i = 0; i < count; i++) {
                status::g_Party.haveItemSack_.sortOutItem(&status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveItem_);
            }
        } else {
            status::g_Party.haveItemSack_.sortOutItem(&status::g_Party.getPlayerStatus(charaItem_.active_)->haveStatusInfo_.haveItem_);
        }
        data_020ed1bc.openMessageForMENU();
        data_020ed1bc.addMessage(0xc3d5e);
    }
    unk_1ac = 1;
}

THUMB int TownMenu_OPERATION_ROOT::unkfunc_0217a4e4(char* command)
{
    if (status::g_Story.chapter_ >= 5 && g_AreaFlag.check(0x132) == true) {
        for (char i = 0; i < 9; i++) {
            command[i] = i;
        }
        return 9;
    }
    char normal[8] = { 0, 1, 2, 4, 5, 6, 8, 7 };
    for (char i = 0; i < 8; i++) {
        command[i] = normal[i];
    }
    command[8] = -1;
    return 8;
}

THUMB void TownMenu_OPERATION_ROOT::allRecoveryMessage(status::UseActionParam& useActionParam)
{
    status::g_Party.setBattleMode();
    int message[4];
    int messageCount;
    int spell;
    int targetCount;
    status::UseActionMessage* useActionMessage;
    for (int i = 0; i < 4; i++) {
        message[i] = 0;
    }
    useActionMessage = &useActionParam.message_[0];
    spell = useActionParam.actionIndex_;
    targetCount = useActionParam.targetCount_;
    TextAPI::setMACRO0(1, 0x50000000, useActionParam.actorCharacterStatus_->haveStatusInfo_.haveStatus_.playerIndex_);
    TextAPI::setMACRO0(0x11, 0x70000000, status::UseAction::getWordDBIndex(spell));
    messageCount = 0;
    message[messageCount] = useActionMessage->execMessage_[messageCount];
    while (message[messageCount] != 0) {
        data_020ed1bc.addMessageNOWAIT(message[messageCount]);
        messageCount++;
        message[messageCount] = useActionMessage->execMessage_[messageCount];
        SoundManager::playSe(0x132, 0);
    }
    for (int i = 0; i < targetCount; i++) {
        TextAPI::setMACRO0(0x12, 0x50000000, useActionParam.targetCharacterStatus_[i]->haveStatusInfo_.haveStatus_.playerIndex_);
        messageCount = 0;
        message[messageCount] = useActionMessage->resultMessage_[messageCount];
        while (message[messageCount] != 0) {
            if (!status::g_Party.isRecoveryForMantan() && !status::g_Party.isRecoveryForMantan()) {
                if (i != targetCount) {
                    data_020ed1bc.addMessageNOWAIT(message[messageCount]);
                } else {
                    data_020ed1bc.addMessage(message[messageCount]);
                }
            } else {
                data_020ed1bc.addMessageNOWAIT(message[messageCount]);
            }
            messageCount++;
            message[messageCount] = useActionMessage->resultMessage_[messageCount];
        }
    }
    actionIndex_ = useActionParam.actionIndex_;
}

THUMB void TownMenu_OPERATION_ROOT::unkfunc_0217a67c()
{
    switch (abort_) {
    case 0:
        data_020ed1bc.close();
        break;
    case 1:
        break;
    case 2:
        data_020ed1bc.close();
        data_020ed1bc.openMessageForMENU();
        data_020ed1bc.addMessageNOWAIT(0xcba15);
        data_020ed1bc.addMessageWAITKEY();
        break;
    case 3:
        data_020ed1bc.close();
        data_020ed1bc.openMessageForMENU();
        if (saveResult_ == 0) {
            data_020ed1bc.addMessage(0xcba1c);
            abort_ = 1;
        } else {
            data_020ed1bc.addMessage(0xcba18, 0xcba19);
            abort_ = 1;
        }
        break;
    }
}
