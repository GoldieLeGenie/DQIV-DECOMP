#pragma once
#include "main/menu/MenuBase.hpp"

/* layout only partially known: not decompiled yet */
struct MaterielMenu_NameEdit : menu::MenuBase
{
    enum RETURN_MENU_LIST {
        RETURN_MENU_LOAD = 0,
        RETURN_MENU_SURECHIGAI = 1,
        RETURN_MENU_SURECHIGAI_MESSAGE = 2,
        RETURN_MENU_SURECHIGAI_TOWNNAME = 3,
        RETURN_MENU_NULL = 4
    };

    unsigned char unk_1c[0x74];         /* 0x1C */
    RETURN_MENU_LIST returnMenu_;       /* 0x90,*/
    int unk_94;                         /* 0x94 */
    int unk_98;                         /* 0x98 */
};

extern MaterielMenu_NameEdit data_ov016_021865a4;           /* gMaterielMenu_NameEdit */

extern int data_020f17bc;                                    /* name edit: max length */
extern int data_020f17c0;                                    /* name edit: current length */
extern int data_020f1878[];                                  /* name edit: characters */

extern "C" {
    void func_0203afd0(MaterielMenu_NameEdit* self);
    void func_0203aff0(MaterielMenu_NameEdit* self);
    void func_0203b004(MaterielMenu_NameEdit* self);
    void func_0203b6cc(MaterielMenu_NameEdit* self);
    char* func_0203b708(MaterielMenu_NameEdit* self);
}
