#pragma ipa file
#include "main/menu/MenuAPI.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/menu/MenuManager.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/menu/TownMenu_PARTY_TALK.hpp"
#include "main/menu/CommonMenu_YESNO.hpp"
#include "main/global/Global.hpp"
#include "main/cmn/PartyTalk.hpp"
#include "ov003/btl/BattleMonsterMask.hpp"
#include "ov015/btl/BattleMenu.hpp"
#include "ov016/MaterielMenu_LOAD/MaterielMenu_LOAD.hpp"
#include "ov026/MaterielMenu_SURECHIGAI/MaterielMenu_SURECHIGAI.hpp"

static menu::MenuBase* s_rootmenu;
static int s_menuIndex;

static char* s_menuName[] = {
    0,
    "gMaterielMenu_LOAD",
    "gCommonMenu_APITEST",
    "gTownMenu_ROOT",
    "gTownMenu_MESSAGE",
    "gCmmonMenu_YESNO",
    "gTownMenu_TOWN",
    "gTownShopMenu",
    "gMaterielMenu_SURECHIGAI_ROOT",
    "gMaterielMenu_SURECHIGAI_SELECT_OBJECT",
};

THUMB void MenuAPI::unkfunc_0200d3c8()
{
    char* name = 0;
    if (s_menuIndex != 0) {
        name = s_menuName[s_menuIndex];
    }
    if (name != 0) {
        menu::MenuBase* menu = 0;
        if (dss::DssUtils::unkfunc_020882b0(name, "gMaterielMenu_LOAD") == 0) {
            menu = &data_ov016_02187918;
        }
        if (dss::DssUtils::unkfunc_020882b0(name, "gCommonMenu_APITEST") == 0) {
            menu = &data_020ed068;
        }
        if (dss::DssUtils::unkfunc_020882b0(name, "gTownMenu_ROOT") == 0) {
            menu = &data_ov016_02187c60;
        }
        if (dss::DssUtils::unkfunc_020882b0(name, "gTownMenu_MESSAGE") == 0) {
            menu = &data_020ed1bc;
        }
        if (dss::DssUtils::unkfunc_020882b0(name, "gCmmonMenu_YESNO") == 0) {
            menu = &data_020ed094;
        }
        if (dss::DssUtils::unkfunc_020882b0(name, "gTownMenu_TOWN") == 0) {
            menu = &data_020ed11c;
        }
        if (dss::DssUtils::unkfunc_020882b0(name, "gTownShopMenu") == 0) {
            menu = &data_ov016_02187b48;
        }
        if (dss::DssUtils::unkfunc_020882b0(name, "gMaterielMenu_SURECHIGAI_ROOT") == 0) {
            menu = &data_ov016_02185dc4;
        }
        if (dss::DssUtils::unkfunc_020882b0(name, "gMaterielMenu_SURECHIGAI_SELECT_OBJECT") == 0) {
            menu = &data_ov016_02185e58;
        }
        if (menu != 0) {
            clearMenuAll();
            openMenu(menu);
        }
    }
}

THUMB void MenuAPI::changeMenuModeNormal()
{
    clearMenuAll();
    MenuManager::requestMenuMode(MENUDISPLAY_NORMAL);
}

THUMB void MenuAPI::changeMenuModeExtra()
{
    clearMenuAll();
    MenuManager::requestMenuMode(MENUDISPLAY_EXTRA);
}

THUMB int MenuAPI::isMenuModeNormal()
{
    return MenuManager::isMenuMode(MENUDISPLAY_NORMAL);
}

THUMB int MenuAPI::isMenuModeExtra()
{
    return MenuManager::isMenuMode(MENUDISPLAY_EXTRA);
}

THUMB void MenuAPI::openMenu(menu::MenuBase* menu)
{
    clearMenuAll();
    s_rootmenu = menu;
    menu->open();
}

THUMB void MenuAPI::closeMenu()
{
    s_rootmenu->close();
    s_rootmenu = 0;
}

THUMB int MenuAPI::isFinishMenu()
{
    if (s_rootmenu == 0) {
        return true;
    }
    if (s_rootmenu->stat_ == menu::MenuBase::MENUBASE_STAT_CANCEL) {
        return true;
    }
    if (s_rootmenu->stat_ == menu::MenuBase::MENUBASE_STAT_OK) {
        return true;
    }
    return false;
}

THUMB void MenuAPI::clearMenuAll()
{
    MenuManager::clearMenuAll();
    s_rootmenu = 0;
}

THUMB void MenuAPI::openTownMenu()
{
    if (s_menuIndex != 0) {
        unkfunc_0200d3c8();
    } else {
        openMenu(&data_ov016_02187c60);
    }
}

THUMB int MenuAPI::isTownMenuRoot()
{
    if (s_rootmenu == &data_ov016_02187c60) {
        return true;
    }
    return false;
}

THUMB void MenuAPI::openBattleMenu()
{
    BattleMonsterMask::getSingleton()->setup();
    if (g_Global.fightStadiumFlag_ == 0) {
        BattleMenuJudge::getSingleton()->baseSetup();
        openMenu(&gBattleMenu_ROOT);
    }
}

THUMB void MenuAPI::setBattleBackDrop(unsigned short backDrop)
{
    func_02081264(backDrop);
}

THUMB void MenuAPI::openBattleStadiumAbort()
{
    data_ov015_0217973c.open();
    func_ov015_0216cf10(&data_ov015_0217973c);
}

THUMB void MenuAPI::closeBattleStadiumAbort()
{
    data_ov015_0217973c.close();
}

THUMB void MenuAPI::openMessage(int message, int count)
{
    openMenu(&data_020ed1bc);
    data_020ed1bc.openMessageForTALK();
    data_020ed1bc.addMessageCount(message, count);
}

THUMB void MenuAPI::openCommonMessage()
{
    openMenu(&data_020ed1bc);
    data_020ed1bc.openMessageForTALK();
}

THUMB void MenuAPI::addCommonMessage(int message)
{
    data_020ed1bc.addMessage(message);
}

THUMB void MenuAPI::waitCommonMessage()
{
    data_020ed1bc.addMessageWAITKEY();
}

THUMB void MenuAPI::clearCommonMessage()
{
    data_020ed1bc.clearMessageWAITPROG();
}

THUMB bool MenuAPI::isWaitMessage()
{
    return data_020ed1bc.isMessageWAITPROG();
}

THUMB int MenuAPI::isMessageWaitTrigger()
{
    return func_0204dfd8(data_0210b380);
}

THUMB void MenuAPI::clearMessageWaitTriggerSE()
{
    func_0204e040(data_0210b380);
}

THUMB void MenuAPI::clearMessageWaitTriggerNOSE()
{
    func_0204e050(data_0210b380);
}

THUMB void MenuAPI::openEncountMessage()
{
    openMenu(&data_020ed1bc);
    data_020ed1bc.openMessageForENCOUNT();
    if (g_Global.fightStadiumFlag_ == 0) {
        gBattleMenuSub_HISTORY.open();
        gBattleMenuSub_HISTORY.history_ = 0;
    }
}

THUMB void MenuAPI::openBattleMessage()
{
    int abort = data_ov015_0217973c.isOpen();
    openMenu(&data_020ed1bc);
    data_020ed1bc.openMessageForBATTLE();
    if (g_Global.fightStadiumFlag_ == 0) {
        gBattleMenuSub_HISTORY.open();
        gBattleMenuSub_HISTORY.history_ = 1;
        if (abort) {
            data_ov015_0217973c.open();
        }
    }
}

THUMB void MenuAPI::addMessage(int message)
{
    data_020ed1bc.addMessage(message);
}

THUMB void MenuAPI::addMessageSerial(int message)
{
    data_020ed1bc.addMessageSerial(message);
}

THUMB void MenuAPI::catMessage(int message)
{
    data_020ed1bc.addMessageNOWAIT(message);
}

THUMB void MenuAPI::shakeMessage()
{
    MessageWindow* window = data_0210b380;
    window->shake_ = 1;
    window->shakeCount_ = 0;
}

THUMB void MenuAPI::setMessageCursor(bool flag)
{
    data_020ed1bc.setMessageIntervalCursor(flag);
    data_020ed1bc.setMessageLastCursor(flag);
}

THUMB void MenuAPI::openMessageWindowMenu()
{
    data_020ed1bc.openMessageForMENU();
}

THUMB int MenuAPI::isFinishMessageWindow()
{
    if (data_020ed1bc.stat_ == menu::MenuBase::MENUBASE_STAT_CANCEL) {
        return true;
    }
    if (data_020ed1bc.stat_ == menu::MenuBase::MENUBASE_STAT_OK) {
        return true;
    }
    return false;
}

THUMB int MenuAPI::isFinishMessage()
{
    return func_0204e004(data_0210b380);
}

THUMB int MenuAPI::isEndMessage()
{
    return func_0204e018(data_0210b380);
}

THUMB void MenuAPI::suspendMessageKeyInput(int flag)
{
    data_020ed1bc.suspendInput_ = flag;
}
