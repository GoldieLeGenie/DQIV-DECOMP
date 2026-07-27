#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/status/CharacterStatus.hpp"
#include "ov003/status/MonsterStatus.hpp"

namespace status{
    struct MonsterParty {
        static int sortIndex_[4]; //data_ov003_0213c608
        static int sortCount_[4];//data_ov003_0216638c
        int unk; //vtable
        MonsterStatus monster_[12];
        int monsterCount_;
        int dropItem_;
        int dropItemMonster_;
        int getCount();
        int getBattleCount();
        int getMonsterCountDeadOrAlive(int monsterIndex);
        int getMonsterCountInGroup(int groupIndex);
        int getMonsterCountInGroupExist(int groupIndex);
        status::MonsterStatus* getMonsterInGroup(int groupIndex, int index);
        int getMonsterIndexInGroup(int groupIndex);
        int getMonsterGroup(int index);
        int getMonsterIndex(int index);
        status::MonsterStatus* getMonsterStatus(int index);
        int getCtrlId(int index);
        void setCtrlId(int index, int ctrlId);
        status::MonsterStatus* getMonsterStatusWithCtrlId(int ctrlId);
        int getGroupCount();
        int getMonsterGroupForMonsterIndex(int monsterIndex);
        int getMonsterCallType();
        int getMonsterCallIndex();
        void initializeSortIndex();
        static int getSortIndexInGroup(int index);

    };
}

struct GroupIndices {
    int v[4];
};
struct MonsterFormation {
    int v[4];
};
extern MonsterFormation monsterFormationTable; //data_ov003_02139050
extern GroupIndices monsterCallTypeTable; // data_ov003_02139040
extern "C" int func_ov003_0212e8e8(int index);
