#include "main/cmn/TalkSoundManager.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/ExcelParam.hpp"

const CharaVoiceCount charaVoiceCount_ = { 0xd9, 0x1a };  // 0x020b614c


ARM void cmn::TalkSoundManager::setup()
{
  this->index_ = 0;
  this->orderDataCount_ = 0;
  return;
}

ARM void cmn::TalkSoundManager::setVoice(int charaNo)
{
  this->charaNo_ = charaNo;
  return;
}

ARM void cmn::TalkSoundManager::setMessageSound(int count, int index)
{
    int order[33];

    getDefaultMessageSound();
    func_02056358();

    if (orderDataCount_ > 0) {
        int sound;
        int i = 0;
        if (count > 0) {
            do {
                sound = getOrderMessageSound();
                if (sound != MESSAGESOUND_STOP) {
                    order[i] = sound;
                } else {
                    order[i] = MESSAGESOUND_STOP;
                    func_02056384(order);
                    return;
                }
                i++;
            } while (i < count);
        }
        order[count] = MESSAGESOUND_STOP;
        func_02056384(order);
        return;
    }

    if (index == -1) {
        return;
    }
    if (func_ov000_0212ebc8(func_ov000_02137f2c()->data[index]) != 1) {
        return;
    }
    func_ov000_0212ebdc(func_ov000_02137f2c()->data[index]);
    func_02056358();
}

ARM cmn::TalkSoundManager::MESSAGESOUND cmn::TalkSoundManager::getOrderMessageSound()
{
    int idx = index_;
    MESSAGESOUND sound = MESSAGESOUND_STOP;

    if (idx < orderDataCount_) {
        sound = orderSound_[idx];
        idx++;
        index_ = idx;
        if (idx >= orderDataCount_) {
            index_ = 0;
            orderDataCount_ = 0;
        }
    }
    return sound;
}


ARM cmn::TalkSoundManager::MESSAGESOUND cmn::TalkSoundManager::getDefaultMessageSound()
{
    MESSAGESOUND sound = MESSAGESOUND_NONE;
    param::CharaVoice* voice = status::excelParam.getCharaVoice();
    int count = charaVoiceCount_.count;

    for (int i = 0; i < count; i++)
    {
        if (charaNo_ != voice[i].index)
            continue;

        unsigned int id = voice[i].voice;
        switch (id)
        {
        case 0x12D: sound = MESSAGESOUND_HIGH;   break;
        case 0x12E: sound = MESSAGESOUND_MIDDLE; break;
        case 0x12F: sound = MESSAGESOUND_LOW;    break;
        }
    }
    return sound;
}

ARM void cmn::TalkSoundManager::setOrderMessage(MESSAGESOUND sound)
{
    orderSound_[orderDataCount_] = sound;
    orderDataCount_++;
}

ARM cmn::TalkSoundManager::MESSAGESOUND cmn::TalkSoundManager::getCharacterVoice(int charaNo)
{
    int saved = charaNo_;
    charaNo_ = func_ov000_02138eb8(func_ov000_02137f2c(), charaNo);
    MESSAGESOUND sound = getDefaultMessageSound();
    charaNo_ = saved;
    return sound;
}

ARM cmn::TalkSoundManager::MESSAGESOUND cmn::TalkSoundManager::getPlayerVoice()
{
    status::g_Party.setDisplayMode();
    int count = status::g_Party.getCount();

    for (int i = 0; i < count; i++)
    {
        bool alive = !status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath();
        if (alive == 1)
        {
            status::PlayerStatus* p = status::g_Party.getPlayerStatus(i);
            int charaNo = charaNo_;
            charaNo_ = p->haveStatusInfo_.haveStatus_.charaIndex_;;
            MESSAGESOUND sound = getDefaultMessageSound();
            charaNo_ = charaNo;
            return sound;
        }
    }
    return MESSAGESOUND_MIDDLE;
}


ARM cmn::TalkSoundManager::MESSAGESOUND cmn::TalkSoundManager::getPlayerVoice(int charaNo)
{
    status::g_Party.setDisplayMode();
    int saved = charaNo_;
    charaNo_ = charaNo;
    MESSAGESOUND sound = getDefaultMessageSound();
    charaNo_ = saved;
    return sound;
}

ARM cmn::TalkSoundManager::MESSAGESOUND cmn::TalkSoundManager::getMostHeroicVoice()
{
    status::g_Party.setDisplayMode();
    int CarriageOutCount = status::g_Party.getCarriageOutCount();
    for (int i = 0; i < CarriageOutCount; i++)
    {
        bool alive = !status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath();
        if (alive == true)
        {
            int type = status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveStatus_.playerIndex_;
            if (type == 1 || type == 2)
            {
                status::PlayerStatus* p = status::g_Party.getPlayerStatus(i);
                int charaNo = charaNo_;
                charaNo_ = p->haveStatusInfo_.haveStatus_.charaIndex_;
                MESSAGESOUND sound = getDefaultMessageSound();
                charaNo_ = charaNo;
                return sound;
            }
        }
    }

    status::g_Party.setPlayerMode();
    CarriageOutCount = status::g_Party.getCarriageOutCount();
    for (int i = 0; i < CarriageOutCount; i++)
    {
        bool alive = !status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath();
        if (alive == true)
        {
            status::PlayerStatus* p = status::g_Party.getPlayerStatus(i);
            int charaNo = charaNo_;
            charaNo_ = p->haveStatusInfo_.haveStatus_.charaIndex_;
            MESSAGESOUND sound = getDefaultMessageSound();
            charaNo_ = charaNo;
            return sound;
        }
    }

    return getPlayerVoice();
}