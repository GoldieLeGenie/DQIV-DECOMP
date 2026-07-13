#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/profile/Profile.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/param/Param.hpp"
#include "main/global/Global.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/profile/Profile.hpp"

namespace status{
    struct StageStatus {
        static int toramana_;  //data_020d08d0 
        dss::BitFlaguint flag_;
        char mapName_[32];
        char* map_;
        char btlMapName_[32];
        char* btlMap_;
        char evBtlMapName_[32];
        char* evBtlMap_;
        char evChapelMapName_[32];
        char churchMapName_[32];
        char* churchMap_;
        enum TIME_ZONE timeZone_;
        int worldTime_;
        int symbolID_;
        int lastSave_;
        dss::Vector3short backupCameraAngle_;

        dss::Fx32Vector3 shipPosition_;
        dss::Fx32Vector3 balloonPosition_;
        int balloonFieldType_;
        dss::Fx32Vector3 overviewPosition_;
        dss::Fx32Vector3 overviewTempPosition_;
        int flagMapChange_;

        dss::BitFlaguint ruraEnable_;
        int ruraFlag_;
        int ruraSymbol_;
        int maxKekai;
        int crusingPeopleEncount_;
        dss::BitFlaguchar symbolFlag_[16];
        dss::BitFlagushort mapVeil_[16];
        dss::BitFlaguchar furnFlag_[256];
        dss::BitFlaguchar openFlag_[16];
        dss::BitFlaguchar breakFlag_[8];
        int timestop_;
        int fallFlag_;
        dss::Fx32 idoLinkPosX_;
        dss::Fx32 idoLinkPosY_;

        struct IdoLink {
            dss::Fx32 posZ_;
            short dirIdx_;
            int inFlag_;
            int outFlag_;
            int shipEncount_;
            int encount_;
        } idoLink_;

        int playerLockCount_;
        int lastFldSurface_;
        char lastRanaStageName_[10];
        int menuTalk_;
        int menuSearch_;
        int encountMapUid_;
        int ropeLink_;
        int load_;
        int chapterLoad_;
        profile::SAVETYPE loadType_;
        bool returnBookFlag_;
        int profileBank_;
        short lastParty_[9];

        void setup(char *mapname);
        void initialize();
        void setupField();
        void cleanup();
        void setTimeZoneEnable(int flag);
        int isTimeZoneEnable();
        void setTimeZone(TIME_ZONE time);
        TIME_ZONE getTimeZone();
        void setWorldTime(int wt);
        int getWorldTime();
        void setMapIcon(int flag);
        bool isMapIcon();
        void setShopIcon(int flag);
        bool isShopIcon();
        void setCameraIcon(int flag);
        bool isCameraIcon();
        void setRula(bool flag);
        bool isRula();
        void setRulaDisable(bool flag);
        bool isRulaDisable();
        void setRiremito(bool flag);
        bool isRiremito();
        void setRiremitoDisable(bool flag);
        bool isRiremitoDisable();
        void setLanaruta(int flag);
        bool isLanaruta();
        void setLanarutaDisable(bool flag);
        bool isLanarutaDisable();
        static void setToramana(int flag);
        static int isToramana();
        void setBashaEnter(bool flag);
        bool isBashaEnter();
        void setBashaEnable(bool flag);
        bool isBashaEnable();
        void setEncount(int flag);
        bool isEncount();
        void setEventEncount(bool flag);
        void setAbortSave(int flag);
        bool isAbortSave();
        int isAbortSaveTown();
        int isAbortSaveDungeon();
        void setBtlMapName(char* name);
        void setBtlMapNameOnField(LandType land);
        char* getTraderMapName();
        char* getInnKeeperMapName();
        char* getBtlMapName();
        void setEvBtlMapName(char* name);
        char* getEvBtlMapName();
        void updateBattleMap();
        void setMapName(char* name);
        char* getMapName();
        void setChurchMapName(char *name);
        char* getChurchMapName();
        void pushCameraAngle(dss::Vector3short pos);
        dss::Vector3short * popCameraAngle();
        void setMapVeil(int flag);
        void getMapVeil(int x, int y);
        int isMapVeil(int x, int y);
        void setSymbolFlag(int index);
        int getSymbolFlag(int index);
        void initSymbolFlag();
        void setFurnFlag(int index);
        bool getFurnFlag(int index);
        void removeFurnFlag(int index);
        void initFurnFlag();
        void setDoorOpenFlag(int index);
        void getDoorOpenFlag(int index);
        int removeDoorOpenFlag(int index);
        void initDoorOpenFlag();
        void setFurnBreakFlag(int index);
        int getFurnBreakFlag(int index);
        void initFurnBreakFlag();
        void playerClearFlag();
        void playerFlagClear();
        void setRuraFlag(int rura);
        void setRuraTownID(int id);
        int getRuraTownID();
        void setRanaMap(int id);
        void setRanaMapName(char* name);
        void collectMapFlag(profile::SAVETYPE savetype, profile::PROFILE_PARTY* pparty);
        void deliverMapFlag(profile::SAVETYPE savetype, profile::PROFILE_PARTY *pparty);
        void setFallFlag(int flag);
        int getFallFlag();
        int restartChurch();
    };

}
extern status::StageStatus g_Stage; //data_020d08e0

extern "C" {
    void func_02030fe0(int);
    void* func_ov000_02132228();
    void func_ov000_021341ec(void*, int);
    void* func_ov001_02127b28();
    cmn::CommonRuraData* func_020332cc();
    void func_02033328();
    void func_02087154(void*, int);
    void func_02087168(void*, int);
    void func_02088360(void* dest, int size, void* src); 
    int func_0200c0a4(param::FloorParam*, char*);
    int func_020882b0(const char*, const char*);
    void func_02037d28();
    void func_02037da4();
    int func_02058114(void*, int);
    int func_ov000_02135b04();
    void func_02088740(dss::Fx32Vector3* vec);
    void func_020334ac();
}

struct MapChurchInfo {
    unsigned int count_;    // 0x020b615c
    unsigned int unk4_;     // 0x020b6160
};
extern MapChurchInfo data_020b615c; // MapChurchInfo
extern int data_020ed28c;           // g_ExtraMapLink


struct ExternalData {
    char pad[0x10];
    int unk10;
    int unk14;
};



