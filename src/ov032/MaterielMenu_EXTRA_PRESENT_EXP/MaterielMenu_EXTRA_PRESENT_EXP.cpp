#include "ov032/MaterielMenu_EXTRA_PRESENT_EXP/MaterielMenu_EXTRA_PRESENT_EXP.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/sound/SoundManager.hpp"
#include "main/sound/MenuSoundManager.hpp"
#include "main/task/ExecTask.hpp"

THUMB void MaterielMenu_EXTRA_PRESENT_EXP::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02051900(&menuItem_, 3, 0);
    func_02023324(&navigator_);
    func_02023504(&navigator_, 1, 1, 1);
    activeChara_ = func_ov016_0216ff2c()->activeChara_;
    extraExp_ = func_ov016_0216ff2c()->extraExp_;
    subExp_ = extraExp_ <= 10000 ? 60 : 300;
    levelUpMode_ = 0;
    bgm_ = 0;
    MenuSoundManager::getSingleton()->initialize();
}

THUMB void MaterielMenu_EXTRA_PRESENT_EXP::menuExecute()
{
    func_ov016_02177ae8(&menuItem_, menuItem_.active_);
}

THUMB void MaterielMenu_EXTRA_PRESENT_EXP::menuDraw()
{
    if (extraExp_ > 0) {
        func_ov016_0216fdb0(activeChara_, extraExp_);
    }
}

THUMB void MaterielMenu_EXTRA_PRESENT_EXP::menuUpdate()
{
    if (MenuSoundManager::getSingleton()->isPlaySound()) {
        return;
    }
    if (extraExp_ > 0) {
        extraExp_ -= subExp_;
        SoundManager::playSe(0x12d, 0);
        if (extraExp_ < 0) {
            subExp_ += extraExp_;
            if (status::g_Party.getLevelupPlayer() != -1) {
                levelUpMode_ = 1;
                bgm_ = SoundManager::bgmIndex_;
                SoundManager::stopBgm(0);
                MenuSoundManager::getSingleton()->setPlaySound(MenuSoundManager::MENU_SOUND_LEVEL_UP);
            }
        }
        status::g_Party.getPlayerStatus(activeChara_)->haveStatusInfo_.addExp(subExp_);
        redraw_ = 1;
        return;
    }
    switch (levelUpMode_) {
    case 0:
        MaterielMenu_WINDOW_MANAGER::getSingleton()->closeMaterielWindow();
        break;
    case 1:
        if (status::g_Party.getLevelupPlayer() != -1) {
            if (data_020ef8f0.execute() == false) {
                func_02036010(&data_020ef8f0);
            }
        } else {
            if (data_020ef8f0.execute() == false) {
                func_02036010(&data_020ef8f0);
                levelUpMode_ = 2;
            }
        }
        break;
    case 2:
        if (func_02023274(&menuItem_, &navigator_) != 0) {
            SoundManager::playBgm(bgm_, 0);
            MaterielMenu_WINDOW_MANAGER::getSingleton()->closeMaterielWindow();
        }
        break;
    }
}
