#pragma once
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"
#include "main/menu/MaterielMenu_SlotEnter.hpp"
#include "main/menu/MaterielMenuPlayerControl.hpp"


struct MaterielMenu_MARTIAL_COLOSSEUM : menu::MenuBase
{
    int mode_;          /* 0x1C */
    int activeChara_;   /* 0x20 */
    int wins_;          /* 0x24 */
    int itemIndex_;     /* 0x28 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
    void selectYes();
    void selectNo();
    void checkHaveYakusou();
    void checkUseYakusou();
    void useYakusou();
    void showMessage(int messageID1, int messageID2);
};



extern "C" {
    void func_ov016_0216fdc4(void);                         /* gMI_Chapter2Status.drawActive() */
}

extern MaterielMenu_MARTIAL_COLOSSEUM data_ov016_02185a34;  /* gMaterielMenu_MARTIAL_COLOSSEUM */
