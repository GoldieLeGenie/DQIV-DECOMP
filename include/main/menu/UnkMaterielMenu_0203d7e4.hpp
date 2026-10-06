#pragma once
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"
#include "main/menu/CursorMoveGridLoop.hpp"

// materiel menu whose code (main 0x0203d7e4-0x0203da14) is not decompiled yet, named after its menuSetup address
struct UnkMaterielMenu_0203d7e4 : menu::MenuBase
{
    menu::MenuItem menuItem_;           /* 0x1C */
    CursorMoveGridLoop navigator_;     /* 0x80 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

extern UnkMaterielMenu_0203d7e4 gUnkMaterielMenu_0203d7e4;
