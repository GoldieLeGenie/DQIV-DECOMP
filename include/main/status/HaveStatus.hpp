#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/BaseStatus.hpp"
#include "main/status/ExcelParam.hpp" 

namespace status{
    struct HaveStatus {
        unsigned short playerIndex_;
        unsigned char charaIndex_;
        unsigned char iconIndex_;
        unsigned char sex_;
        int exp_;
        unsigned short gold_;
        unsigned char level_;
        char isPlayer_;
        char isBattleNpc_;
        char isNoBattleNpc_;
        char isSpecialNpc_;
        char isMonster_;
        JobType job_;
        status::BaseStatus baseStatus_;
        HaveStatus();
        ~HaveStatus();
        void setup(unsigned short playerIndex, int isPlayer);                            
        void setupPlayer(unsigned short index);    
        void setupMonster(unsigned short index, bool flag);                              
        bool isLevelup();                                                                
        void debugLevelup(int level);                                                    
        void levelup(int flag);                                                          
        unsigned int levelupAdd(unsigned short value);                                   
        unsigned short levelupAjust(unsigned short value, unsigned short diff, unsigned short normal); 
        static void* getLevelupInfo(int index);                                          
        void addExp(int exp);                                                            
        void setExp(int exp);                                                            
        void setLevel(unsigned char lvl);                                                
        int getLevelupExp();                                                             
        void addStrength(char str);                                                      
        unsigned char getAgility();                                                      
        void AddAgility(char agi);                                                       
        void addProtection(char prot);                                                   
        unsigned char getWisdom();                                                       
        void addWisdom(char wisd);                                                       
        unsigned char getLuck();                                                         
        unsigned int getHp();                                                            
        void setHp(unsigned short hp); 
        unsigned short getHpMax();                                                         
        void addHpMax(char hp);                                                          
        unsigned int getMp();   
        void setMp(unsigned short mp);                                                                                                
        unsigned short getMpMax();                                                         
        void addMpMax(char mp);                                                          
        void addBaseHp(int hp);                                                          
        void addBaseMp(int hp);                                                          
    };
}

struct LevelEntry {
    int exp;                        // 0x00
    unsigned short strength;        // 0x04
    unsigned short agility;         // 0x06
    unsigned short wisdom;          // 0x08
    unsigned short luck;            // 0x0A
    unsigned short hpMax;           // 0x0C
    unsigned short mpMax;           // 0x0E
    unsigned short usuallyAction;   // 0x10
    unsigned short battleAction;    // 0x12
    unsigned char unk_14;           // 0x14
    unsigned char actionType;       // 0x15  
    unsigned char unk_16[2];        // 0x16-0x17
};


struct LevelUpUI {
    int unk_0;
    short unk_4;
    short unk_6;
    short unk_8;
    short unk_a;
    short unk_c;
    short unk_e;
    unsigned short strength_;        // 0x10
    unsigned short protection_;      // 0x12
    unsigned char agility_;          // 0x14
    unsigned char wisdom_;           // 0x15
    unsigned short unk_16;
    unsigned short hpMax_;           // 0x18
    unsigned short unk_1a;
    unsigned short mpMax_;           // 0x1C
    unsigned char luck_;             // 0x1E
};

extern LevelUpUI data_020d068c;

extern "C" unsigned int func_02008ea0(unsigned int value, unsigned int min, unsigned int max);
extern "C" long long func_0200602c(int numerator, int denominator); 
extern "C" void func_0200e004(status::BaseStatus*);
extern "C" void func_0200e01c(status::BaseStatus*);