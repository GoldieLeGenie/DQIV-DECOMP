#include "ov028/MaterielMenu_CHANGEGIFT/MaterielMenu_CHANGEGIFT.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/text/TextAPI.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"

THUMB void MaterielMenu_CHANGEGIFT_SELECTCHARA::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02051900(&menuItem_, 1, 5);
    func_02051900(&menuItem2_, 2, 0);
    activeChara_ = 0;
    maxCharaCount_ = status::g_Party.getCount();
    if (status::g_Party.fukuro_ != 0) {
        maxCharaCount_++;
    }
    func_02023324(&navigator_);
}

THUMB void MaterielMenu_CHANGEGIFT_SELECTCHARA::menuExecute()
{
    func_ov016_02177a08(&menuItem_, activeChara_, maxCharaCount_);
    func_ov016_02177a98(&menuItem2_);
}

THUMB void MaterielMenu_CHANGEGIFT_SELECTCHARA::menuDraw()
{
    func_ov016_0216fb6c(1);
    func_02051968(&menuItem_);
    func_02051968(&menuItem2_);
}

THUMB void MaterielMenu_CHANGEGIFT_SELECTCHARA::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
        }
        return;
    }
    if (func_02023230(&menuItem2_)) {
        cancelChange();
        return;
    }
    func_02023504(&navigator_, 5, 2, maxCharaCount_);
    int result = func_02023274(&menuItem_, &navigator_);
    if (result != 0) {
        activeChara_ = menuItem_.active_;
        int activeChara = activeChara_;
        func_ov016_0216ff2c()->activeChara_ = activeChara;
        if (result == 2) {
            close();
            data_ov016_02185ac0.open();
        }
        redraw_ = 1;
    }
}

THUMB void MaterielMenu_CHANGEGIFT_SELECTCHARA::cancelChange()
{
    int leadpc = func_ov016_0216ff2c()->leadpc_;
    data_020ed1bc.openMessageForTALK();
    TextAPI::setMACRO0(0xb, 0x50000000, status::g_Party.getPlayerStatus(leadpc)->haveStatusInfo_.haveStatus_.playerIndex_);
    TextAPI::setMACRO0(0x2a, 0xf0000000, status::g_Party.casinoCoin_);
    data_020ed1bc.addMessage(0xc8afa);
    data_020ed1bc.setYesNo();
    close();
    data_ov016_02185928.open();
    data_ov016_02185928.mode_ = 3;
}
