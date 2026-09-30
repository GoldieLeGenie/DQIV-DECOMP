#include "ov030/MaterielMenu_BANK/MaterielMenu_BANK.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/text/TextAPI.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StoryStatus.hpp"

THUMB void MaterielMenu_BANK_ROOT::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02051900(&menuItem_, 3, 5);
    menuItem_.active_ = 0;
    func_02023324(&navigator_);
    oldActive_ = 0;
    first_ = 1;
    end_ = 0;
    playerID_ = 0;
    while (status::g_Party.getPlayerStatus(playerID_)->haveStatusInfo_.isDeath()) {
        playerID_++;
        if (playerID_ > status::g_Party.getCount()) {
            playerID_ = 0;
            break;
        }
    }
}

THUMB void MaterielMenu_BANK_ROOT::menuExecute()
{
    func_ov016_02177318(&menuItem_, oldActive_);
}

THUMB void MaterielMenu_BANK_ROOT::menuDraw()
{
    if (data_020ed1bc.isMessageWAITPROG()) {
        func_ov016_0216fcf0();
        func_02051968(&menuItem_);
    }
}

THUMB void MaterielMenu_BANK_ROOT::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if (data_020ed1bc.isMessageWAITPROG()) {
            if (first_) {
                redraw_ = 1;
                first_ = 0;
                return;
            }
            func_02023504(&navigator_, 1, 3, 3);
            int result = func_02023274(&menuItem_, &navigator_);
            if (result == 0) {
                return;
            }
            if (result == 2) {
                data_020ed1bc.close();
                switch (menuItem_.active_) {
                case 0:
                    data_ov016_021863c0.open();
                    data_ov016_021863c0.unk_90 = 0;
                    close();
                    break;
                case 1:
                    data_ov016_02186500.open();
                    data_ov016_02186500.unk_90 = 1;
                    close();
                    break;
                case 2:
                    closeBank();
                    break;
                }
            }
            if (result == 3) {
                closeBank();
            }
            oldActive_ = menuItem_.active_;
            redraw_ = 1;
            return;
        }
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
            if (end_) {
                MaterielMenu_WINDOW_MANAGER::getSingleton()->closeMaterielWindow();
            }
        }
    } else if (first_) {
        TextAPI::setMACRO0(0xb, 0x50000000, status::g_Party.getPlayerStatus(playerID_)->haveStatusInfo_.haveStatus_.playerIndex_);
        data_020ed1bc.openMessageForTALK();
        if (status::g_Story.isUseBank() == false) {
            status::g_Story.setUseBank(true);
            data_020ed1bc.addMessage(0xc6bb2, 0xc6bb3, 0xc6be8, 0xc6bb4);
            data_020ed1bc.addMessageWAITKEY();
        } else if (status::g_Party.bankMoney_ == 0) {
            data_020ed1bc.addMessage(0xc6bdf);
            data_020ed1bc.addMessageNOWAIT(0xc6be5);
            data_020ed1bc.addMessageWAITKEY();
        } else {
            TextAPI::setMACRO0(0x30, 0xf0000000, status::g_Party.bankMoney_);
            data_020ed1bc.addMessage(0xc6bdf);
            data_020ed1bc.addMessageNOWAIT(0xc6be2);
            data_020ed1bc.addMessageWAITKEY();
        }
    }
}

THUMB void MaterielMenu_BANK_ROOT::closeBank()
{
    int playerIndex = status::g_Party.getPlayerStatus(playerID_)->haveStatusInfo_.haveStatus_.playerIndex_;
    data_020ed1bc.openMessageForTALK();
    if (status::g_Party.bankMoney_ == 0) {
        TextAPI::setMACRO0(0xb, 0x50000000, playerIndex);
        data_020ed1bc.addMessage(0xc6bdd);
    } else {
        TextAPI::setMACRO0(0x30, 0xf0000000, status::g_Party.bankMoney_);
        data_020ed1bc.addMessage(0xc6bdb);
    }
    end_ = 1;
}
