#pragma once
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"
#include "main/menu/MaterielMenu_SlotEnter.hpp"
#include "main/menu/MaterielMenuPlayerControl.hpp"
#include "main/menu/MaterielMenu_SAVE.hpp"
#include "main/menu/MaterielMenu_NameEdit.hpp"

struct MaterielMenu_SURECHIGAI_MAKE_TAISHI : menu::MenuBase
{
    signed char mode_;                  /* 0x1C */
    int firstFlag_;                     /* 0x20 */
    int changeTaishi_;                  /* 0x24 */
    menu::MenuItem menuItem_;           /* 0x28 */
    CursorMoveGridLoop navigator_;     /* 0x8C */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct MaterielMenu_SURECHIGAI_ROOT : menu::MenuBase
{
    int mode_;                          /* 0x1C */
    int firstFlag_;                     /* 0x20 */
    menu::MenuItem menuItem_;           /* 0x24 */
    CursorMoveGridLoop navigator_;     /* 0x88 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
    void selectCommand();
};

extern menu::MenuBase data_ov016_02185ca0;                          /* surechigai list menu, not decompiled yet */
extern menu::MenuBase data_ov016_02185d30;                          /* surechigai list menu, not decompiled yet */
extern MaterielMenu_SURECHIGAI_ROOT data_ov016_02185dc4;
extern MaterielMenu_SURECHIGAI_MAKE_TAISHI data_ov016_02185e58;

extern "C" {
    int func_02038140(void* obj);
    int func_0203a364(void* mgr);
    int func_0203a388(void* mgr);
    void func_0203aa00(void* mgr);
    void func_0203aa58(void* mgr);
    void func_0203aaac(void* mgr);
    void func_ov016_0216fe58(void);
    void func_ov016_0216fe9c(int mode, int active, int page, int value);
}
