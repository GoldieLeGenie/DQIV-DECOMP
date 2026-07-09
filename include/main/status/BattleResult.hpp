#pragma once
#include "main/dss/DssUtils.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/BaseStatus.hpp"
#include "main/status/PartyStatus.hpp"
#include <globaldefs.h>
#include "GameInfo.hpp"


namespace status{
    struct BattleResult {
        struct Result {
            unsigned short monsterCount_;
            unsigned short itemCount_;
            unsigned char level_;
        };
        Result result_[210];                          // +0x000
        dss::BitFlag<unsigned int> encountFlag_[7];   // +0x4ec (5 used + 2 pad reused below)
        int playerVictory_;                           // +0x508
        int playerDemolition_;                        // +0x50c
        int playerDemolitionMessage_;                 // +0x510
        int disablePlayerDemolition_;                 // +0x514
        int battleTurnCount_;                         // +0x518
        int battleExecute_;                           // +0x51c
        int playerFirstAttack_;                       // +0x520
        int monsterFirstAttack_;                      // +0x524
        unsigned short defaultMonsterNo_[210];        // +0x528
        void initialize();
        void setMonsterCount(unsigned int monsterIndex, unsigned short count);
        void addMonsterCount(unsigned int monsterIndex);
        unsigned short getMonsterCount(unsigned int monsterIndex);
        unsigned int getMaxExp(unsigned int monsterIndex);
        unsigned int getMaxGold(unsigned int monsterIndex);
        void setItemCount(unsigned int monsterIndex, unsigned short count);
        void addItemCount(unsigned int  monsterIndex);
        unsigned short getItemCount(unsigned int monsterIndex);
        unsigned int getItemIndex(unsigned int monsterIndex, int getItemID);
        void setLevel(unsigned int monsterIndex, unsigned short level);
        void regenesisLevel(unsigned int monsterIndex, unsigned char level);
        unsigned char getLevel(unsigned int monsterIndex);
        unsigned int getExpTotal(unsigned int monsterIndex);
        unsigned int getGoldTotal(unsigned int monsterIndex);
        void setEncount(unsigned int monsterIndex, bool flag);
        bool isEncount(unsigned int monsterIndex);
        int getEncountCount();
        unsigned int getAllMonsterTotalExp();
        void setDisablePlayerDemolition(bool flag);
        int isDisablePlayerDemolition();
    };

    extern BattleResult g_BattleResult;            //data_020ec664
}

