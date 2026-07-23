#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/param/Param.hpp"
#include "main/status/UseActionMessage.hpp" 
#include "main/status/CharacterStatus.hpp"


namespace status {
    struct BaseActionMessageData {
        param::SplitMsg* splitMsg_;
        param::ActionParam* actionParam_;   
        status::UseActionParam* useActionParam_;  

    };
    struct SplitMsgInfo {
        unsigned int count_;     
        unsigned int unk4_;
    };
    struct BaseActionMessage {
        unsigned int actionIndex_;     // 0x0
        int instantDeath_;    // 0x4
        int splitFlag_;       // 0x8
        BaseActionMessage();
        ~BaseActionMessage();
        void initialize();
        void setup(status::UseActionParam* useActionParam);
        void setExecMessage(status::UseActionMessage* message);
        void setExecMessageAdd(int actionIndex, status::UseActionMessage* message);
        void setResultMessage(status::UseActionMessage* message, int result0, int result1);
        void setExecMessage(UseActionMessage *useActionMessage,int mes0,int mes1,int mes2,int mes3);
        void setResultMessage(status::CharacterStatus* target, status::UseActionMessage* message);
        void setAddMessage(status::UseActionMessage* message, int msg0, int msg1);
        void setMessageNotEnoughMp(status::UseActionMessage* message);
        int getExecMessage(int index);
        int getResultMessage();
        int getResultSuccessMessage();
        int getResultFailedMessage();
        int setSplitMessage(status::CharacterStatus* actor, status::CharacterStatus* target, status::UseActionMessage* message, int actionIndex);
        int setSplitMessage(status::CharacterStatus* actor, status::CharacterStatus* target, int message);
        int getMessagePlayerOne(status::CharacterStatus* target, int splitIndex);
        int getMessagePlayerMany(status::CharacterStatus* target, int splitIndex);
        int getMessageMonster1G(status::CharacterStatus* target, int splitIndex);
        int getMessageMonster2G(status::CharacterStatus* target, int splitIndex);
        int getMessageMonsterD(status::CharacterStatus* target, int splitIndex);
        int getMessageTargetNoSleepNoSpazz(status::CharacterStatus* target, int splitIndex);
        int getMessageTargetSleepSpazz(status::CharacterStatus* target, int splitIndex);
        int getMessageTargetAlive(status::CharacterStatus* target, int splitIndex);
        int getMessageTargetDead(status::CharacterStatus* target, int splitIndex);
        int getMessageTargetAstoron(status::CharacterStatus* target, int splitIndex);
        int getMessageTargetNoMosyasu(status::CharacterStatus* target, int splitIndex);
        int getMessageTargetNoSplitNoJouk(status::CharacterStatus* target, int splitIndex);
        int getMessageTargetSplit(status::CharacterStatus* target, int splitIndex);
        int getMessageTargetJouk(status::CharacterStatus* target, int splitIndex);
        int getMessageWeaponEquipment(status::CharacterStatus* actor, int splitIndex);
        int getMessageNoWeaponEquipment(status::CharacterStatus* actor, int splitIndex);
        int getMessageActorMale(status::CharacterStatus* actor, int splitIndex);
        int getMessageActorFemale(status::CharacterStatus* actor, int splitIndex);
        int getMessageNoUse(status::CharacterStatus* target, int splitIndex);
        int getMessageRulaOff(int splitIndex);
        int getMessageRiremitoOff(int splitIndex);
        int getMessageVainTimeZone(int splitIndex);
        int getMessageItemInBox(int splitIndex);
        int getMessageMonsterInBox(int splitIndex);
        int getMessageGoldInBox(int splitIndex);
        int getMessageZeroInBox(int splitIndex);
        int getMessageItemInPot(int splitIndex);
        int getMessageMonsterInPot(int splitIndex);
        int getMessageGoldInPot(int splitIndex);
        int getMessageZeroInPot(int splitIndex);
        int getMessageNoTarget(int splitIndex);
        int getMessageNorthEast(int splitIndex);
        int getMessageSouthEast(int splitIndex);
        int getMessageNorthWest(int splitIndex);
        int getMessageSouthWest(int splitIndex);
        int getMessageZero(int splitIndex);
    };
    extern BaseActionMessageData messageData_; //data_020eecc0
    extern SplitMsgInfo splitMsgInfo_;   // data_020b5d6c

}

extern "C" int func_ov003_0212e6f8(void* battleObj);  
extern "C" int  func_02058114(void* global, int partId);
extern "C" int func_ov003_0212e37c(void* monsterParty);              /* MonsterParty::getCount */
extern "C" status::CharacterStatus* func_ov003_0212e5c0(void* monsterParty, int index);  /* MonsterParty::getMonsterStatus */
extern "C" void func_ov003_0212eab0(void* monsterParty, int index);  /* MonsterParty::checkDropItem */
extern int data_ov003_0216639c[];   /* g_MonsterParty */
extern "C" int  func_ov000_02123198(void* self, int pos);    // ???

//im lazy but need to be moved from here
struct TownMenuPlayerControl {
    unsigned char activeChara_;         // 0x00
    unsigned char activeCharaIndex_;    // 0x01
    short activeItem_;                  // 0x02
    char activeItemPage_;               // 0x04
    int activeFukuro_;                 // 0x05
    unsigned char targetChara_;         // 0x06
    short targetItem_;                  // 0x08
    char targetItemPage_;               // 0x0A
    int targetFukuro_;                 // 0x0B
    unsigned char actorIndex_;          // 0x0C
    unsigned char targetIndex_;         // 0x0D
    unsigned char activeCommand_;       // 0x0E
    unsigned char activeMagic_;         // 0x0F
    short activeMagicID_;               // 0x10
    unsigned char activeTactics_;       // 0x12
    char takanomeX_;                    // 0x1F 
    char takanomeY_;                    // 0x20 
    int initializeLock_;               // 0x21
};
extern "C" TownMenuPlayerControl* func_ov016_021755a0();   
