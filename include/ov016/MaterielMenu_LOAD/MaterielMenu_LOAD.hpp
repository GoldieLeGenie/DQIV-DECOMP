#pragma once
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"
#include "ov016/MenuTemplate_materiel.hpp"
#include "main/menu/CatalogView.hpp"
#include "main/menu/MaterielMenu_NameEdit.hpp"

struct MaterielMenu_LOAD : menu::MenuBase
{
    enum LOAD_STATUS {
        LOAD_MODESELECT = 0,
        LOAD_RESUME = 1,
        LOAD_DATACHECK = 2,
        LOAD_DATASELECT = 3,
        LOAD_ISOVERLOAD = 4,
        LOAD_NAMEEDIT = 5,
        LOAD_SEXUALITY = 6,
        LOAD_WRITECHECK = 7,
        LOAD_DELETECHECK = 8,
        LOAD_LOADCHECK = 9,
        LOAD_BLANK = 10,
        LOAD_END = 11
    };
    static const int ROOT_COUNT;
    static const int ROOT_RESUME_COUNT;
    static int activeDiaryNo_;

    menu::MenuItem rootItem_;           /* 0x1C */
    menu::MenuItem dataItem_;           /* 0x80 */
    menu::MenuItem sexualityItem_;      /* 0xE4 */
    char unk_148[0xc];                  /* 0x148 */
    LOAD_STATUS status_;                /* 0x154 */
    int menuMode_;                      /* 0x158 */
    int messageCounter_;                /* 0x15C */
    int country_;                       /* 0x160 */
    int sexuality_;                     /* 0x164 */
    DiaryInfo diary_[3];                /* 0x168 */
    CatalogView* catalogview_;          /* 0x1B0 */
    int killResult_;                    /* 0x1B4 */
    int makeResult_;                    /* 0x1B8 */
    int resume_;                        /* 0x1BC */
    int frame_;                         /* 0x1C0 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
    void changeStatus(LOAD_STATUS status);
    bool deleteDiary();
    bool makeDiary();
    bool updateActiveDiary();
    void closeMessage();
    void rootUpdate();
    void dataSelectUpdate();
    void sexualityUpdate();
    void sexualityDraw();
    bool messageUpdate();
};

extern MaterielMenu_LOAD data_ov016_02187918;               /* gMaterielMenu_LOAD */

extern "C" {
    void func_ov016_02177484(menu::MenuItem* menuItem, int count);
    void func_ov016_0217752c(menu::MenuItem* menuItem);
    void func_ov016_021779b4(menu::MenuItem* menuItem);
    void func_ov016_02177c00(int x, int y, int w, int h, int color);
    void func_ov016_02177c9c(int* message, int count, int x, int y);
    void func_ov016_02177ce0(int* message, int count, int x, int y);
    void func_ov016_02177fe0(int* message, int x, int y, int w, int h);
    void func_ov016_0217800c(int index, char* name, int chapter, int level, int town, int time, int y, int flag);
    void func_ov016_021781c4(int country, int* name, int count, int max, int a, int b);
}
