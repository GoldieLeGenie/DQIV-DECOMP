#pragma once
#include "globaldefs.h"
#include "main/param/Param.hpp"
#include "GameInfo.hpp"
#include "ov000/TownCharacterManager.hpp"

namespace cmn
{
    struct TalkSoundManager
    {
        enum MESSAGESOUND{
            MESSAGESOUND_NONE=48,
            MESSAGESOUND_HIGH=49,
            MESSAGESOUND_MIDDLE=50,
            MESSAGESOUND_LOW=51,
            MESSAGESOUND_STOP=57
        };
        MESSAGESOUND orderSound_[33];
        int orderDataCount_;
        int index_;
        int charaNo_;
        void setup();
        void setVoice(int charaNo);
        void setMessageSound(int count, int index);
        MESSAGESOUND getOrderMessageSound();
        MESSAGESOUND getDefaultMessageSound();
        void setOrderMessage(MESSAGESOUND sound);
        MESSAGESOUND getCharacterVoice(int charaNo);
        MESSAGESOUND getPlayerVoice();
        MESSAGESOUND getPlayerVoice(int charaNo);
        MESSAGESOUND getMostHeroicVoice();
    };   
}

struct CharaVoiceCount {
    int count;
    int unk;
};

extern const CharaVoiceCount charaVoiceCount_; //data_020b614c


extern "C" {
    void func_02039874(void);                        // getPlayerVoice
    void func_02056358(int sound);                   // ui_MsgSndSet
    int  func_02039838(cmn::TalkSoundManager* self); //
    void func_02056384(int* order);                  // 
    int  func_ov000_0212ebc8(TownCharacter* chara);
    int  func_ov000_0212ebdc(TownCharacter* chara);
    int func_ov000_02138eb8(TownCharacterManager* mgr, int charaNo);

}