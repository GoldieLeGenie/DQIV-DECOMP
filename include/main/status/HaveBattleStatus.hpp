#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/param/Param.hpp"

namespace status
{
    // --- FORWARD DECLARATIONS ---
    struct HaveStatusInfo;
    struct PlayerStatus;
    struct PartyStatus;
    struct HaveAction;
    struct HaveItem;
    struct BaseHaveItem;

    struct MonsterInitdata {
        param::MonsterData* monsterData_;   // 0x00
        int unk_4;                          // 0x04
        const param::CharInitData* charaInitData_;// 0x08
        int unk_0c;                         // 0x0C
        int parupunteFlag_;                 // 0x10
        int parupunteAction_;               // 0x14
        int confuseDebugAction_;            // 0x18
    };

    struct HaveBattleStatus
    {
        enum SelectCommand
        {
            Attack = 0,
            Defence = 1,
            UseAction = 2,
            UseItem = 3,
            NoSelect = 4,
            AISelect = 5
        };

        enum CallStart
        {
            StartRound = 0,
            StartTurn = 1
        };

        int groupIndex_;
        int index_;
        int originalIndex_;
        CharacterType originalType_;
        CharacterType type_;
        HaveStatusInfo *haveStatusInfo_; // Pointeur : la forward declaration suffit
        int exp_;
        unsigned short hp_;
        unsigned short hpMax_;
        unsigned short mp_;
        unsigned short mpMax_;
        unsigned short strength_;
        unsigned short protection_;
        unsigned short agility_;
        unsigned short wisdom_;
        unsigned char luck_;
        int texp_;
        int tlevel_;
        int change_;
        int actionIndex_;
        int actionCount_;
        int patternIndex_;
        dss::BitFlaguint patternFailedFlag_;
        dss::BitFlaguint disablePattern_;
        dss::BitFlaguint disablePattern2nd_;
        SelectCommand selectCommand_;
        int selectIndex_;
        int selectedGroup_;
        int selectedTarget_;
        int sortIndex_;
        int monsterCtrlId_;
        int escape_;
        int tarotCount_;
        int tarotActionIndex_;
        unsigned char brains_;
        unsigned char group_[6];
        char crossFire_;
        int crossFireTarget_;
        unsigned char multi_;
        char multiCount_;
        char multiCount2_;
        char multiTurnCount_;
        char multiGlobalCount_;
        char multiExecCount_;
        unsigned char level_;
        unsigned char dragon_;
        unsigned char metal_;
        unsigned char zombi_;
        unsigned char air_;
        unsigned char slime_;
        unsigned char jouk_;
        int monsterIndexForNpc_;
        unsigned char mosyasAction_[17];
        int mosyasActionCount_;

        static int groupControl_[4]; 
        static int groupRoopIndex_[4];
        static status::MonsterInitdata monsterinitData_; 

        // Méthodes
        HaveBattleStatus();
        ~HaveBattleStatus();
        void initialize();
        void setup(CharacterType type, int group, int index);
        void newBaseChangeMonster(int index);
        void newBaseChangeMonsterFromPlayer(int index);
        void newBaseChangeMonsterReverse2();
        void newBaseChangeMonsterWithHpMp(int index);
        void changeMonsterFromPlayer(int index);
        void changeMonsterReverse();
        void setupPlayer();
        void setupMonster();
        bool isJouk();
        void setActionIndex(int index);
        void setActionSelect(CallStart callStart);
        void setActionSelectForPlayer();
        void setActionSelectForMonster(CallStart callStart);
        void setActionPatternForMonster();
        static int getClampValue(int value, int min, int max);
        void setActionIndexForMonster();
        int getActionIndex(int index);
        int getActionAnimation(int index);
        void setActionFailed(int index);
        bool isActionFailed();
        void setActionDisable(int index);
        bool isActionDisable();
        bool isActionAllDisable();
        void setActionDisable2nd();
        bool isActionDisable2nd();
        bool isActionAllDisable2nd();
        void clearActionDisable2nd();
        int isRestOneAction2nd();
        void setRestOne();
        int getRestNum();
        bool isUseMp();
        int isMahoton();
        int isFizzleZone();
        bool checkRestMP_Mahoton();
        void clearGroupControl();
        void checkGroupControl();
        int getGroupControl();
        void setSelectCommand(SelectCommand command, int index);
        SelectCommand getSelectCommand();
        void clearSelectCommand();
        void startBattle();
        void execStartOfRound();
        void setMultiAction();
        bool isMultiAction();
        void setupTarotAction();
        void setupParupunteAction();
        void setupConfuseAction();
    };
}



struct RoopCopy { int v[4]; };
extern RoopCopy data_020b4dac;

struct RestArray { int v[6]; };
extern RestArray data_020b4e1c;
extern RestArray data_020b4e34;

struct TarotTable { int v[8]; };
extern TarotTable data_020b4e6c;

struct ParupunteArraySmall { int v[13]; };
struct ParupunteArrayLarge { int v[23]; };
extern ParupunteArraySmall data_020b4efc;
extern ParupunteArrayLarge data_020b4f30;

struct ConfuseArray3 { int v[3]; };
struct ConfuseArray4 { int v[4]; };
struct ConfuseArray6 { int v[6]; };
struct ConfuseArray8 { int v[8]; };

extern ConfuseArray3 data_020b4d68;
extern ConfuseArray3 data_020b4d74;
extern ConfuseArray3 data_020b4d80;
extern ConfuseArray4 data_020b4d8c;
extern ConfuseArray4 data_020b4d9c;
extern ConfuseArray4 data_020b4dbc;
extern ConfuseArray4 data_020b4dcc;
extern ConfuseArray4 data_020b4ddc;
extern ConfuseArray6 data_020b4dec;
extern ConfuseArray6 data_020b4e04;
extern ConfuseArray8 data_020b4e4c;
extern ConfuseArray8 data_020b4e8c;


extern "C" {
    void func_02012044(status::HaveStatusInfo*, int pro);
    void func_02011e44(status::HaveStatusInfo*, unsigned char agi);
    unsigned char func_02013fb4(status::BaseHaveItem*, int index);
    int func_0201c270(status::HaveBattleStatus*, int index);
    int func_0201d8c8(void* table, int randVal, int count);
    void func_0200efe0(status::PartyStatus*);
    int func_0200f5fc(status::PartyStatus*);
    int func_02013f88(status::BaseHaveItem*);
    int func_0201152c(status::HaveAction*, int actionIndex);
    status::PlayerStatus* func_0200ecec(status::PartyStatus*, int index);
}