#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/CharacterStatus.hpp"

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
        int unk_04;
        int sleepMessFlag_;
        int confusionMessFlag_;
        int mahokantaMessFlag_;
        int unk_14;
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
        static void characterClearOut(status::CharacterStatus *chara, MonsterDrop drop);
        static void setMonsterChange(int flag);
        static bool isMonsterChange();
         
    };
}
extern status::BaseActionStatus BaseActionStatus_;
extern status::BaseActionValue BaseActionValue_;   // data_020eeccc
