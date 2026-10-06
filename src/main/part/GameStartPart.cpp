#include "main/part/GameStartPart.hpp"
#include "main/global/Global.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/menu/MenuAPI.hpp"
#include "main/menu/MenuManager.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/sound/Sound.hpp"
#include "main/sound/SoundManager.hpp"
#include "ov016/MaterielMenu_LOAD/MaterielMenu_LOAD.hpp"

GameStartPart g_GameStartPart;
static int active;

ARM void GameStartPart::initialize()
{
    func_02080e90(data_0211c4cc);
    Sound::unkfunc_02055998(0);
    SoundManager::stop(0);
    g_Global.fadeIn(30);
    func_02087590((int)&OVERLAY_16_ID);
    cardcheck_ = func_0202c040();
    if (cardcheck_ == 0) {
        return;
    }
    MenuAPI::openMenu(&gMaterielMenu_LOAD);
    active = 1;
    SoundManager::play(4, 15);
}

ARM void GameStartPart::terminate()
{
    SoundManager::stop(0);
    func_020875a4((int)&OVERLAY_16_ID);
}

ARM void GameStartPart::onExecutePart()
{
    if (cardcheck_ == 0) {
        if (data_020ed1bc.isOpen()) {
            return;
        }
        data_020ed1bc.openMessageForMENU();
        data_020ed1bc.addMessage(0xcb60b);
        return;
    }
    if (active == 0) {
        return;
    }
    if (gMaterielMenu_LOAD.stat_ == menu::MenuBase::MENUBASE_STAT_OK) {
        gMaterielMenu_LOAD.close();
        cardcheck_ = 0;
        active = 0;
    }
    if (gMaterielMenu_LOAD.stat_ == menu::MenuBase::MENUBASE_STAT_CANCEL) {
        gMaterielMenu_LOAD.close();
        g_Global.startDebugTown();
        active = 0;
    }
}

ARM void GameStartPart::onDrawPart()
{
}

ARM void GameStartPart::onWindowPart()
{
}

ARM void GameStartPart::onDebugPart()
{
}
