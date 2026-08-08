#pragma once
#include "globaldefs.h"
#include "main/status/PartyStatus.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/global/Global.hpp"
#include "main/menu/MenuBase.hpp"

struct MaterielMenuWindowManager {   
    enum MATERIEL_MENU_WINDOW {
        MENU_INN=0,
        MENU_CHURCH=1,
        MENU_SHOP_WEAPON=2,
        MENU_SHOP_PROTECTOR=3,
        MENU_SHOP_ITEM=4,
        MENU_CHANGE_GIFT=5,
        MENU_INN_TYPE2=6,
        MENU_CHURCH_TYPE2=7,
        MENU_SHOP_WEAPON_TYPE2=8,
        MENU_SHOP_PROTECTOR_TYPE2=9,
        MENU_SHOP_ITEM_TYPE2=10,
        MENU_CHANGE_GIFT_TYPE2=11,
        MENU_COIN_SALEROOM=12,
        MENU_CASINO_SLOT=13,
        MENU_CASINO_POKER=14,
        MENU_CASINO_FIGHTSTADIUM=15,
        MENU_BANK=16,
        MENU_MEDAL_KING=17,
        MENU_EXTRA_FOX_TOWN=18,
        MENU_EXTRA_BONMOL_CASTLE=19,
        MENU_EXTRA_IMUL=20,
        MENU_EXTRA_PRESENT_EXP=21,
        MENU_EXTRA_COLOSSEUM=22,
        MENU_EXTRA_HOSTAGE=23,
        MENU_EXTRA_NENE=24,
        MENU_EXTRA_CHAPTER_TITLE=25,
        MENU_SAVE=26,
        MENU_CASINO_SLOT_ENTER=27,
        MENU_EXTRA_SIDEJOB=28,
        MENU_SURECHIGAI_MAKE_TAISHI=29,
        MENU_SURECHIGAI_ROOT=30,
        MENU_SURECHIGAI_MAP_NAME=31,
        MENU_CHURCH_MIRACLE=32
    };
    MATERIEL_MENU_WINDOW menuType_;    /* 0x00 */
    int type_;                         /* 0x04 */
    int chapter_;                      /* 0x08 */
    int titleFlag_;                    /* 0x0C */
    int extraInnType_;                 /* 0x10 */
    int editType_;                     /* 0x14 */
    int endWindow_;                    /* 0x18 */
    int extraImuruEnd_;                /* 0x1C */
    int surechigaiStart_;              /* 0x20 */
    int changeTaishi_;                 /* 0x24 */
    int chapterEnd_;                   /* 0x28 */
    int editMessageForScript_;         /* 0x2C */
};

struct MaterielMenuExtraChapterTitle : menu::MenuBase
{                                       
    int m_fade;
    int m_mode;
    int m_draw_count;
    int m_chapter;
    int m_chapter_end;
    virtual void menuSetup();
    virtual void menuDraw();
    virtual void menuUpdate();
    void setChapterTitleInfo(int chapter,int flag);
    virtual void menuExecute();
};


extern "C" {
    MaterielMenuWindowManager* func_ov016_0216aca4(void);   
    void func_ov016_0216fe50(int chapter, int chapterEnd);  
    void func_020848a8(void);                               
    int  func_02035180(void);
    int  func_020352d0(void);                               
    void func_0200bd30(Global*, int frames);   
    void func_020351c8(int mgr);                  
    void func_020351c8(int mgr);
    void func_020351dc(int mgr, int soundIndex);
    int  func_020352d0(void);                     /* isPlaySound — inchangé */  
        void func_ov001_0212aaac(void);
    void func_ov001_0212abc8(void);      
}