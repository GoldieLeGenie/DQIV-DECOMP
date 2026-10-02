#include "main/cmn/CommonChapterTitle.hpp"
#include "main/Commands/CommonScriptCommand.hpp"
#include "main/global/Global.hpp"
#include "main/global/GlobalDQ4.hpp"
#include "main/cmn/TalkSoundManager.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/cmn/PartyTalk.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/cmn/CommonCounterInfo.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/menu/MaterielMenuWindowManager.hpp"
#include "main/sound/SoundManager.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/script/ScriptBaseCommand.hpp"
#include "ov000/town/TownSystem.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "ov000/town/TownCharacterManager.hpp"
#include "ov000/town/TownWindowSystem.hpp"

THUMB void __cmd_fade_in::initialize(char* scriptParam)
{
    PARAM_FADEIN* param = (PARAM_FADEIN*)scriptParam;
    g_Global.fadeIn(param->frame);
    count_ = 0;
    countFrame_ = param->frame;
}

THUMB void __cmd_fade_in::execute()
{
    count_++;
}

THUMB int __cmd_fade_in::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

THUMB void __cmd_fade_out::initialize(char* scriptParam)
{
    PARAM_FADEOUT* param = (PARAM_FADEOUT*)scriptParam;
    if (param->type == 0) {
        g_Global.fadeOutBlack(param->frame);
    } else {
        g_Global.fadeOutWhite(param->frame);
    }
    count_ = 0;
    countFrame_ = param->frame;
}

THUMB void __cmd_fade_out::execute()
{
    count_++;
}

THUMB int __cmd_fade_out::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

THUMB void __cmd_fade_in2::initialize(char* scriptParam)
{
    PARAM_FADEIN* param = (PARAM_FADEIN*)scriptParam;
    int frame = param->frame;
    switch (data_020f21f8.state_) {
        case GlobalFade::FADE_NONE:
            data_020f21f8.state_ = GlobalFade::FADE_OUT_BLACK;
            break;
        case GlobalFade::FADE_IN_BLACK:
            data_020f21f8.state_ = GlobalFade::FADE_OUT_WHITE;
            break;
        default:
            data_020f21f8.state_ = GlobalFade::FADE_OUT_BLACK;
            break;
    }
    data_020f21f8.count_ = 0;
    data_020f21f8.frames_ = frame;
    func_02058294(data_0210bc18, &data_020f21f8);
    count_ = 0;
    countFrame_ = param->frame;
}

THUMB void __cmd_fade_in2::execute()
{
    count_++;
}

THUMB int __cmd_fade_in2::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

THUMB void __cmd_fade_out2::initialize(char* scriptParam)
{
    PARAM_FADEOUT* param = (PARAM_FADEOUT*)scriptParam;
    if (param->type == 0) {
        int frame = param->frame;
        data_020f21f8.state_ = GlobalFade::FADE_NONE;
        data_020f21f8.count_ = 0;
        data_020f21f8.frames_ = frame;
        func_02084e8c(data_020f220c, 0, 0, 0);
        func_02084e8c(data_020f2244, 0, 0, 0);
        func_02058294(data_0210bc18, &data_020f21f8);
    } else {
        int frame = param->frame;
        data_020f21f8.state_ = GlobalFade::FADE_IN_BLACK;
        data_020f21f8.count_ = 0;
        data_020f21f8.frames_ = frame;
        func_02084e8c(data_020f220c, 0x1f, 0x1f, 0x1f);
        func_02084e8c(data_020f2244, 0x1f, 0x1f, 0x1f);
        func_02058294(data_0210bc18, &data_020f21f8);
    }
    count_ = 0;
    countFrame_ = param->frame;
}

THUMB void __cmd_fade_out2::execute()
{
    count_++;
}

THUMB int __cmd_fade_out2::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

THUMB void __cmd_message1_self_closing::initialize(char* scriptParam)
{
    PARAM_MESSAGE1_SELF_CLOSING* param = (PARAM_MESSAGE1_SELF_CLOSING*)scriptParam;
    count_ = 0;
    countFrame_ = param->frame;
    cmn::g_talkSound.setMessageSound(1, -1);
    data_020ed1bc.openMessageForTALK();
    data_020ed1bc.addMessage(param->message);
    if (!g_HengeNoTsue.isMonster()) {
        cmn::PartyTalk::getSingleton()->setPreMessageNo(param->message);
    }
    cmn::GameManager::getSingleton()->playerManager_->setLock(1);
}

THUMB void __cmd_message1_self_closing::execute()
{
    count_++;
}

THUMB int __cmd_message1_self_closing::isEnd()
{
    if (count_ >= countFrame_) {
        data_020ed1bc.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_020ed1bc.close();
        cmn::GameManager::getSingleton()->playerManager_->setLock(0);
        return true;
    }
    return false;
}

THUMB void __cmd_speak_to_player_self_closing::initialize(char* scriptParam)
{
    PARAM_SPEAK_TO_PLAYER_SELF_CLOSING* param = (PARAM_SPEAK_TO_PLAYER_SELF_CLOSING*)scriptParam;
    count_ = 0;
    countFrame_ = param->frame;
    int ctrl = getPlacementCtrlId();
    if (getObjectCount() > ctrl) {
        if (data_0210bb94.unkfunc_02058114(0xc) != 0) {
            cmn::g_talkSound.setVoice(TownCharacterManager::getSingleton()->getCharaIndex(ctrl));
        }
    } else {
        cmn::g_talkSound.setVoice(0);
        ctrl = -1;
    }
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    cmn::g_talkSound.setMessageSound(1, ctrl);
    data_020ed1bc.openMessageForTALK();
    data_020ed1bc.addMessage(param->message);
    if (!g_HengeNoTsue.isMonster()) {
        cmn::PartyTalk::getSingleton()->setPreMessageNo(param->message);
    }
    cmn::GameManager::getSingleton()->playerManager_->setLock(1);
}

THUMB void __cmd_speak_to_player_self_closing::execute()
{
    count_++;
}

THUMB int __cmd_speak_to_player_self_closing::isEnd()
{
    menu::MenuBase::MENUBASE_STAT stat = data_020ed1bc.stat_;
    if (stat == menu::MenuBase::MENUBASE_STAT_OK || stat == menu::MenuBase::MENUBASE_STAT_CANCEL || count_ >= countFrame_) {
        data_020ed1bc.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_020ed1bc.close();
        cmn::GameManager::getSingleton()->playerManager_->setLock(0);
        return true;
    }
    return false;
}

THUMB void __cmd_menu_save::initialize(char* scriptParam)
{
    PARAM_MENU_SAVE* param = (PARAM_MENU_SAVE*)scriptParam;
    waitFlag_ = 0;
    int ctrl = getPlacementCtrlId();
    if (data_0210bb94.unkfunc_02058114(0xc) == 1) {
        TownWindowSystem::getSingleton()->changeShopMenuPhase(MaterielMenu_WINDOW_MANAGER::MENU_SAVE);
    } else {
        MaterielMenu_WINDOW_MANAGER::getSingleton()->openMaterielWindow(MaterielMenu_WINDOW_MANAGER::MENU_SAVE);
    }
    MaterielMenu_WINDOW_MANAGER::getSingleton()->setSaveMenuType(param->type);
    g_cmnPartyInfo.partyTalk = ctrl;
    type_ = param->type;
    if (param->type == 2) {
        status::g_Party.clear();
        status::g_Party.setNormalMode();
        for (int i = 0; i < 10; i++) {
            status::g_Party.add(g_Stage.lastParty_[i]);
        }
        status::g_Story.setChapter(6);
    }
}

THUMB int __cmd_menu_save::isEnd()
{
    if (data_0210bb94.unkfunc_02058114(0xc) == 1) {
        if (!TownWindowSystem::getSingleton()->isShopMenu() && !waitFlag_) {
            waitFlag_ = 1;
            return false;
        }
        if (!TownWindowSystem::getSingleton()->isShopMenu() && waitFlag_) {
            if (type_ == 0) {
                const char* name = "zaout";
            g_Global.setMapName(name);
            }
            return true;
        }
    } else if (MaterielMenu_WINDOW_MANAGER::getSingleton()->endWindow_) {
        if (type_ == 0) {
            const char* name = "zaout";
            g_Global.setMapName(name);
        }
        return true;
    }
    return false;
}

THUMB void __cmd_player_effect_mark::initialize(char* scriptParam)
{
    PARAM_PLAYER_EFFECT_MARK* param = (PARAM_PLAYER_EFFECT_MARK*)scriptParam;
    TownPlayerManager::getSingleton()->rizeupSet(param->mark);
}

THUMB int __cmd_player_effect_mark::isEnd()
{
    return TownPlayerManager::getSingleton()->rizeupEnd();
}

THUMB void __cmd_character_palette::initialize(char* scriptParam)
{
    PARAM_CHARACTER_PALETTE* param = (PARAM_CHARACTER_PALETTE*)scriptParam;
    int ctrl = getPlacementCtrlId();
    dss::Fix32Vector3 rgb;
    rgb.vx.value = param->r;
    rgb.vy.value = param->g;
    rgb.vz.value = param->b;
    TownCharacterManager::getSingleton()->setPaletteRate(ctrl, rgb.vx, rgb.vy, rgb.vz);
    rgb.vx.value = param->endR;
    rgb.vy.value = param->endG;
    rgb.vz.value = param->endB;
    TownCharacterManager::getSingleton()->setChangePalletRate(ctrl, rgb, param->frame);
}

THUMB int __cmd_character_palette::isEnd()
{
    int ctrl = getPlacementCtrlId();
    return TownCharacterManager::getSingleton()->isEndChangePalletRate(ctrl);
}

THUMB void __cmd_music_volume::initialize(char* scriptParam)
{
    PARAM_MUSIC_VOLUME* param = (PARAM_MUSIC_VOLUME*)scriptParam;
    m_end_vol = param->volume * 0x7f / 100;
    func_02008ea0(0, m_end_vol, 0x7f);
    m_start_vol = func_02055a4c();
    m_frame = param->frame;
    m_add = (m_end_vol - m_start_vol) / m_frame;
    m_counter = 0;
}

THUMB int __cmd_music_volume::isEnd()
{
    if (m_counter >= m_frame) {
        func_02055a34(m_end_vol);
        return true;
    }
    int vol = m_start_vol + m_add.value * m_counter / 0x1000;
    func_02008ea0(0, vol, 0x7f);
    func_02055a34(vol);
    m_counter++;
    return false;
}

THUMB void __cmd_play_music::initialize(char* scriptParam)
{
    PARAM_PLAY_MUSIC* param = (PARAM_PLAY_MUSIC*)scriptParam;
    preMusicNo_ = SoundManager::bgmIndex_;
    musicNo_ = param->musicNo;
    playTime_ = param->frame + STOP_WAIT_COUNT;
    flag_ = param->flag;
    soundCount_ = 0;
    playEnd_ = 0;
    SoundManager::stopBgm(0);
}

THUMB void __cmd_play_music::execute()
{
    if (soundCount_ == -1) {
        playEnd_ = 1;
    }
    if (soundCount_ == STOP_WAIT_COUNT) {
        SoundManager::play(musicNo_, 0xf);
        soundCount_++;
    } else if (soundCount_ < playTime_) {
        soundCount_++;
    } else if (soundCount_ == playTime_) {
        SoundManager::stopBgm(0);
        soundCount_++;
    } else if (soundCount_ > playTime_) {
        if (flag_ == 0) {
            SoundManager::play(preMusicNo_, 0xf);
        }
        soundCount_ = -1;
    }
}

THUMB int __cmd_play_music::isEnd()
{
    return playEnd_;
}

THUMB void __cmd_key_wait_type_b::initialize(char* scriptParam)
{
}

THUMB void __cmd_key_wait_type_b::execute()
{
}

THUMB int __cmd_key_wait_type_b::isEnd()
{
    return cmn::g_CommonCounterInfo.checkBottun();
}

THUMB void __cmd_event_chapter_title::initialize(char* scriptParam)
{
    PARAM_EVENT_CHAPTER_TITLE* param = (PARAM_EVENT_CHAPTER_TITLE*)scriptParam;
    MaterielMenu_WINDOW_MANAGER::getSingleton()->setChapterTitleInfo(param->chapter, param->flag);
    MaterielMenu_WINDOW_MANAGER::getSingleton()->openMaterielWindow(MaterielMenu_WINDOW_MANAGER::MENU_EXTRA_CHAPTER_TITLE);
    int type = param->chapter;
    if (type != 0 || param->flag != 1) {
        cmn::CommonChapterTitle::getSingleton()->setup(type, param->flag);
    }
}

THUMB int __cmd_event_chapter_title::isEnd()
{
    if (MaterielMenu_WINDOW_MANAGER::getSingleton()->chapterEnd_) {
        cmn::CommonChapterTitle::getSingleton()->cleanup();
        MaterielMenu_WINDOW_MANAGER::getSingleton()->chapterEnd_ = 0;
    }
    if (MaterielMenu_WINDOW_MANAGER::getSingleton()->endWindow_) {
        return true;
    }
    return false;
}
