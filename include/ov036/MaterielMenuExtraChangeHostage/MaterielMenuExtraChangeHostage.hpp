#pragma once
#include "globaldefs.h"
#include "main/status/PartyStatus.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/global/Global.hpp"
#include "main/menu/MenuBase.hpp"

struct MaterielMenuWindowManager;

struct MaterielMenuExtraChangeHostage : menu::MenuBase
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
    menu::MenuItem menuItem_;            /* 0x28 */
    menu::MenuNavigator navigator_;        /* 0x8C */
    virtual void menuSetup();      
    virtual void menuClose();
    virtual void menuDraw();
    virtual void menuUpdate();
    void memberUpdate();
    void memberChange();
    int isHostage();

};

extern int data_020ed28c;
extern menu::MenuBase data_020ed1bc;      /* gTownMenu_MESSAGE : MenuBase */
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
    void func_02051968(menu::MenuItem*);        
    void func_ov016_02177350(menu::MenuItem*, int active, int count);
    void func_02051900(menu::MenuItem*, int, int);   
    int  func_0202375c(void);               
}