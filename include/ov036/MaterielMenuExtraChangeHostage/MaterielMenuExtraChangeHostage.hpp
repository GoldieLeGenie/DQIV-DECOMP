#pragma once
#include "globaldefs.h"
#include "main/status/PartyStatus.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/global/Global.hpp"

struct MaterielMenuWindowManager;


struct MenuBase {
    enum MENUBASE_STAT {
        MENUBASE_STAT_ACTIVE=0,
        MENUBASE_STAT_OK=1,
        MENUBASE_STAT_CANCEL=2
    };
    virtual void menuSetup();
    virtual void menuClose();
    virtual void menuDraw();
    virtual void menuUpdate();
    int redraw_;
    int frame_;
    MENUBASE_STAT stat_;
    int exitCode_;
    int lock_;
    int lockRequest_;
};

struct MenuItem {
    int unk_00[6];         
    int flagTouch_;       
    int enablePad_;       
    int enableCancel_;    
    int unk_24;           
    int enableSE_;         
    int unk_2C;           
    int enable_;            
    int unk_34;             
    int active_;            
    int unk_3C;            
    int unk_40;           
    int unk_44;            
    int unk_48;            
    int lastresult_;       
    int result_;         
    int reason_;          
    int mtype_;            
    int bActive_;         
    int navMode_;          
};

struct MenuNavigator {
    short w_;             /* 0x4 */
    short h_;             /* 0x6 */
    short count_;         /* 0x8 */
};

struct MaterielMenuExtraChangeHostage : MenuBase 
{                      
    enum HOSTAGE_STATUS {
        HOSTAGE_ISCHANGE = 0,
        HOSTAGE_SELECT   = 1,
        HOSTAGE_CHANGING = 2,
        HOSTAGE_END      = 3
    };
    int ctrlID_;                       
    HOSTAGE_STATUS hostageStatus_;
    short hostageID_;
    short newHostageID_;
    MenuItem menuItem_;            /* 0x28 */
    MenuNavigator navigator_;        /* 0x8C */
    virtual void menuSetup();      
    virtual void menuClose();
    virtual void menuDraw();
    virtual void menuUpdate();
    void memberUpdate();
    void memberChange();
    int isHostage();

};

extern int data_020ed28c;
extern MenuBase data_020ed1bc;      /* gTownMenu_MESSAGE : MenuBase */
extern int data_020c7678[];         /* object fade black */
extern "C" {
    MaterielMenuWindowManager* func_ov016_0216aca4(void);   

    void func_02023504(void* cursor, int a, int b, int count);
    int  func_02023274(void* list, void* cursor);                /* poll → 0/2/3 */
    void func_020259a8(void* mgr);      /* TownMenu_MESSAGE::openMessageForTALK */
    void func_02025a34(void* mgr, int messageID);   /* TownMenu_MESSAGE::addMessage */
    void func_02025b08(void* mgr);      /* TownMenu_MESSAGE::setYesNo */
    void func_02052408(void* mgr);      /* candidat closeMessage — orphelin mobile */
    void func_02054364(int slot, int type, int value);   /* TextAPI::setMACRO0 */
    void func_02030f60(cmn::GameManager*);
    void func_02028944(void*);
    void func_020499a4(int);
    void func_ov016_0216b020(void);
    int  func_0200bef8(void*);          /* IsFadeEnd(FadeObj*) */
    int  func_0205241c(void*);          /* MenuBase::isOpen */
    void func_02025a1c(void* mgr, int messageID);   
    void func_02025b60(void* mgr);      /* TownMenu_MESSAGE,*/
    void func_ov000_021383bc(int mgr, int ctrlId, int angle);   /* setRotate */
    void func_ov016_0216b020(void);     /* closeMaterielWindow */
    void func_0200bcc4(Global* g, int frames);
    int  func_ov000_02137f2c(void);     /* TownCharacterManager::getSingleton */
    void func_ov016_0216fdb8(void);       
    void func_02051968(MenuItem*);        
    void func_ov016_02177350(MenuItem*, int active, int count);
    void func_02051900(MenuItem*, int, int);   
    int  func_0202375c(void);               
}