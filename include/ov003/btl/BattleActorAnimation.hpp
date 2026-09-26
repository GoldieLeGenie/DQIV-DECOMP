#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/sound/SoundManager.hpp"
#include "main/status/UseActionParam.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"


namespace btl {
    struct BattleActorAnimation
    {
        static int setExecAnimation(status::UseActionParam* useActionParam);
        static void setExecAnimationMonster(status::CharacterStatus* actor);
        static int checkExecAnimation(status::UseActionParam* useActionParam);
        static int checkNormalAnimation(status::UseActionParam* useActionParam);
        static void setResultAnimation(status::UseActionParam* useActionParam, int currentTarget);
        static void setPlayerSE(status::UseActionParam* useActionParam, int currentTarget);
        static void setCommonSE(status::UseActionParam* useActionParam, int currentTarget);
        static void setCommonSEFromAction(status::UseActionParam* useActionParam);
        static int checkResultAnimation(status::UseActionParam* useActionParam, int currentTarget);
        static void setResultAnimationMonster(status::CharacterStatus* actor, status::CharacterStatus* target, int currentTarget);
        static void setAfterAnimation(status::CharacterStatus* actor, status::CharacterStatus* target, int targetCount, int currentIndex);
        static void setAfterAnimation2(status::CharacterStatus* actor, status::CharacterStatus* target);
        static void setMosyasChange(status::CharacterStatus* actor);
        static void setMosyasReverse(status::CharacterStatus* actor);
        static void setCallFriend(status::CharacterStatus* chara);
        static void setCallFriend();
        static void gattaiSlimeStart(status::CharacterStatus* actor, int actionIndex);
        static void gattaiSlime(status::CharacterStatus* actor, int actionIndex);
        static void setMonsterChangeSetup(status::CharacterStatus* actor);
        static int isMonsterChangeSetupEnd();
        static void setMonsterChange(status::CharacterStatus* actor);
        static void setMonstersDisappear(status::UseActionParam* useActionParam);
    };

}
extern short data_020c04f4[310][5]; //MonsterTaiData
extern int monsterChangeCount;
extern "C" int  func_ov003_021293c0(status::UseActionParam* uap);
extern "C" int  func_ov003_021293e4(status::UseActionParam* uap);
extern "C" void func_ov003_02121970(BattleMonster*, int, int);
extern "C" int  func_0208995c(void);
extern "C" void func_ov003_02121c08(BattleMonster*);
extern "C" void func_ov003_0212a028(status::CharacterStatus* actor);
extern "C" void func_ov003_021295e4(status::UseActionParam* uap, int idx);
extern "C" int  func_ov003_021249e4();
extern "C" void* func_02057128(int idx);
extern "C" void func_02050e88(int a, int b, int c, int d);
extern "C" void func_ov003_0212976c(status::UseActionParam* uap, int idx);
extern "C" void func_ov003_021299d0(status::CharacterStatus* actor, status::CharacterStatus* target, int idx);
extern "C" void func_ov003_02129ca8(status::CharacterStatus* actor);
extern "C" void func_ov003_0212a174(status::UseActionParam* uap);
extern "C" int func_ov003_0212993c(status::UseActionParam* useActionParam, int currentTarget);
extern "C" void func_ov003_02129810(status::UseActionParam* useActionParam);
extern "C" void func_ov003_02129dbc(status::CharacterStatus* chara);  
extern "C" void func_ov003_02129dec();                                  
extern "C" void func_ov003_0212a084();
extern "C" dss::Fx32Vector3* func_02083648(BattleMonster* monster);          
extern "C" void func_ov003_0212243c(BattleMonsterDraw2* mgr, int ctrlId, int anim, int loop);
extern "C" void func_ov003_02121af4(BattleMonster* monster);
extern "C" void func_ov003_02121b58(BattleMonster* monster);
extern "C" void func_0204d0c4(int);
extern "C" void func_0204d0dc(int);