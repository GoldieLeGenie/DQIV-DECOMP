#pragma once

struct TownFurnitureManager;
#include <globaldefs.h>
#include "main/global/GlobalDQ4.hpp"
#include "GameInfo.hpp"
#include "main/status/CharacterStatus.hpp"
#include "ov003/status/MonsterParty.hpp"

namespace status {
    struct CallMonsterInfo {
        char pad_0x00[0x08];              // 0x00-0x07 
        int metalSlimeBeforeIndex_;       // 0x08
        int metalSlimeCount_;             // 0x0c
        int callMonsterFlag_;             // 0x10 — isCallMonster, setCallMonster
        int mosyasIndex_;                 // 0x14
        int callMonsterCount_;            // 0x18 — addCallMonster, initCallMonster
        int callMonsterIndex_;   // 0x1c — callDifferentMonster, getCallDifferentMonsterIndex
    };
    int getUsuallyAttackEffectValue(status::CharacterStatus* actor, status::CharacterStatus* target);
    int getKaishinAttackEffectValue(status::CharacterStatus* actor, status::CharacterStatus* target);
    int getTsukon1AttackEffectValue(status::CharacterStatus* actor);
    int getTsukon2AttackEffectValue(status::CharacterStatus* actor);
    int getRandomVariation(int value, int under, int over);
    int execRula();
    int execRiremito();
    bool execImpas();
    int execLanaruta();
    void initCallMonster();
    void addCallMonster(CharacterStatus* status);
    int getCallMonsterCount();
    status::CharacterStatus* getCallMonsterStatus(int index);
    void parupunteMetalSlime3(int actionIndex);
    void setMosyasIndex(int monsterIndex);
    int getMosyasIndex();
    void setCallMonster(int flag);
    int isCallMonster();
    int callDifferentMonster(int index, int monsterIndex);
    int getCallDifferentMonsterIndex();
    int getParupunteMetalSlimeBeforeIndex();
    void parupunteMetalSlime1();
    void parupunteMetalSlime2(int actionIndex);

}




extern status::CallMonsterInfo CallMonster; //data_020d06c8
extern status::CharacterStatus* callMonsterStatus_[12];  //data_020d06e8

extern "C" int   func_02058114(void* global, int partId);       // checkPartId (g_Global2.m_part_id == partId) ?                 
struct TownPlayerManager;
extern "C" TownPlayerManager* func_ov000_02132a90();                        // TownPlayerManager::getInstance → &m_singleton
extern "C" int   func_ov000_02135358(void* self);              // TownPlayerManager::getInpasMapObj
extern "C" int   func_ov000_021232d0(void* self);              // TownFurnitureManager::checkNothing
extern "C" TownFurnitureManager* func_ov000_02122ad8();                        // TownFurnitureManager::getInstance → &m_singleton
extern "C" int   func_ov000_02123144(void* self, int mapObj);  // TownFurnitureManager::checkCoffer
namespace btl { struct BattleMonsterDraw2; }
extern "C" btl::BattleMonsterDraw2* func_ov000_02121d04();          // BattleMonsterDraw::getInstance
extern "C" int   func_ov003_0212e37c(void*);                   // MonsterParty::getCount
extern "C" int   func_ov003_0212e428(void*, int);              // MonsterParty::getMonsterCountInGroup(group)
extern "C" int   func_ov003_0212e464(void*, int);              // MonsterParty::getMonsterCountInGroupExist(group)
extern "C" int   func_ov003_0212e988(void*, int, int, int);    // MonsterPartyWithDraw::add(group, monsterIndex, flag) → index
extern "C" int   func_ov003_0212e6c4(void*, int);              // MonsterParty::getMonsterGroupForMonsterIndex(monsterIndex)
extern "C" int   func_ov003_0212e7bc(void*);   // MonsterParty::getMonsterCallIndex
extern "C" int   func_ov003_0212e5fc(void*, int);   // MonsterParty::getCtrlId
extern "C" void  func_ov003_0212ea84(void*, int);   // MonsterPartyWithDraw::del(party, ctrlId)
