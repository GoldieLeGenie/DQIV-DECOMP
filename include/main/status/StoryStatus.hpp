#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/HaveItemSack.hpp"

namespace status{
    struct StoryStatus {
        enum BONMOL_EVENT
        {
            EVENT_HAGANENOTURUGI = 0x0,
            EVENT_TETUNOYOROI = 0x1,
        };
        unsigned int flag_;
        int chapter_;
        Sex sex_;
        HaveItemSack fukuro_[4];
        int gold_[4];
        int coin_[4];
        char heroName[32];
        int endorEventItemCount_[2];
        int giveEventItemCount_[2];

        void setTarot(int index);
        bool isTarot();
        void setUseBank(bool flag);
        bool isUseBank();
        void setCompleteCoin(bool flag);
        bool isCompleteCoin();
        void setChapter(int chapter);
        void storeFukuro(status::HaveItemSack* sack);
        void restoreFukuro(int chapter, HaveItemSack *sack);
        void storeGold(unsigned int gold);
        void storeCasinoCoin(unsigned int coin);
        int restoreCasinoCoin(int chapter,unsigned int coin);
        int getChapterCasinoCoin(int chapter);
        void store();
        void restoreSack(int chapter);
        void restoreCoin(int chapter);
        void setHeroName(char *utf8name);
        void setEndorEventItemCount(BONMOL_EVENT index,int count);
        void addEndorEventItemCount(BONMOL_EVENT index, char count);
        int getEndorEventItemCount(BONMOL_EVENT index);
        void setGiveEventItemCount(BONMOL_EVENT index,int count);
        int getGiveEventItemCount(BONMOL_EVENT index);
    };
    extern StoryStatus g_Story; //data_020ee1cc
    
}



extern "C" {
    extern void func_0205461c(char* name);       
    extern void func_02014090(status::HaveItemSack* dst, status::HaveItemSack* src);
    extern int func_02013f88(status::BaseHaveItem* haveItem);
    extern unsigned char func_02013fb4(status::BaseHaveItem *p, int index);
    extern void func_0201411c(status::HaveItemSack* sack, int index);
    extern int  func_02013ff0(status::HaveItemSack *p, int index);
    extern void func_020140c8(status::HaveItemSack *sack, int itemIndex, int count);
}