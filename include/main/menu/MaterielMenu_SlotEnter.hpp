#pragma once
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"
#include "main/menu/MaterielMenuWindowManager.hpp"

struct MaterielMenu_SlotEnter : menu::MenuBase
{
    static int machineSelect_;

    int count_;         /* 0x1C */
    int enableFlag_;    /* 0x20 */
    int machine_;       /* 0x24 */

    virtual void menuSetup();
    virtual void menuDraw() {}
    virtual void menuExecute() {}
    virtual void menuUpdate();
    void setSlotType(int type);
    void enableUpdate();
};

extern "C" {
    MaterielMenuWindowManager* func_ov016_0216aca4(void); /* MaterielMenu_WINDOW_MANAGER::getSingleton */
    void func_ov016_0216b020(void);                   /* MaterielMenu_WINDOW_MANAGER::closeMaterielWindow */
    void func_ov016_0216acac(MaterielMenuWindowManager* self, int type);   /* MaterielMenu_WINDOW_MANAGER::openMaterielWindow */
}
