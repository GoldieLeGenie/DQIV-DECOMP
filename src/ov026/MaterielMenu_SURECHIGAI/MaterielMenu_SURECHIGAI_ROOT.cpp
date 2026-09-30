#include "ov026/MaterielMenu_SURECHIGAI/MaterielMenu_SURECHIGAI.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/menu/MaterielMenuWindowManager.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/profile/Profile.hpp"

THUMB void MaterielMenu_SURECHIGAI_ROOT::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02051900(&menuItem_, 3, 5);
    menuItem_.active_ = 0;
    func_02023324(&navigator_);
    firstFlag_ = 1;
    mode_ = 5;
    MaterielMenu_WINDOW_MANAGER::getSingleton()->surechigaiStart_ = 0;
}

THUMB void MaterielMenu_SURECHIGAI_ROOT::menuExecute()
{
    func_ov016_02177b04(&menuItem_, menuItem_.active_);
}

THUMB void MaterielMenu_SURECHIGAI_ROOT::menuDraw()
{
    if (data_020ed1bc.isMessageWAITPROG()) {
        func_ov016_0216fe58();
        func_02051968(&menuItem_);
    }
}

THUMB void MaterielMenu_SURECHIGAI_ROOT::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if (data_020ed1bc.isMessageWAITPROG()) {
            if (firstFlag_ == 1) {
                redraw_ = 1;
                firstFlag_ = 0;
                return;
            }
            func_02023504(&navigator_, 1, 5, 5);
            int result = func_02023274(&menuItem_, &navigator_);
            if (result != 0) {
                if (result == 2) {
                    data_020ed1bc.clearMessageWAITPROG();
                    selectCommand();
                }
                if (result == 3) {
                    data_020ed1bc.clearMessageWAITPROG();
                    data_020ed1bc.close();
                    data_020ed1bc.openMessageForTALK();
                    data_020ed1bc.addMessage(0x92a37, 0x92a38);
                }
                redraw_ = 1;
            }
            return;
        }
        if (data_020ed1bc.stat_ == menu::MenuBase::MENUBASE_STAT_OK) {
            data_020ed1bc.close();
            if (mode_ == 1) {
                close();
                data_ov016_02185e58.open();
                data_ov016_02185e58.changeTaishi_ = 1;
                return;
            }
            if (mode_ == 0) {
                data_020ed1bc.openMessageForTALK();
                data_020ed1bc.addMessageNOWAIT(0x92a33);
                data_020ed1bc.addMessageWAITKEY();
                firstFlag_ = 1;
                return;
            }
            if (mode_ == 3) {
                if (func_0203a388(&data_020f0078) == 0) {
                    data_020ed1bc.openMessageForTALK();
                    data_020ed1bc.addMessage(0x92a21, 0x92a22);
                    firstFlag_ = 1;
                } else {
                    close();
                    data_ov016_02185d30.open();
                }
                mode_ = 5;
                return;
            }
            if (firstFlag_ == 0) {
                MaterielMenu_WINDOW_MANAGER::getSingleton()->closeMaterielWindow();
            }
            return;
        }
        if (data_020ed1bc.stat_ == menu::MenuBase::MENUBASE_STAT_CANCEL) {
            data_020ed1bc.close();
            if (mode_ == 1) {
                menuItem_.active_ = 0;
                data_020ed1bc.openMessageForTALK();
                data_020ed1bc.addMessageNOWAIT(0x92a2f);
                mode_ = 5;
                firstFlag_ = 1;
            }
            if (firstFlag_ == 0) {
                MaterielMenu_WINDOW_MANAGER::getSingleton()->closeMaterielWindow();
            }
        }
        return;
    }
    if (firstFlag_ == 1) {
        data_020ed1bc.openMessageForTALK();
        data_020ed1bc.addMessageNOWAIT(0x92ab4);
        data_020ed1bc.addMessageWAITKEY();
    }
}

THUMB void MaterielMenu_SURECHIGAI_ROOT::selectCommand()
{
    data_020ed1bc.close();
    switch (menuItem_.active_) {
    case 0:
        mode_ = 0;
        if (func_0203a364(&data_020f0078) == -1) {
            data_020ed1bc.openMessageForTALK();
            data_020ed1bc.addMessage(0x92a16, 0x92a17);
            mode_ = 5;
            firstFlag_ = 1;
            break;
        }
        close();
        stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        MaterielMenu_WINDOW_MANAGER::getSingleton()->type_ = 3;
        data_ov016_02186728.open();
        data_ov016_02186728.saveType_ = MaterielMenu_SAVE::TYPE_SURECHIGAI;
        break;
    case 1:
        mode_ = 1;
        data_020ed1bc.openMessageForTALK();
        data_020ed1bc.addMessageNOWAIT(0x92abc);
        data_020ed1bc.setYesNo(0);
        data_020ed1bc.setYesNoPosition(0xc0, 0x40);
        break;
    case 2:
        mode_ = 2;
        close();
        data_ov016_02185ca0.open();
        break;
    case 3:
        mode_ = 3;
        data_020ed1bc.openMessageForTALK();
        data_020ed1bc.addMessage(0x92a1c, 0x92a1d, 0x92a1e);
        break;
    case 4:
        mode_ = 4;
        data_020ed1bc.openMessageForTALK();
        data_020ed1bc.addMessage(0x92a37, 0x92a38);
        break;
    }
}
