#pragma once
#include "globaldefs.h"
#include "main/status/PartyStatus.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/global/Global.hpp"
#include "main/menu/MenuBase.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "ov000/Commands/TownCommand.hpp"

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
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
    void memberUpdate();
    void memberChange();
    int isHostage();

};

extern int data_020ed28c;
extern "C" {
    MaterielMenuWindowManager* func_ov016_0216aca4(void);   

    void func_02023504(void* cursor, int a, int b, int count);
    int  func_02023274(void* list, void* cursor);                /* poll → 0/2/3 */
    void func_02052408(void* mgr);      /* candidat closeMessage — orphelin mobile */
    void func_02054364(int slot, int type, int value);   /* TextAPI::setMACRO0 */
    void func_02030f60(cmn::GameManager*);
    void func_020499a4(int);
    void func_ov016_0216b020(void);
    int  func_0205241c(void*);          /* MenuBase::isOpen */
    void func_ov016_0216b020(void);     /* closeMaterielWindow */
    void func_ov016_0216fdb8(void);       
    void func_02051968(menu::MenuItem*);        
    void func_ov016_02177350(menu::MenuItem*, int active, int count);
    void func_02051900(menu::MenuItem*, int, int);   
    int  func_0202375c(void);               
}