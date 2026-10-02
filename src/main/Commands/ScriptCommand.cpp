#include "main/Commands/ScriptCommand.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/cmn/TalkSoundManager.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/cmn/PartyTalk.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/sound/SoundManager.hpp"
#include "main/status/GameFlag.hpp"
#include "main/script/ScriptBaseCommand.hpp"
#include "ov000/Commands/TownCommand.hpp"
#include "ov000/town/TownStageManager.hpp"
#include "ov000/town/TownCharacterManager.hpp"

ARM void __cmd_count::initialize(char* scriptParam)
{
    PARAM_COUNT* param = (PARAM_COUNT*)scriptParam;
    start_ = param->start;
    end_ = param->end;
    add_ = param->add;
    count_ = start_;
}

ARM void __cmd_count::execute()
{
    count_ += add_;
    func_0207e88c(data_02116ce0, 0xe, 0x28, "%04d", count_);
}

ARM int __cmd_count::isEnd()
{
    if (count_ == end_) {
        return true;
    }
    return false;
}

ARM void __cmd_wait::initialize(char* scriptParam)
{
    PARAM_WAIT* param = (PARAM_WAIT*)scriptParam;
    count_ = 0;
    countFrame_ = param->frame;
}

ARM void __cmd_wait::execute()
{
    count_++;
}

ARM int __cmd_wait::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

ARM void __cmd_map_animation_b::initialize(char* scriptParam)
{
    PARAM_MAP_ANIMATION_B* param = (PARAM_MAP_ANIMATION_B*)scriptParam;
    TownStageManager::getSingleton()->setObjectDraw(param->target, param->animation, 1);
    m_target = param->target;
}

ARM int __cmd_map_animation_b::isEnd()
{
    return TownStageManager::getSingleton()->isCommonAnimationEnd(m_target) != false;
}

ARM void __cmd_character_action_tremble::initialize(char* scriptParam)
{
    PARAM_CHARACTER_ACTION_TREMBLE* param = (PARAM_CHARACTER_ACTION_TREMBLE*)scriptParam;
    TOWN_SCRIPT_DATA scriptData;
    dss::DssUtils::unkfunc_020882d4(&scriptData, 0, sizeof(scriptData));
    scriptData.frame = param->frame;
    scriptData.num[0] = param->dir;
    scriptData.num[1] = param->mode;
    scriptData.num[2] = param->sycle;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
}

ARM void __cmd_character_action_tremble::execute()
{
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->character_[ctrl]->execTremble();
}

ARM int __cmd_character_action_tremble::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd()) {
        return true;
    }
    return false;
}

ARM void __cmd_character_action_vanish::initialize(char* scriptParam)
{
    PARAM_CHARACTER_ACTION_VANISH* param = (PARAM_CHARACTER_ACTION_VANISH*)scriptParam;
    TOWN_SCRIPT_DATA scriptData;
    dss::DssUtils::unkfunc_020882d4(&scriptData, 0, sizeof(scriptData));
    scriptData.frame = param->frame;
    scriptData.num[0] = param->flash;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
}

ARM void __cmd_character_action_vanish::execute()
{
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->character_[ctrl]->execVanish();
}

ARM int __cmd_character_action_vanish::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd()) {
        return true;
    }
    return false;
}

ARM void __cmd_menu_yes_no::initialize(char* scriptParam)
{
    PARAM_MENU_YES_NO* param = (PARAM_MENU_YES_NO*)scriptParam;
    data_020ed1bc.setYesNo(param->position);
    type_ = param->type;
    index_ = param->index;
    position_ = param->position;
}

ARM int __cmd_menu_yes_no::isEnd()
{
    menu::MenuBase::MENUBASE_STAT stat = data_020ed1bc.stat_;
    if (stat == menu::MenuBase::MENUBASE_STAT_OK) {
        setFlag(true);
        return true;
    }
    if (stat == menu::MenuBase::MENUBASE_STAT_CANCEL) {
        setFlag(false);
        return true;
    }
    return false;
}

ARM void __cmd_menu_yes_no::setFlag(bool flag)
{
    switch (type_) {
        case 0:
            if (flag) {
                g_AreaFlag.set(index_);
            } else {
                g_AreaFlag.remove(index_);
            }
            break;
        case 1:
            if (flag) {
                g_LocalFlag.set(index_);
            } else {
                g_LocalFlag.remove(index_);
            }
            break;
        case 2:
            if (flag) {
                g_GlobalFlag.set(index_);
            } else {
                g_GlobalFlag.remove(index_);
            }
            break;
    }
}

ARM void __cmd_message_with_sound::initialize(char* scriptParam)
{
    PARAM_MESSAGE_WITH_SOUND* param = (PARAM_MESSAGE_WITH_SOUND*)scriptParam;
    preMusicNo_ = SoundManager::bgmIndex_;
    musicNo_ = param->sound;
    playTime_ = param->frame + STOP_WAIT_COUNT;
    lastMessage_ = 0;
    flag_ = param->flag;
    wait_ = param->automes;
    soundCount_ = 0;
    stopSound_ = 0;
    playEnd_ = 0;
    cmn::g_talkSound.setMessageSound(param->count, -1);
    if (!g_HengeNoTsue.isMonster()) {
        cmn::PartyTalk::getSingleton()->setPreMessageNo(param->message);
    }
    data_020ed1bc.openMessageForTALK();
    if (param->count == 1) {
        data_020ed1bc.addMessageNOWAIT(param->message);
        SoundManager::stopBgm(0);
    } else if (param->count == 2) {
        lastMessage_ = param->message + 1;
        data_020ed1bc.addMessageNOWAIT(param->message);
    } else if (param->count >= 3) {
        lastMessage_ = param->message + param->count - 1;
        data_020ed1bc.addMessageCount(param->message, param->count - 2);
        data_020ed1bc.addMessageNOWAIT(param->message + param->count - 2);
    }
    data_020ed1bc.addMessageWAITKEY();
}

ARM void __cmd_message_with_sound::execute()
{
    if (data_020ed1bc.isMessageWAITPROG()) {
        if (stopSound_ == 0 && lastMessage_ != 0) {
            stopSound_ = 1;
            data_020ed1bc.close();
            data_020ed1bc.clearMessageWAITPROG();
            SoundManager::stopBgm(0);
        } else if (soundCount_ == -1) {
            data_020ed1bc.clearMessageWAITPROG();
            if (wait_ == 0) {
                playEnd_ = 1;
            }
        } else if (soundCount_ == STOP_WAIT_COUNT) {
            SoundManager::playBgm(musicNo_, 0);
            soundCount_++;
        } else if (soundCount_ < playTime_) {
            soundCount_++;
        } else if (soundCount_ == playTime_) {
            SoundManager::stopBgm(0);
            soundCount_++;
        } else if (soundCount_ > playTime_) {
            if (flag_ == 0) {
                SoundManager::playBgm(preMusicNo_, 0);
            }
            soundCount_ = -1;
        }
    } else if (stopSound_ == 1) {
        if (!data_020ed1bc.isOpen()) {
            data_020ed1bc.openMessageForTALK();
            data_020ed1bc.addMessageNOWAIT(lastMessage_);
            data_020ed1bc.addMessageWAITKEY();
        }
    }
}

ARM int __cmd_message_with_sound::isEnd()
{
    if (wait_ == 1) {
        menu::MenuBase::MENUBASE_STAT stat = data_020ed1bc.stat_;
        if (stat == menu::MenuBase::MENUBASE_STAT_OK || stat == menu::MenuBase::MENUBASE_STAT_CANCEL) {
            data_020ed1bc.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
            data_020ed1bc.close();
            playEnd_ = 1;
            wait_ = 0;
        }
        return false;
    }
    if (playEnd_ == 1 && wait_ == 0) {
        data_020ed1bc.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_020ed1bc.close();
        return true;
    }
    return false;
}
