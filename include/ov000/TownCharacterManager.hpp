#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"

struct TownCharacter {
    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual void vf10();
    virtual void vf14();
    virtual void vf18();
    virtual void vf1c();
    virtual void vf20();
    virtual void vf24();
    virtual void vf28();
    virtual void vf2c();
    virtual void vf30();
    virtual void vf34();
    virtual void vf38();
    virtual void vf3c(int value);
    char unk_04[0x88];
    int moveType_;
    dss::Fx32Vector3 movePos_[4];
    dss::Fx32 moveSpeed_;
    int unk_c4;
    int unk_c8;
    char unk_cc[0x161 - 0xcc];
    signed char unk_161;
};

struct TownCharacterManager;

extern "C" {
    void func_ov000_0212eb88(TownCharacter* chara, int value);
    void func_ov000_0212ddfc(TownCharacter* chara, int lock);
    int  func_ov000_02138744(TownCharacterManager* mgr, int index);
}

struct TownCharacterManager {
    int unk_0;
    TownCharacter* chara_[1];

    void setSureId(int index, int value) { func_ov000_0212eb88(chara_[index], value); }
    void setLockRot(int index, int lock) { func_ov000_0212ddfc(chara_[index], lock); }
    short getDirection(int index) { return func_ov000_02138744(this, index); }
};

extern "C" TownCharacterManager* func_ov000_02137f2c(void);
