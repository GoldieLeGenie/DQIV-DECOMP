#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "GameInfo.hpp"

namespace cmn
{
    enum PARTY_RIDE_ON_TYPE
    {
        RIDE_ON_NONE = 0,
        RIDE_ON_TOWN_BALLOON = 1,
        RIDE_ON_SHIP_IKADA = 2
    };

    enum MENU_ACTION
    {
        MENU_ACTION_NONE = 0,
        MENU_RURA_SUCCESS = 1,
        MENU_RURA_FAILED = 2,
        MENU_RIREMIT = 3,
        MENU_TALK = 4,
        MENU_SEARCH = 5,
        MENU_HENGE_NO_TSUE = 6,
        BALLON_HORN = 7
    };
    struct CommonPartyInfo {
        dss::Fx32Vector3 position_;
        dss::Fx32Vector3 prev_position_;
        dss::Fx32Vector3 beforeBattlePos_;
        dss::Fx32Vector3 bashaLPos_;
        dss::Fx32Vector3 bashaRPos_;
        short dirIdx_;
        short bashaLIdx_;
        short bashaRIdx_;
        int countPartyArray_;
        int countRFix_;
        int countLFix_;
        dss::Fx32Vector3 positionArray_[160];
        short directionArray_[160];
        dss::Fx32Vector3 startPos_;
        PARTY_RIDE_ON_TYPE rideOnType_;
        int roadFlag_;
        int prevLocation_;
        MENU_ACTION menuAction_;            // 0x928  
        dss::Fx32Vector3 townShipPos_;      // 0x92C  
        short shipDirection_;               // 0x938  
        char mapNameAtShip_[10];            // 0x93A  
        dss::Fx32Vector3 townIkadaPos_;     // 0x944 
        char mapNameAtIkada_[10];           // 0x950-0x959
        int actorIndex_;                    // 0x95C
        int targetIndex_;                   // 0x960
        int barron_;                        // 0x964 
        int prevFrameBattle_;               // 0x968
        dss::Fx32Vector3 collVec_;          // 0x96C
        int collFlag_;                      // 0x978
        int partyTalk;                      // 0x97C
        int ctrlID_;                        // 0x980
        dss::Fx32Vector3 tempBalloonPos_;   // 0x984 
        int tempBalloonFieldType_;          // 0x990   
        dss::Fx32Vector3 tempShipPos_;      // 0x994 
        int playerTalk;                     // 0x9A0

        CommonPartyInfo();
        dss::Fx32Vector3 * getPositionArrayPointer();
        short* getDirectionArrayPointer();
        void setPartyInfo(dss::Fx32Vector3* partyPosition, short partyDirIdx);
        void getPartyInfo(dss::Fx32Vector3* partyPos, short* partyDirIdx);
        void setBashaInfo(dss::Fx32Vector3* bashaLPos, dss::Fx32Vector3* bashaRPos,
                                        short bashaLIdx, short bashaRIdx,
                                        int countParty, int countLFix, int countRFix);
        void getBashaInfo(dss::Fx32Vector3* bashaLPos, dss::Fx32Vector3* bashaRPos,
                                        short* bashaLIdx, short* bashaRIdx,
                                        int* countParty, int* countLFix, int* countRFix);
        void setDirIdx(short dirIdx);
        void setStartPosition();
        void setShipInfo(char* name, dss::Fx32Vector3* pos, short idx);
        char* getShipMapName();
        void getShipInfo(dss::Fx32Vector3* pos, short* idx);
        void setIkadaInfo(char *name,dss::Fx32Vector3 *pos);
        void setIkadaMapName(char *name);
        dss::Fx32Vector3 getIkadaPos();
        void resetShipIkadaMapName();
        int isBalloonEnable();
        int isShipEnable();
        void setBalloonFieldTypeByTownId(int townId);
        void callCarriage();
        char* getIkadaMapName();
        int isBarronArea(dss::Fx32Vector3* pos);
        int isUsedBarron();
        void checkBallon(dss::Fx32Vector3* pos);
        void setMenuAction(MENU_ACTION mode);
        void setBalloonPosByExtraSave();
        void resetBalloonPosByExtraSave();
    };

    struct CommonRuraData{

    };
}
extern cmn::CommonPartyInfo g_cmnPartyInfo; //data_020ef650


struct Ov000unkstruct {
    char pad_[0x610];
    int flag_;
};

struct PlayerManager {

};

struct FieldPlayerManager : PlayerManager {          
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0C();       
};

struct TownSystem {
    char unk_[0x610];
    int scriptLock_;
};

extern "C" void* func_ov000_02132228(); //TownSystem::getSingleton
extern "C" void* func_ov000_02132a90();
extern "C" void* func_ov001_02127b28();
extern "C" void func_020888bc(dss::Fx32Vector3* dst, dss::Fx32Vector3* src);
extern "C" int func_ov001_0212a460(void*, dss::Fx32Vector3*);             // FieldPlayerManager::checkBarronArea
extern "C" int func_020882b0(const char*, const char*);                   // strcmp
extern "C" int func_0207c384(void* a, void* b);   // strcmp

extern "C" void  func_02030fe0(int flag);                 // PlayerManager::setLock (static)
extern "C" void  func_ov000_021341ec(void* mgr, int f);   // TownPlayerManager::setLock
extern "C" dss::Fx32Vector3 func_020335ec(cmn::CommonRuraData* self, int townID);
extern "C" cmn::CommonRuraData* func_020332cc();

extern char s_srout_map[8];                                        // map baron (rodata)





