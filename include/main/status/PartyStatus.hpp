#pragma once
#include "main/dss/DssUtils.hpp"
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/BasePartyStatus.hpp"
#include "main/encount/Encount.hpp"





namespace status { struct PlayerStatus; }
namespace status { struct UseActionParam; }
namespace status { struct UseAction; }
namespace status { struct HaveAction; }

namespace status {
    struct PartyStatus : BasePartyStatus {
        dss::BitFlaguint accessFlag_;
        int party_[13];
        int memberOutside_[4];
        int memberBackside_[4];
        virtual void setSaveData(profile::PROFILE_PARTY* data);
        virtual void setLoadData(profile::PROFILE_PARTY* data, profile::PROFILE_HISTORY* history);
        PartyStatus();
        void unkfunc_0200e9cc();
        ~PartyStatus();
        void initialize();
        void add(int playerIndex);
        int addMemberOutside(int playerIndex);
        void removeMemberOutside(int playerIndex);
        void clearMemberOutside();
        void addMemberBackside(int playerIndex);
        void removeMemberBackside(int playerIndex);
        void clearMemberBackside();
        void del(int playerIndex);
        void clear();
        void reorder(int od0, int od1, int od2, int od3);
        int getPlayerIndex(int index);
        PlayerStatus* getPlayerStatus(int index);
        static PlayerStatus* getPlayerStatusForPlayerIndex(int playerIndex);
        int isInsideBasha(int index);
        int isInsideCarriage(int index);
        int isOutsideCarriage(int index);
        static int isInsideCarriageForPlayerIndex(int playerIndex);
        void execOfRoundInCarriage();
        bool isCarriageEnableOnGame();
        bool getCarriageEnableOnGame();
        int getSortIndex(int playerIndex);
        int getAlivePlayerCountOutsideCarriage();
        int getAliveCountOutsideCarriagePlayerOnly();
        void forceReorder();
        void setNormalMode();
        int isNormalModeEnabled();
        void setPlayerMode();
        int isPlayerModeEnabled();
        void setBattleMode();
        int isBattleModeEnabled();
        void setBattleModeWithCarriage();
        int isBattleModeWithCarriageEnabled();
        void setDisplayMode();
        int isDisplayMode();
        void setMemberShiftMode();
        int isMemberShiftMode();
        void setAllPlayerMode();
        void setAccessMode(unsigned int val);
        int getAccessMode();
        void setParty();
        void setPartyPlayerMode();
        void setPartyBattleMode();
        void setPartyBattleModeWithCarriage();
        void setPartyMemberShiftMode();
        void setPartyNormalMode();
        void setPartyDisplayMode();
        int getCount();
        int getCarriageCount();
        int getCarriageOutCount();
        int getCarriageOutAliveCount();
        int isPlayer(int playerIndex);
        int isBattleNpc(int playerIndex);
        int isNormalNpc(int playerIndex);
        int isSpecialNpc(int playerIndex);
        void allRecovery();
        void startBattle();
        void reflectBattleExp();
        void reflectBattleGold();
        int getLevelupPlayer();
        int isDemolition();
        void recoveryDisableDemolition();
        void recoveryDemolition();
        PlayerStatus* getStoryPlayerStatus();
        int giveItem(int itemIndex);
        int getLeaderIndex();
        int isHaveItem(int itemIndex);
        int isEquipItem(int itemIndex);
        void setHostage(int index, bool flag);
        int isHostage(int index);
        int isPoisonForMantan();
        int destroyPoisonForMantan(UseActionParam& param);
        int isRecoveryForMantan();
        int recoveryForMantan(status::UseActionParam& param);
        int calcRecoveryValue(int actionIndex,int *valueBMax,int *valueCMax);
        void calcRecoveryLocal(int action, int *missingHp, int *healEfficiency, int *efficiencyPerMp);
        int calcRecoveryLocalMax(int count, int *valid, int *value, int *tiebreak, int *valueMaxOut, int *tiebreakMaxOut);
        void getBehomalaTargetIndex(int *targetFlags);
        int isExecMinadein();
        int isMinadeinEnable(status::PlayerStatus *player);
        int getAverageLevel();
        int getMaxLevel();
        int isChapter4BGM();
        int isPartyActionEnable();
        int isMegazaruRingEnable();
        
    };

    extern PartyStatus g_Party; // 0x020c7b1c
}


extern status::PlayerStatus originalPlayer_[26];
extern int originalPlayerFlag_[26];


extern "C" {
    int func_0200eac8(void*, int);
    int func_0200eb7c(void*, int);
    void func_0200ef94(void*);
    int func_0200f6bc(status::PartyStatus* self, int playerIndex);
    int func_0200f6e0(void*, int);
    int func_0200f704(void*, int);
    int func_0200f728(void*, int);
    int func_0200ed70(int playerIndex);
    void func_0200f034(void);                              
    int  func_0200f5fc(status::PartyStatus* self);         
    void func_0200e484(void);
    int func_0201c98c(status::StageStatus* stage);
    void func_0200f0b0(status::PartyStatus* self);
    void func_0200e150(status::PlayerStatus*, int);
    void func_0200f144(void);
    int func_0200efb0(void);
    int func_0201c9b8(status::StageStatus* stage);
    Encount* func_0200a6c8(void);
    void func_0201123c(void);
    int  func_020100f4(void* self, int actionIndex, int* valueBMax, int* valueCMax);   /* calcRecoveryValue */
    void func_020102ec(void* self, int *target);                                /* getBehomalaTargetIndex */
    void func_02015b70(status::UseActionParam* useActionParam);   /* UseAction::execUse */
    
};


