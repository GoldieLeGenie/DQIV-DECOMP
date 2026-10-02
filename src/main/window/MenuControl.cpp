#include "main/window/MenuControl.hpp"
#include "main/object/SpriteCharacter.hpp"
#include "main/object/DisplayCharacter.hpp"
#include "main/global/GlobalDQ4.hpp"
#include "main/menu/MenuAPI.hpp"
#include "main/menu/TownMenu_PARTY_TALK.hpp"
#include "main/sound/SoundManager.hpp"
#include "main/cmn/NonBattleActionManager.hpp"
#include "ov000/town/TownStageManager.hpp"
#include "ov001/fld/FieldStage.hpp"

int window::MenuControl::menu_;

ARM window::MenuControl::MenuControl()
{
}

ARM window::MenuControl::~MenuControl()
{
}

ARM void window::MenuControl::setup()
{
    if (data_0210bb94.unkfunc_02058114(0xc)) {
        TownStageManager::getSingleton()->stage_.m_fld.SetPause(1);
        BillboardCharacter::setAllCharaAnim(false);
    } else if (data_0210bb94.unkfunc_02058114(0xe)) {
        fld::FieldStage::getSingleton()->fieldData.pause_ = 1;
        SpriteCharacter::setAllCharaAnim(false);
    }
    playerLock(true);
    state_ = OPEN_SETUP;
    regist_ = PHASE_NORMAL;
}

ARM void window::MenuControl::execute()
{
    switch (state_) {
        case OPEN_SETUP:
            MenuAPI::clearMenuAll();
            state_ = OPEN_SETUP1;
            break;
        case OPEN_SETUP1:
            state_ = OPEN_SETUP2;
            break;
        case OPEN_SETUP2:
            state_ = OPEN_WAIT;
            MenuAPI::changeMenuModeExtra();
            break;
        case OPEN_WAIT:
            if (MenuAPI::isMenuModeExtra()) {
                openMenu();
                state_ = OPEN;
            }
            break;
        case OPEN:
            if (MenuAPI::isFinishMenu()) {
                MenuAPI::changeMenuModeNormal();
                state_ = CLOSE_WAIT;
            }
            break;
        case CLOSE_WAIT:
            if (MenuAPI::isMenuModeNormal()) {
                setupIcon();
                state_ = RELEASE_WAIT;
            }
            break;
        case RELEASE_WAIT:
            if (data_0210bb94.unkfunc_02058114(0xc)) {
                TownStageManager::getSingleton()->stage_.m_fld.SetPause(0);
                BillboardCharacter::setAllCharaAnim(true);
            } else {
                fld::FieldStage::getSingleton()->fieldData.pause_ = 0;
                SpriteCharacter::setAllCharaAnim(true);
            }
            playerLock(false);
            if (regist_ == PHASE_MENU) {
                setup();
            } else {
                goNext(regist_);
            }
            break;
    }
}

ARM void window::MenuControl::openMenu()
{
    int open = 0;
    MenuAPI::openTownMenu();
    if (menu_ == OPEN_MENU_MAGIC) {
        data_ov016_02187c60.close();
        data_ov016_02188ba8.open();
        open = 1;
    } else if (menu_ == OPEN_MENU_ITEM) {
        data_ov016_02187c60.close();
        data_ov016_02188040.open();
        open = 1;
    } else if (menu_ == OPEN_MENU_ITEM_CHARA) {
        data_ov016_02187c60.close();
        data_ov016_02187d50.open();
        open = 1;
    } else if (data_0210bb94.unkfunc_02058114(0xc) || data_0210bb94.unkfunc_02058114(0xe)) {
        SoundManager::playSe(0x12c, 0);
    }
    if (data_0210bb94.unkfunc_02058114(0xe) && open == 1) {
        SoundManager::fieldPlay();
    }
    menu_ = OPEN_MENU_ROOT;
}

ARM int window::MenuControl::getPhase()
{
    return PHASE_MENU;
}
