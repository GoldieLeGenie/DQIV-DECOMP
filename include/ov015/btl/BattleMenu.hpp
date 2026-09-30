#pragma once
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"

/*
 * ov015 battle menus. Class names, the virtuals and the fields marked "mobile"
 * come from libdq4core.so; DS-only members are named unk_XX.
 */

struct BattleMonsterNamePlate;

struct BattleMenu_NGMESSAGE : menu::MenuBase
{
    enum RETURN_MENU {
        MENU_ROOT = 0,
        MENU_ACTIONMENU = 1
    };

    int messageID_;                     /* 0x1C mobile */
    int returnPos_;                     /* 0x20 mobile */
    RETURN_MENU returnMenu_;            /* 0x24 mobile */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenuSub_HISTORY : menu::MenuBase
{
    int select_;                        /* 0x1C mobile */
    int history_;                       /* 0x20 mobile (bool) */
    int update_;                        /* 0x24 mobile (bool) */
    int isRedraw_;                      /* 0x28 mobile (bool) */
    int commandChara_;                  /* 0x2C mobile */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenu_ROOT : menu::MenuBase
{
    static const short MEMBER_MAX = 4;
    static const short CANCEL_WAIT_TIME = 8;
    static const short EXIT_WAIT_TIME = 120;
    static const short LAST_QUEST = 5;

    menu::MenuItem menuItem_;           /* 0x1C */
    menu::MenuItem cancelItem_;         /* 0x80 */
    menu::MenuNavigator navigator_;     /* 0xE4 */
    short unk_f0;                       /* 0xF0 */
    int unk_f4;                         /* 0xF4 */
    int unk_f8;                         /* 0xF8 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenu_ACTIONMENU : menu::MenuBase
{
    menu::MenuItem menuItem_;           /* 0x1C */
    menu::MenuItem pageItem_;           /* 0x80 */
    menu::MenuItem cancelItem_;         /* 0xE4 */
    int activeCharacter_;               /* 0x148 mobile */
    int unk_14c;                        /* 0x14C */
    menu::MenuNavigator navigator_;     /* 0x150 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
    int getUseActionNum(int chara);
    void selectAttack();
    void selectMagic();
    void selectItem();
    void selectDefence();
};

struct BattleMenu_MAGIC2PARTY : menu::MenuBase
{
    menu::MenuItem menuItem_;           /* 0x1C */
    menu::MenuItem cancelItem_;         /* 0x80 */
    int partyMax_;                      /* 0xE4 mobile */
    int unk_e8;                         /* 0xE8 */
    int magic_;                         /* 0xEC mobile */
    int activeMagicPos_;                /* 0xF0 mobile */
    menu::MenuNavigator navigator_;     /* 0xF4 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenu_ITEMUSE2PARTY : menu::MenuBase
{
    menu::MenuItem menuItem_;           /* 0x1C */
    menu::MenuItem cancelItem_;         /* 0x80 */
    int unk_e4;                         /* 0xE4 */
    int unk_e8;                         /* 0xE8 */
    int unk_ec;                         /* 0xEC */
    menu::MenuNavigator navigator_;     /* 0xF0 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenu_ARRAYMENU : menu::MenuBase
{
    int unk_1c;                         /* 0x1C */
    menu::MenuItem menuItem_;           /* 0x20 */
    menu::MenuItem cancelItem_;         /* 0x84 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

/* mobile */
struct TOUCHRECT
{
    short x;
    short y;
    short width;
    short height;
    short group;
};

struct BattleMenu_ATTACK : menu::MenuBase
{
    menu::MenuItem menuItem_;           /* 0x1C */
    menu::MenuItem cancelItem_;         /* 0x80 */
    int activeCharacter_;               /* 0xE4 mobile */
    int monsterMask_;                   /* 0xE8 mobile (bool) */
    int enemyMaxNum_;                   /* 0xEC mobile */
    TOUCHRECT touchRect_[12];           /* 0xF0 mobile */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenu_MAGIC2ENEMY : menu::MenuBase
{
    menu::MenuItem menuItem_;           /* 0x1C */
    menu::MenuItem cancelItem_;         /* 0x80 */
    int activeChara_;                   /* 0xE4 */
    int activeMagic_;                   /* 0xE8 */
    int activeMagicPos_;                /* 0xEC */
    int activeMagicIndex_;              /* 0xF0 */
    int enemyNumMax_;                   /* 0xF4 */
    int unk_f8;                         /* 0xF8 */
    TOUCHRECT touchRect_[12];           /* 0xFC */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenu_ITEMUSE2ENEMY : menu::MenuBase
{
    menu::MenuItem menuItem_;           /* 0x1C */
    int unk_80[25];                     /* 0x80 */
    menu::MenuItem cancelItem_;         /* 0xE4 */
    int unk_148;                        /* 0x148 */
    int unk_14c;                        /* 0x14C */
    int unk_150;                        /* 0x150 */
    int unk_154;                        /* 0x154 */
    int unk_158;                        /* 0x158 */
    int unk_15c;                        /* 0x15C */
    TOUCHRECT unk_160[12];              /* 0x160 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenu_ARRAY_CHANGE : menu::MenuBase
{
    int unk_1c;                         /* 0x1C */
    int unk_20;                         /* 0x20 */
    int unk_24;                         /* 0x24 */
    menu::MenuItem menuItem_;           /* 0x28 */
    menu::MenuItem unk_8c;              /* 0x8C */
    menu::MenuItem unk_f0;              /* 0xF0 */
    menu::MenuItem cancelItem_;         /* 0x154 */
    menu::MenuNavigator unk_1b8;        /* 0x1B8 */
    menu::MenuNavigator unk_1c4;        /* 0x1C4 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenu_ARRAY_ALL : menu::MenuBase
{
    int unk_1c[4];                      /* 0x1C */
    int unk_2c;                         /* 0x2C */
    int unk_30[25];                     /* 0x30 */
    menu::MenuItem menuItem_;           /* 0x94 */
    menu::MenuItem cancelItem_;         /* 0xF8 */
    menu::MenuNavigator navigator_;     /* 0x15C */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenu_TACTICSMENU : menu::MenuBase
{
    int unk_1c;                         /* 0x1C */
    int unk_20;                         /* 0x20 */
    int unk_24;                         /* 0x24 */
    int unk_28;                         /* 0x28 */
    int unk_2c[10];                     /* 0x2C */
    int unk_54;                         /* 0x54 */
    int unk_58[25];                     /* 0x58 */
    menu::MenuItem menuItem_;           /* 0xBC */
    menu::MenuItem unk_120;             /* 0x120 */
    menu::MenuItem cancelItem_;         /* 0x184 */
    menu::MenuNavigator unk_1e8;        /* 0x1E8 */
    menu::MenuNavigator unk_1f4;        /* 0x1F4 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
};

struct BattleMenuJudge
{
    int unk_00;                         /* 0x00 */
    int unk_04;                         /* 0x04 */
    int playerMaxNum_;                  /* 0x08 */
    int minadeinFlag_;                  /* 0x0C */
    TOUCHRECT touchRect_[12];           /* 0x10 */
};

struct BattleMenu_MAGIC : menu::MenuBase
{
    static const int BTL_ACT_MAX = 30;

    menu::MenuItem menuItem_;           /* 0x1C */
    menu::MenuItem cancelItem_;         /* 0x80 */
    menu::MenuItem unk_e4;              /* 0xE4 */
    menu::MenuNavigator navigator_;     /* 0x148 */
    int count_;                         /* 0x154 */
    int haveAction_[BTL_ACT_MAX];       /* 0x158 */
    int haveActionIndex_[BTL_ACT_MAX];  /* 0x1D0 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
    void setActiveMagicPos(int pos);
    void setMagicTargetFree(int magic);
};

/* objects (defined in the ov015 static-init unit) */
extern BattleMenu_NGMESSAGE gBattleMenu_NGMESSAGE;          /* 0x02179758 */
extern BattleMenuSub_HISTORY gBattleMenuSub_HISTORY;        /* 0x02179780 */
extern BattleMenu_ARRAYMENU gBattleMenu_ARRAYMENU;          /* 0x02179830 */
extern BattleMenu_ITEMUSE2PARTY gBattleMenu_ITEMUSE2PARTY;  /* 0x02179918 */
extern BattleMenu_ROOT gBattleMenu_ROOT;                    /* 0x02179a14 */
extern BattleMenu_MAGIC2PARTY gBattleMenu_MAGIC2PARTY;      /* 0x02179b10 */
extern BattleMenu_ACTIONMENU gBattleMenu_ACTIONMENU;        /* 0x02179ec4 */
extern BattleMenu_ARRAY_ALL gBattleMenu_ARRAY_ALL;          /* 0x0217a020 */
extern BattleMenu_ATTACK gBattleMenu_ATTACK;                /* 0x0217a188 */
extern BattleMenu_MAGIC2ENEMY gBattleMenu_MAGIC2ENEMY;      /* 0x0217a2f0 */
extern BattleMenu_ITEMUSE2ENEMY gBattleMenu_ITEMUSE2ENEMY;  /* 0x0217a634 */
extern BattleMenu_ARRAY_CHANGE gBattleMenu_ARRAY_CHANGE;    /* 0x0217a464 */
extern BattleMenu_TACTICSMENU gBattleMenu_TACTICSMENU;      /* 0x0217a80c */
extern BattleMenu_MAGIC gBattleMenu_MAGIC;                  /* 0x0217aa0c */
extern menu::MenuBase data_ov015_02179c10;                  /* item menu (not identified) */
extern menu::MenuBase data_ov015_02179d68;                  /* item menu (not identified) */

extern "C" {
    /* battle_monster_nameplate.cpp */
    BattleMonsterNamePlate* func_ov015_0216aa2c(void);
    void func_ov015_0216aa34(BattleMonsterNamePlate* self);
    void func_ov015_0216aa54(BattleMonsterNamePlate* self);
    void func_ov015_0216ad40(BattleMonsterNamePlate* self, int group);

    /* battlemenu_judge.cpp */
    BattleMenuJudge* func_ov015_0216c7b0(void);
    void func_ov015_0216c76c(BattleMenuJudge* self);
    void func_ov015_0216c874(BattleMenuJudge* self, int group);
    void func_ov015_0216c8a0(BattleMenuJudge* self, int magic, int group);
    int func_ov015_0216c9a8(BattleMenuJudge* self, TOUCHRECT* rect);
    void func_ov015_0216c84c(BattleMenuJudge* self, int page);
    void func_ov015_0216c8e4(BattleMenuJudge* self, int magic, int target);
    void func_ov015_0216c92c(BattleMenuJudge* self, int item, int group);
    void func_ov015_0216c968(BattleMenuJudge* self, int item, int target);
    int func_ov015_0216ca28(BattleMenuJudge* self);
    int func_ov015_0216ca58(BattleMenuJudge* self);
    void func_ov015_0216ca70(BattleMenuJudge* self);
    void func_ov015_0216cad8(BattleMenuJudge* self);

    /* menutemplate_battle.cpp */
    void func_ov015_0216c468(int chara);
    void func_ov015_0216c5c4(menu::MenuItem* menuItem);
    void func_ov015_0216c5d8(menu::MenuItem* menuItem, int count, int active);
    void func_ov015_0216c63c(menu::MenuItem* menuItem, int count);
    void func_ov015_0216c524(int* actions, int count, int chara);
    void func_ov015_0216c60c(menu::MenuItem* menuItem, int count);
    void func_ov015_0216c620(menu::MenuItem* menuItem, int active);
    void func_ov015_0216c650(menu::MenuItem* menuItem, int active);
    void func_ov015_0216c66c(menu::MenuItem* menuItem, int active, int count);
    void func_ov015_0216c688(menu::MenuItem* menuItem, int active, int count);
    void func_ov015_0216c6a4(menu::MenuItem* menuItem, int active, int count);
    void func_ov015_0216c6c0(menu::MenuItem* menuItem, int active, int count);
    void func_ov015_0216c6dc(menu::MenuItem* menuItem, int active, TOUCHRECT* rect, int count);
    void func_ov015_0216c734(menu::MenuItem* menuItem);

    /* BattleMenu_ATTACK: DS-only target decision (judge setAttack + setNextPlayer) */
    void func_ov015_0216ea10(BattleMenu_ATTACK* self);

    /* BattleMenu_ITEMUSE2ENEMY: DS-only helpers */
    void func_ov015_0216cd44(BattleMenu_ITEMUSE2ENEMY* self);
    void func_ov015_0216cd80(BattleMenu_ITEMUSE2ENEMY* self, int index);
    void func_ov015_0216cdc0(BattleMenu_ITEMUSE2ENEMY* self, int index);
    void func_ov015_0216ce00(BattleMenu_ITEMUSE2ENEMY* self);
    int func_ov015_0216cee0(BattleMenu_ITEMUSE2ENEMY* self);

    /* BattleMenu_MAGIC: DS-only helper (builds haveAction_ / haveActionIndex_) */
    void func_ov015_0216ded8(BattleMenu_MAGIC* self);

    /* BattleMenu_ARRAY_CHANGE: DS-only helpers */
    int func_ov015_0216f37c(BattleMenu_ARRAY_CHANGE* self);
    int func_ov015_0216f3c4(BattleMenu_ARRAY_CHANGE* self);
    int func_ov015_0216f4cc(BattleMenu_ARRAY_CHANGE* self);

    /* BattleMenu_ARRAY_ALL: DS-only helper */
    void func_ov015_0216f868(BattleMenu_ARRAY_ALL* self);

    /* BattleMenu_TACTICSMENU: DS-only helpers */
    int func_ov015_0216fb88(BattleMenu_TACTICSMENU* self);
    void func_ov015_0216fbdc(BattleMenu_TACTICSMENU* self);
    int func_ov015_0216fc4c(BattleMenu_TACTICSMENU* self);
    void func_ov015_0216fc98(BattleMenu_TACTICSMENU* self);
    void func_ov015_0216fcec(BattleMenu_TACTICSMENU* self);

    /* draw helpers */
    void func_ov015_0216b9c8(int flag);
    void func_ov015_0216b9e8(int flag);
    void func_ov015_0216ba54(int group);
    void func_ov015_0216baf4(int group);
    void func_ov015_0216bbc0(int group);
    void func_ov015_0216bbdc(void);
    void func_ov015_0216bc84(void);
    void func_ov015_0216bae8(void);
    void func_ov015_0216bb00(int* actions, int count, int page);
    void func_ov015_0216bbd0(void);
    void func_ov015_0216bd94(void);
    void func_ov015_0216bdd4(void);
    void func_ov015_0216be58(int* list, int count, int page);
    void func_ov015_0216bec8(int* list, int count, int* order, int orderCount);
}
