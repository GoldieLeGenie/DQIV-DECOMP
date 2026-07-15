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
    unsigned char fightStadiumResult_;          
    char _unknownB9_[7];                        

    void startCasino();
    void startBook();
    void startSurechigai();
    void setMinigame(int type);
    int getMinigame();
    void setGameStatus(int minigameStatus);
    int getGameStatus();
    void setRanarutaFlag(bool flag);
    int getRanarutaFlag();
    char* getMapName();
    char* getPrevMapName();
    void setMapName(char *name);
    bool isAreaChange();
    int getFieldType();
};

extern Global g_Global; // 0x020c768c
extern char data_020bc278[];                            // "surechigai"
extern char data_020bc258[];                            // "book"
extern char data_020bc270[];                            // "casino"
extern int  data_020c7658[];                            // 
extern int  data_0210bc18[];                            //
extern "C" void func_0200bdb8(void* part, int id);      // 
extern "C" void func_02058294(void* mgr, void* part);   // 
extern "C" void func_0200bcc4(Global* g, int part);     // 

