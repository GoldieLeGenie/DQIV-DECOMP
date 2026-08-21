#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "ov003/btl/SpecialMessageTask.hpp"

namespace btl {
    struct BattleActorEffect
    {
        static int wait_; //data_ov003_02158a50
        static void setExecEffect(status::UseActionParam* useActionParam);
        static int checkCommonExecEffect(status::UseActionParam* useActionParam);
        static int setPlayerEffect(status::UseActionParam* useActionParam);
        static int checkPlayerExecEffect(status::UseActionParam* useActionParam);
        static int setEnemyEffect(status::UseActionParam* useActionParam);
    };

}

extern "C" int func_ov003_02128afc(status::UseActionParam* useActionParam);
extern "C" int func_ov003_02128bd0(status::UseActionParam* useActionParam);
extern "C" int func_ov003_02128e20(status::UseActionParam* useActionParam);
extern "C" int func_ov003_02128f58(status::UseActionParam* useActionParam);
extern "C" int func_ov003_02128db4(status::UseActionParam* useActionParam);
extern "C" int func_0208995c(void);
extern "C" int func_ov003_0212b7ec(BattleEffectUnit* unit);
extern "C" int func_ov003_02128f3c(status::UseActionParam* p);
extern "C" void func_ov003_0212af18(BattleEffectUnit* unit, status::CharacterStatus* chara, int flag);
extern "C" int func_0200c050(param::MonsterAnim* data, unsigned int monsterNo, unsigned short action, unsigned short anim);