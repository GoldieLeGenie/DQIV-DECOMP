#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "ov003/status/MonsterParty.hpp"
#include "main/dss/DssUtils.hpp"


namespace status{
    struct MonsterPartyWithDraw : MonsterParty
    {
        virtual int add(int monsterGroup, int monsterIndex, int flag); 
        virtual void del(int ctrl);
    };
    
}

struct BattleMonster {
    char _pad000[0xD40];
    int  screenPosition_;                 // 0xD40
    int  screenWidth_;                 // 0xD44
    char _padd48[0x244];
};                    
// 0xF8C
struct BattleMonsterDraw2 {
    BattleMonster monster_[12];     // 0x0000
    char _padba90[0x1B8];           // 0xBA90
    int  spacePos_;                        // 
    int  spaceWidth_;
};


extern "C"
{
    BattleMonsterDraw2* func_ov003_02121d04(void);                  // getSingleton
    int  func_ov003_02121f54(BattleMonsterDraw2*, int, int);
    void func_ov003_02121878(BattleMonster*, dss::Fx32Vector3*);
    void func_0205b2f0(BattleMonster*, dss::Vector3int pos);           // setPositionInt
    void func_ov003_02121ab0(BattleMonster*, int anim);     // startAnimation
    void func_ov003_02121fb8(BattleMonsterDraw2*, int drawId);   //BattleMonsterDraw2::cleanup

}

extern dss::Vector3int data_ov003_0213c5fc;
