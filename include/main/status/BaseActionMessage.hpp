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
    };
    extern BaseActionMessageData messageData_; //data_020eecc0
    extern SplitMsgInfo splitMsgInfo_;   // data_020b5d6c

}

extern "C" int func_02058114(void* self, int flag);
extern "C" int func_ov003_0212e37c(void* monsterParty);              /* MonsterParty::getCount */
extern "C" status::CharacterStatus* func_ov003_0212e5c0(void* monsterParty, int index);  /* MonsterParty::getMonsterStatus */
extern "C" void func_ov003_0212eab0(void* monsterParty, int index);  /* MonsterParty::checkDropItem */


extern int data_ov003_0216639c[];   /* g_MonsterParty */
extern "C" int func_0202d2dc(void* self, status::CharacterStatus* actor, status::CharacterStatus* target, int message);  
extern "C" int func_0202d1c0(void* self, int index);   /* BaseActionMessage::getExecMessage(int) */
extern "C" int func_0202d51c(void* self, void* target, int index);   /* getMessagePlayerOne */
extern "C" int func_0202d570(void* self, void* target, int index);   /* getMessagePlayerMany */
extern "C" int func_0202d5c4(void* self, void* target, int index);   /* getMessageMonster1G */
extern "C" int func_0202d604(void* self, void* target, int index);   /* getMessageMonster2G */
extern "C" int func_0202d644(void* self, void* target, int index);   /* getMessageMonsterD */
extern "C" int func_0202d684(void* self, void* target, int index);   /* getMessageTargetNoSleepNoSpazz */
extern "C" int func_0202d6d4(void* self, void* target, int index);   /* getMessageTargetSleepSpazz */
extern "C" int func_0202d720(void* self, void* target, int index);   /* getMessageTargetAlive */
extern "C" int func_0202d754(void* self, void* target, int index);   /* getMessageTargetDead */
extern "C" int func_0202d788(void* self, void* target, int index);   /* getMessageTargetAstoron */
extern "C" int func_0202d7c0(void* self, void* target, int index);   /* getMessageTargetNoMosyasu */
extern "C" int func_0202d7f8(void* self, void* target, int index);   /* getMessageTargetNoSplitNoJouk */
extern "C" int func_0202d840(void* self, void* target, int index);   /* getMessageTargetSplit */
extern "C" int func_0202d87c(void* self, void* target, int index);   /* getMessageTargetJouk */
extern "C" int func_0202d8b8(void* self, void* actor, int index);    /* getMessageWeaponEquipment */
extern "C" int func_0202d8fc(void* self, void* actor, int index);    /* getMessageNoWeaponEquipment */
extern "C" int func_0202d940(void* self, void* actor, int index);    /* getMessageActorMale */
extern "C" int func_0202d970(void* self, void* actor, int index);    /* getMessageActorFemale */
extern "C" int func_0202d9a0(void* self, void* actor, int index);    /* getMessageNoUse */
extern "C" int func_0202da50(void* self, int index);                 /* getMessageRulaOff */
extern "C" int func_0202dadc(void* self, int index);                 /* getMessageRiremitoOff */
extern "C" int func_0202db20(void* self, int index);                 /* getMessageVainTimeZone */
extern "C" int func_0202db8c(void* self, int index);                 /* getMessageItemInBox */
extern "C" int func_0202dbf0(void* self, int index);
extern "C" int func_0202dc54(void* self, int index);
extern "C" int func_0202dcb8(void* self, int index);
extern "C" int func_0202dd1c(void* self, int index);
extern "C" int func_0202dd80(void* self, int index);
extern "C" int func_0202dde4(void* self, int index);
extern "C" int func_0202de48(void* self, int index);
extern "C" int func_0202deac(void* self, int index);
extern "C" int func_0202e078(void* self, int index);
extern "C" int func_0202df18(void* self, int index);
extern "C" int func_0202df70(void* self, int index);
extern "C" int func_0202dfc8(void* self, int index);
extern "C" int func_0202e020(void* self, int index);