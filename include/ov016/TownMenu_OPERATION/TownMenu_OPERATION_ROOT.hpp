#pragma once
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"
#include "main/menu/CursorMoveGridLoop.hpp"
#include "main/status/UseActionParam.hpp"

// town operation menu root 
struct TownMenu_OPERATION_ROOT : menu::MenuBase
{
    menu::MenuItem menuItem_;               /* 0x1C */
    menu::MenuItem cancelItem_;             /* 0x80 */
    menu::MenuItem sortItem_;               /* 0xE4 */
    menu::MenuItem charaItem_;              /* 0x148 */
    int unk_1ac;                            /* 0x1AC */
    unsigned char mode_;                    /* 0x1B0 */
    char command_[9];                       /* 0x1B1 */
    unsigned char commandCount_;            /* 0x1BA */
    unsigned char abort_;                   /* 0x1BB */
    unsigned char saveCount_;               /* 0x1BC */
    int saveResult_;                        /* 0x1C0 */
    int isMantan_;                          /* 0x1C4 */
    int useKiari_;                          /* 0x1C8 */
    unsigned char seCount_;                 /* 0x1CC */
    unsigned short actionIndex_;            /* 0x1CE */
    CursorMoveGridLoop navigator_;          /* 0x1D0 */
    CursorMoveGridLoop sortNavigator_;      /* 0x1DC */
    CursorMoveGridLoop charaNavigator_;     /* 0x1E8 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
    void unkfunc_0217a278();
    void unkfunc_0217a2a0();
    void unkfunc_0217a318();
    void unkfunc_0217a3e0();
    void unkfunc_0217a438();
    int unkfunc_0217a4e4(char* command);
    void allRecoveryMessage(status::UseActionParam& useActionParam);
    void unkfunc_0217a67c();
};

extern TownMenu_OPERATION_ROOT data_ov016_02188d3c;    /* gTownMenu_OPERATION_ROOT */
extern menu::MenuBase data_ov016_02188f30;             /* gTownMenu_OPERATION_EQUIP */
extern menu::MenuBase data_ov016_02188140;             /* gTownMenu_OPERATION_SHIFT_PARTY */
extern menu::MenuBase data_ov016_02188734;             /* gTownMenu_OPERATION_TACTICS */
extern menu::MenuBase data_ov016_0218912c;             /* gTownMenu_OPERATION_SETTING */

extern "C" {
    // operation menu drawing helpers
    void func_ov016_02173a54(menu::MenuItem* menuItem, int active, int count);
    void func_ov016_02173bf4(menu::MenuItem* menuItem, int count, int active, int arg3, int arg4);
    void func_ov016_02173cb0(menu::MenuItem* menuItem, int count, int active);
    void func_ov016_02173d04(menu::MenuItem* menuItem, int active);
    void func_ov016_0217dcb0(int mode, char* command, int count, int chara);
}
