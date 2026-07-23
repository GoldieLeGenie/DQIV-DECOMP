#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/CharacterStatus.hpp"
#include "main/status/MonsterStatus.hpp"

namespace status {
    struct BaseActionValue {
        int unk_00;         
        int unk_04;
        int unk_08;
        int unk_0c;
    };   
    struct BaseActionStatus {
        enum MonsterDrop {
            GoldExp = 0x1,
            Gold    = 0x2,
        };
        int baikirutoMessFlag_;                // 0x00  
        int path1MessFlag_;
        int sleepMessFlag_;
        int confusionMessFlag_;
        int mahokantaMessFlag_;
        int execCallFriend_;
        int eventBattle_;          // 0x18
        int work_;                // 0x1c
        int flag_;                 // 0x20
        int monsterEffectValue_;   // 0x24
        int playerEffectValue_;    // 0x28
        int effectValue_;          // 0x2c
        int actionIndex_;          // 0x30
        static void setEffectValue(int effect, int player, int monster);
        static int getEffectValue(status::CharacterStatus *target);
        static int actionTypeDamage(status::CharacterStatus *target);
        static void actionTypeInstantDeath(status::CharacterStatus *target);
        static int actionTypeRecovery(status::CharacterStatus *target);
        static int actionTypeAddMP(status::CharacterStatus *target);
        static int actionTypeSubMP(status::CharacterStatus *actor,status::CharacterStatus *target);
        static void actionTypeBaikiruto(status::CharacterStatus *target);
        static void actionTypeMahokanta(status::CharacterStatus *target);
        static void actionTypeMahosute(status::CharacterStatus *target);
        static void actionTypeMahoton(status::CharacterStatus *target);
        static int actionTypeSleep(status::CharacterStatus *target);
        static void actionTypePoison(status::CharacterStatus *target);
        static int actionTypeSpazz(status::CharacterStatus *target);
        static int actionTypeDefenceChange(status::CharacterStatus *target);
        static int abs(int value);
        static int actionTypeStatusClear(status::CharacterStatus *target);
        static int actionTypeAgilityChange(status::CharacterStatus *target);
        static void actionTypeAstoron(status::CharacterStatus *target);
        static void actionTypeConfusion(status::CharacterStatus *target);
        static void actionTypeDragoram(status::CharacterStatus *target);
        static void actionTypeManusa(status::CharacterStatus *target);
        static void actionTypeFubaha(status::CharacterStatus *target);
        static void actionTypeFeather(status::CharacterStatus *target);
        static int actionTypeLight(status::CharacterStatus *target);
        static void actionTypeDefence(status::CharacterStatus *target);
        static void actionTypePowerSave(status::CharacterStatus *target);
        static int  actionTypeRebirth(status::CharacterStatus *target);
        static int actionTypeMosyas(status::CharacterStatus *actor,status::CharacterStatus *target);
        static int actionTypeNone(status::CharacterStatus *actor, status::CharacterStatus *target);
        static void characterClearOut(status::CharacterStatus *chara, MonsterDrop drop);
        static void setMonsterChange(int flag);
        static bool isMonsterChange();
         
    };
}
extern status::BaseActionStatus BaseActionStatus_;
extern status::BaseActionValue BaseActionValue_;   // data_020eeccc

struct BattleMonsterDrawEntry {
    char pad_[0xD40];
    int  screenPosition_;                 // 0xD40
    int  screenWidth_;                    // 0xD44
    char pad2_[0x244];
};
struct BattleMonsterDraw2 {
    BattleMonsterDrawEntry monsters_[12];  // 
    char pad_[0x1B8];
    int  spacePos_;                        // 
    int  spaceWidth_;                      // 
};
struct BattleActorManager2 {
    char pad_[0x66B8];
    short deathLog_;                       // 0x66B8
};
struct BattleMonsterDrawParam {
    int unk_00;        // +0
    int unk_04;        // +4
    dss::fx32 vz_;     // +8
    dss::fx32 vy_;     // +0xC
    dss::fx32 vx_;     // +0x10
    int unk_14;        // +0x14
};
extern BattleMonsterDrawParam data_020beb98;

extern "C" BattleActorManager2* func_ov003_02126ee8(void);
extern "C" void func_0205b2f0(void* obj, dss::Vector3int pos);   // DSSACharacter::setPositionInt
extern "C" void func_0200ad08(Encount*);         // self = func_0200a6c8()
extern "C" void func_0200ad18(Encount*, int);    // "disableEncount" (a3/cf)
extern "C" void func_0200ad28(Encount*, int);    // 
extern "C" void func_0200ad38(Encount*, int);    // "easyEncount" (d7)
extern "C" int  func_ov003_02123a88(status::CharacterStatus*);   // MonsterStatus::getHaveDropItem
