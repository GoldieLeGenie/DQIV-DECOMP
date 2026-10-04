#pragma once
#include "main/dss/DssUtils.hpp"
#include "main/global/GlobalGamePart.hpp"
#include "main/global/GlobalDQ4.hpp"

struct Global {
    enum BOOKING_FLAG {
        BOOKING_NONE = 0,
        BOOKING_INN = 1,
        BOOKING_HOSTAGE = 2,
        BOOKING_CHURCH = 3,
        BOOKING_GAMESET = 4
    };
    int currentGamePart_;                       
    int fieldType_;                               
    int nextFieldType_;                         
    int minigameType_;                            
    int minigameStatus_;                          
    BOOKING_FLAG bookingFlag_;                  
    int ranarutaFlag_;                            
    int checkShiftParty_;                       
    int shiftPartyMessage_;                     
    int partChangeFlag_;                        
    int fightStadiumFlag_;                      
    int betOnIndex_;                            
    int betCoin_;                               
    short betMonsterID_;                        // 0x34
    short betMonsterSymbol_;                    // 0x36
    short diameter_;                            // 0x38
    int doubleUpFlag_;                          // 0x3C
    int prevPartTown_;                          // 0x40
    int unk_44;                                 // 0x44
    dss::Fix32Vector3 fightingarenaPosition_;     
    int fightingarenaFlag_;                     
    char fightingarenaMapName_[32];             
    char prevMapName_[32];                        
    char nextMapName_[32];   
    char battleMapName[32];
    unsigned char fightStadiumResult_;          // 0xD8

    Global();
    ~Global();
    void initialize();
    void startGame();
    void startFirstTown();
    void startDebugTown();
    void startTown(char* name);
    void startCasino();
    void startBook();
    void startSurechigai();
    void startField();
    void startBattle();
    void acceptBattle();
    void directStartBattle();
    void endBattle(bool wipeout);
    void setFightingArenaMapName(const char* name, dss::Fix32Vector3& pos);
    void startTitle();
    void startLogo();
    bool isNextPart(int part);
    void fadeOutBlack(int frames);
    void fadeOutWhite(int frames);
    void fadeInBlack(int frames);
    void fadeInWhite(int frames);
    void fadeIn(int frames);
    void setMinigame(int type);
    int getMinigame();
    void setGameStatus(int minigameStatus);
    int getGameStatus();
    void setRanarutaFlag(bool flag);
    int getRanarutaFlag();
    char* getMapName();
    char* getPrevMapName();
    void setMapName(const char *name);
    bool isAreaChange();
    int getFieldType();
};

struct GlobalChangePart : UnkGlobalPart {
    int nextPart_;                             

    virtual void update();
    virtual bool isEnd();
    void setNextPart(int part);
};

struct GlobalWaitPart : UnkGlobalPart {
    int count_;                                 
    int frames_;                                

    virtual void update();
    virtual void draw();
    virtual bool isEnd();
    int isRunning();
};

struct GlobalFade : UnkGlobalPart {
    enum FADE_STATE {
        FADE_NONE      = 0,
        FADE_OUT_BLACK = 1,
        FADE_IN_BLACK  = 2,
        FADE_OUT_WHITE = 3,
        FADE_IN_WHITE  = 4
    };
    FADE_STATE state_;                          // 0x04
    int brightness_;                            // 0x08
    int count_;                                 // 0x0C
    int frames_;                                // 0x10

    GlobalFade();
    virtual void update();
    virtual void draw();
    virtual bool isEnd();
    void fadeOutBlack(int frames);
    void fadeOutWhite(int frames);
    void fadeInBlack(int frames);
    void fadeInWhite(int frames);
    void fadeIn(int frames);
    int isFadeEnd();
    int isFadeOutBlack();
    int isFadeInBlack();
    int isFadeOutWhite();
};

extern Global g_Global; // 0x020c768c
extern GlobalChangePart g_GlobalChangePart;
extern GlobalWaitPart g_GlobalWaitPart;
extern GlobalFade g_GlobalFade;
extern GlobalFade data_020f21f8;   // 
extern unsigned char data_020f220c[0x38];   // screen, RGB555 color at 0x34
extern unsigned char data_020f2244[0x38];   // screen, RGB555 color at 0x34

extern char mlb1a[8]; // "mlb1a data_0208c9ec"
extern char za1f1[8]; //za1f1 data_0208c9f4
extern char s_mapEv01[];                            // "ev01"

extern "C" void func_02084e8c(void* screen, int r, int g, int b);   // sets RGB555 color at 0x34
extern "C" {
    void func_0207ed24(int brightness);
    void func_0207ed3c(int brightness);
}
