#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/HaveStatusInfo.hpp"

namespace btl {
    struct BattleMenuPlayerControl 
    {                                       
        int activeChara_;
        int targetChara_;
        int activeItem_;
        int activeMagic_;
        int tacticsSex_;
        int secondHistory_[4];
        int firstHistory_[4];
        short memberHP_[4];
        short memberMP_[4];
        short memberLv_[4];
        short memberHPColor_[4];
        int memberCondition_[4];
        int conditionChange_[4];
        short targetMonsterGroup_[4];
        short magicPosition_[26];
        BattleMenuPlayerControl* getSingleton();
        int getPlayerItemId();
        void clear();
        void allClear();
        void setNoSelectHistory(int index);
        int makePlayerHistory();
        int resetPlayerHistory(int playerNum);
        void setAttackHistory();
        void setDefenceHistory();
        void setUseItemHistory();
        void setUseActionHistory();
        bool flashStatus(int memberNum);
        bool flashHP(int memberNum);
        bool flashMP(int memberNum);
        bool flashHPColor(int index);
        int isFlashHPColor(int index, status::HaveStatusInfo::DiffStatus timing);
        int flashCondition(int memberNum);
        int isFlashCondition(status::HaveStatusInfo* info, status::HaveStatusInfo::MenuStatusChange menuStatus);
        int getTargetGroup();
        void setTargetGroup(int monsterNum);
        void setMagicPosition(int position);
        int getMagicPosition();
    };
}

struct CondCheckTable { int v[6]; };     // data_ov015_021764e4 
struct CondMessageTable { int v[7]; };   // data_ov015_02176514 

extern "C" {
void func_ov015_0217024c(btl::BattleMenuPlayerControl*);   /* handler commande 1 */
void func_ov015_02170370(btl::BattleMenuPlayerControl*);   /* handler commande 2 */
void func_ov015_02170414(btl::BattleMenuPlayerControl*);   /* handler commande 3 */
void func_ov015_021703a4(btl::BattleMenuPlayerControl*);   /* handler commande 4 */
int func_ov015_021704e8(btl::BattleMenuPlayerControl*, int index);
int func_ov015_02170578(btl::BattleMenuPlayerControl*, int index);
int func_ov015_021706e4(btl::BattleMenuPlayerControl*, int index);
int func_ov015_02170608(btl::BattleMenuPlayerControl*, int index);
void func_ov015_02170488(btl::BattleMenuPlayerControl*, int index);  
int func_ov015_0216c7b0(void);            /* singleton  */
int func_ov015_0216cb2c(int mgr, int index);
int func_ov015_021706ac(btl::BattleMenuPlayerControl* menu, int index, int diff);
int func_ov015_0216b980(status::HaveStatusInfo* info);


int func_ov015_0217080c(btl::BattleMenuPlayerControl* menu, status::HaveStatusInfo* info, int status);
}

