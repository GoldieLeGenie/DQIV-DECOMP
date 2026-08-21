#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "ov003/btl/BattleActor2.hpp"

namespace btl {
    struct BattleActorManager2 {
        enum EventType
            {                                      
            EventNone    = 0x0,
            Velorinman   = 0x1,
            EvilPriest   = 0x2,
            DeathPissaro = 0x3,
            End          = 0x4,
        };
        BattleActor2 actor_[20];
        int actorCount_;
        int turnCount_;
        int escape_;
        int escapeSuccess_;
        int escapeCount_;
        int eventFlag_;
        EventType eventType_;
        int eventTile_;
        int eventEnd_;
        FirstAttack firstAttack_;
        int monsterDeathCount_;        // 0x6688
        int monsterEscapeCount_;       // 0x668c
        int monsterDisappearCount_;    // 0x6690
        int winningStatus_;
        short deathLog_;
        BattleActorManager2();
        ~BattleActorManager2();
        static BattleActorManager2* getSingleton();
        void initialize();
        void selectActor();
        void selectActorPlayer();
        void selectActorMonster();
        BattleActor2* add(status::CharacterStatus* chara);
        void setActorOrder();
        void setActorAction();
        int getActorCount();
        BattleActor2*  getBattleActor(int index);
        void execStartOfRound();
        void execEndOfRound();
        void retireActor();
        void checkDeathMonster();
        void clearDeadMonster(int all);
        void execStartOfBattle();
        void execEndOfBattle();
        int isBattleEnd();
        void execMonsterDeath(int index);
        void execMonsterDeathForItem();
        int isActionEnable();
        void setFirstAttack(FirstAttack firstAttack);
        FirstAttack getFirstAttack();
        void clearFirstAttack();
        void setEscape(int flag);
        void setEventBattle(int flag, int tile);
        int isImpEventBattle();
        void addMonsterDeathCount(int count);
        int getMonsterDeathCount();
        void addMonsterEscapeCount(int count);
        int getMonsterEscapeCount();
        void addMonsterDisappearCount(int count);
        int getMonsterDisappearCount();
        void setMegazaruRing(status::UseActionParam* useActionParam);
    };
}
extern status::PlayerStatus dummyPlayer_;

extern "C" void func_ov003_02126fbc(btl::BattleActorManager2* thisptr);
extern "C" void func_ov003_021270e4(btl::BattleActorManager2* thisptr);
extern "C" void func_ov003_0212859c(btl::BattleActorManager2* thisptr);
extern "C" int func_ov003_02128570(btl::BattleActorManager2*);
extern "C" void func_ov003_02127338(btl::BattleActor2* a, btl::BattleActor2* b);
extern "C" void func_ov003_02127df0(btl::BattleActorManager2* mgr);
extern "C" void func_ov003_02128388(btl::BattleActorManager2* mgr);
extern "C" void func_ov003_02128920(btl::BattleActorManager2* mgr, int n);   // ~ addMonsterEscapeCount
extern "C" void func_ov003_0212897c(btl::BattleActorManager2* mgr, int n);   // ~ addMonsterDisappearCount
extern "C" void func_ov003_021288c4(btl::BattleActorManager2* mgr, int n);   // ~ addMonsterDeathCount
extern "C" void func_ov003_021281f4(btl::BattleActorManager2* mgr, int index);
extern "C" void func_ov003_02127f7c(btl::BattleActorManager2* mgr, int n);
extern "C" void func_02039460(int index);
extern "C" void func_ov037_0218a7f0(int index);