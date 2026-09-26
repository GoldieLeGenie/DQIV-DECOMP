#pragma once
#include "main/dss/DssUtils.hpp"


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
    int betMonsterID_;                          
    int betMonsterSymbol_;                      
    short diameter_;                            
    int doubleUpFlag_;                          
    int prevPartTown_;                          
    dss::Fx32Vector3 fightingarenaPosition_;     
    int fightingarenaFlag_;                     
    char fightingarenaMapName_[32];             
    char prevMapName_[32];                        
    char nextMapName_[32];   
    char battleMapName[8];

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
    void setFightingArenaMapName(const char* name, dss::Fx32Vector3& pos);
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

struct GlobalGamePart {
    virtual void update();
    virtual void draw();
    virtual bool isEnd();
};

struct GlobalChangePart : GlobalGamePart {
    int nextPart_;                             

    virtual void update();
    virtual bool isEnd();
    void setNextPart(int part);
};

struct GlobalWaitPart : GlobalGamePart {
    int count_;                                 
    int frames_;                                

    virtual void update();
    virtual void draw();
    virtual bool isEnd();
    int isRunning();
};

struct GlobalFade : GlobalGamePart {
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



extern char s_mapBtlda1[]; // "btlda1"
extern char mlb1a[8]; // "mlb1a data_0208c9ec"
extern char za1f1[8]; //za1f1 data_0208c9f4
extern char s_mapSurechigai[];                            // "surechigai"
extern char s_mapField[];                            // "field"
extern char s_mapEv01[];                            // "ev01"
extern char s_mapBook[];                            // "book"
extern char s_mapCasino[];                            // "casino"
extern int  data_0210bc18[];                            //

extern "C" void func_02058294(void* mgr, void* part);   // 
extern "C" {
    void func_020582b8(void* mgr, void* task);
    void func_0207ed24(int brightness);
    void func_0207ed3c(int brightness);
}
extern "C" void func_020559ec(int value);
extern "C" void func_0200a734(void);
