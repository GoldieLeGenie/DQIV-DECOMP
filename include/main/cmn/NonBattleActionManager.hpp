#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "main/global/Global.hpp"
#include "ov000/TownCharacterManager.hpp"

struct TownStageManager;
struct TownPlayerManager;
struct FieldPlayerManager;

namespace cmn
{
    enum ACTION_EFFECT {
        ACTION_NONE=0,
        ACTION_TRAVELDOOR=1,
        ACTION_RIREMITO=2,
        ACTION_RANARUTA=3,
        ACTION_BATTLE=4
    };
    struct NonBattleActionManager {
        ACTION_EFFECT status_;
        int startFlag_;
        int waitTurn_;

        static NonBattleActionManager* getSingleton();
        void setAction(ACTION_EFFECT action);
        void execute();
    };

    extern NonBattleActionManager g_NonBattleActionManager;    // data_020ef9c8
}

extern "C" void func_020499a4(int);
extern "C" void func_0204b694(int);
extern "C" int func_02058114(void* global, int partId);
extern char data_0210bb94[];

struct UnkEffect_0202adc4 {
    virtual void vf00();
    virtual void vf04();
    virtual int  vf08();      
};
struct UnkManager_0202adc4 {
    char unk_000[0xc];
    UnkEffect_0202adc4* unk_c;  // 0x0C
    char unk_010[0xcc - 0x10];
    int unk_cc;                 // 0xCC
    char unk_0d0[0x130 - 0xd0];
    char unk_130[0x20];         // 0x130
    int unk_150;                // 0x150
};

extern "C" {
    UnkManager_0202adc4* func_0202adc4(void);                                 
    void func_0202aea4(UnkManager_0202adc4* self);
    void func_0202aec4(UnkManager_0202adc4* self, int type);
    void func_0208214c(void* obj, int a, int b);
    void func_02082144(void* obj, int a);
    void func_02030278(void* obj, int a);
    void func_02049b94(void);
    void func_02047a28(TownStageManager* self);
    void func_ov000_0213b5a0(void* obj);
    void func_ov000_02138210(void);
    void func_ov000_02133eac(TownPlayerManager* self, int a);
    void func_ov000_02133bfc(TownPlayerManager* self);
    void func_ov001_02129bfc(FieldPlayerManager* self);
}
extern char data_020c1328[8];
extern char data_0211c4f0[];
extern int data_020edc40;
