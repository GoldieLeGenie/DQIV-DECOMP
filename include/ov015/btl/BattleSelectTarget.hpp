#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "ov003/btl/BattleSelectTargetParam.hpp"

namespace btl {
    struct BattleSelectTarget
    {
        static status::CharacterStatus * specialTarget_[15]; //data_ov015_0217ad84
        static void setTarget(status::UseActionParam* param, BattleSelectTargetParam::CallTargetSelect select);
        static int setTargetSet(status::UseActionParam* actionParam,btl::BattleSelectTargetParam::CallTargetSelect callTarget);
        static void printTarget(status::UseActionParam* param);
        static void setTargetPlayer(btl::BattleSelectTargetParam* param);
        static void setTargetPlayerWithDeath(btl::BattleSelectTargetParam* param);
        static void setTargetPlayerAll(btl::BattleSelectTargetParam* param);
        static void setTargetPlayerAllWithDeath(btl::BattleSelectTargetParam* param);
        static void setTargetMonster(btl::BattleSelectTargetParam* param);
        static void setTargetMonsterWithDeath(btl::BattleSelectTargetParam* param);
        static int setTargetBoth(int actionIndex, btl::BattleSelectTargetParam* param);
        static void setTargetStadiumEnemy(BattleSelectTargetParam* param);
        static int setTargetStadiumMine(BattleSelectTargetParam* param);
        static int setTargetNone(status::CharacterStatus* chara, BattleSelectTargetParam* param);
        static int setTargetMyself(status::CharacterStatus* chara, BattleSelectTargetParam* param);
        static int setTargetFriend(status::CharacterStatus* chara, int action, BattleSelectTargetParam* param);
        static int setTargetEnemy(status::CharacterStatus* chara, int action, BattleSelectTargetParam* param);
        static int setTargetOne(btl::BattleSelectTargetParam* param);
        static int setTargetGroup(btl::BattleSelectTargetParam* param);
        static int setTargetAll(btl::BattleSelectTargetParam* param);
        static int setTargetAllWithCarriage(btl::BattleSelectTargetParam* param);
        static void setTargetSpecial(status::UseActionParam* param);
        static void setTargetSpecialToPlayer(status::UseActionParam* param);
        static void setTargetSpecialToMonster(status::UseActionParam* param);
        static int setTargetSpecialToMonsterNoSpazz2(int targetCount);
        static int setTargetSpecialToMonsterNoConfusion2(int targetCount);
        static int setTargetSpecialToMonsterNearDeath2(int targetCount);
        static int setTargetSpecialToMonsterHpMin2(int targetCount);
        static void setTargetSpecialToParam2(status::UseActionParam* param);
        static void setTargetCrossFire(status::UseActionParam* param);
        static void setActorAction(status::UseActionParam* param,BattleSelectTargetParam::CallTargetSelect select);
    };
    
}

extern "C" {
    void func_ov003_0212bd5c(btl::BattleSelectTargetParam* param, int index, status::CharacterStatus* target);
    int func_ov015_02170a18(status::UseActionParam* param,btl::BattleSelectTargetParam::CallTargetSelect select);
    void func_ov015_02170da4(btl::BattleSelectTargetParam* param);   // 
    void func_ov015_02170bfc(btl::BattleSelectTargetParam* param);   //
    int func_0201d948(int* values, int count);                  // 
    int func_ov003_0212bd6c(btl::BattleSelectTargetParam* param, int group);
    status::CharacterStatus* func_ov003_0212bdb0(btl::BattleSelectTargetParam* param, int group, int index);
    int func_ov015_02175df8(btl::BattleSelectTargetParam* param);
    int func_ov015_02175ef0(btl::BattleSelectTargetParam* param);
    int func_ov015_02175fd0(btl::BattleSelectTargetParam* param);
    int func_ov015_021763ac();
    void func_ov003_0212bd18(btl::BattleSelectTargetParam* param);                                             // 
    status::CharacterStatus* func_ov003_0212bd64(btl::BattleSelectTargetParam* param, int index);              // 
    void func_ov003_0212be7c(btl::BattleSelectTargetParam* param, int index, status::CharacterStatus* target); // 
    int func_ov015_02175c44(btl::BattleSelectTargetParam* param);
    int func_ov015_02175d88(btl::BattleSelectTargetParam* param);
    int func_ov015_02175d08(btl::BattleSelectTargetParam* param);
    int func_ov015_02176144(btl::BattleSelectTargetParam* param);
    int func_ov015_02176208(btl::BattleSelectTargetParam* param);
    int func_ov015_0217629c(btl::BattleSelectTargetParam* param);
    int func_ov015_021760b0(btl::BattleSelectTargetParam* param);
    int func_ov015_021752a4(btl::BattleSelectTargetParam* param);
    int func_ov015_02175370(btl::BattleSelectTargetParam* param);
    int func_ov015_02175474(btl::BattleSelectTargetParam* param);
    int func_ov015_02175498(btl::BattleSelectTargetParam* param);
    int func_ov015_021754bc(btl::BattleSelectTargetParam* param);
    int func_ov015_021754e0(btl::BattleSelectTargetParam* param);
    int func_ov015_02175504(btl::BattleSelectTargetParam* param);
    int func_ov015_02175528(btl::BattleSelectTargetParam* param);
    int func_ov015_0217554c(btl::BattleSelectTargetParam* param);
    int func_ov015_02175624(btl::BattleSelectTargetParam* param);
    int func_ov015_02175704(btl::BattleSelectTargetParam* param);
    int func_ov015_021757dc(btl::BattleSelectTargetParam* param);
    int func_ov015_02175900(btl::BattleSelectTargetParam* param);
    int func_ov015_02175a18(btl::BattleSelectTargetParam* param);
    status::CharacterStatus* func_ov003_0212be84(btl::BattleSelectTargetParam* param, int index);
    int func_ov003_0212be08(btl::BattleSelectTargetParam* param, int group);
    status::CharacterStatus* func_ov003_0212be38(btl::BattleSelectTargetParam* param, int group, int index);
    int func_ov015_02172964(btl::BattleSelectTargetParam*);
    int func_ov015_02172ae8(btl::BattleSelectTargetParam*);
    int func_ov015_02172cbc(btl::BattleSelectTargetParam*);
    int func_ov015_02172ce0(btl::BattleSelectTargetParam*);
    int func_ov015_02172d04(btl::BattleSelectTargetParam*);
    int func_ov015_02172de0(btl::BattleSelectTargetParam*);
    int func_ov015_02172f80(btl::BattleSelectTargetParam*);
    int func_ov015_02173124(btl::BattleSelectTargetParam*);
    int func_ov015_021732d0(btl::BattleSelectTargetParam*);
    int func_ov015_021732f4(btl::BattleSelectTargetParam*);
    int func_ov015_021734b4(btl::BattleSelectTargetParam*);
    int func_ov015_02173504(btl::BattleSelectTargetParam*);
    int func_ov015_0217377c(btl::BattleSelectTargetParam*);
    int func_ov015_021739a8(btl::BattleSelectTargetParam*);
    int func_ov015_021739f4(btl::BattleSelectTargetParam*);
    int func_ov015_02173bec(btl::BattleSelectTargetParam*);
    int func_ov015_02173de4(btl::BattleSelectTargetParam*);
    int func_ov015_02173fd0(btl::BattleSelectTargetParam*);
    int func_ov015_02174278(btl::BattleSelectTargetParam*);
    int func_ov015_02174498(btl::BattleSelectTargetParam*);
    int func_ov015_02174690(btl::BattleSelectTargetParam*);
    int func_ov015_02174888(btl::BattleSelectTargetParam*);
    int func_ov015_02174bf4(btl::BattleSelectTargetParam*);
    int func_ov015_02174c4c(btl::BattleSelectTargetParam*);
    int func_ov015_02174c94(btl::BattleSelectTargetParam*);
    int func_ov015_02174cf0(btl::BattleSelectTargetParam*);
    int func_ov015_02174d30(btl::BattleSelectTargetParam*);
    int func_ov015_02174d78(btl::BattleSelectTargetParam*);
    int func_ov015_02174e3c(btl::BattleSelectTargetParam*);
    int func_ov015_02174f14(btl::BattleSelectTargetParam*);
    int func_ov015_02174fd0(btl::BattleSelectTargetParam*);
    int func_ov015_021750f8(btl::BattleSelectTargetParam*);
    int func_ov015_021751e4(btl::BattleSelectTargetParam*);
    void func_ov015_021710e0(btl::BattleSelectTargetParam* param);
    void func_ov015_02170c70(btl::BattleSelectTargetParam* param);
    void func_ov015_02170e10(btl::BattleSelectTargetParam* param);
    void func_ov015_02170cd0(btl::BattleSelectTargetParam* param);
    void func_ov015_02170d44(btl::BattleSelectTargetParam* param);
    void func_ov015_02171160(btl::BattleSelectTargetParam* param);

};
