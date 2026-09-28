#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"

struct TownCharacterBase {
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
    virtual void vf40();
    virtual void vf44();
    virtual void vf48();
    virtual void vf4c();
    virtual void vf50();
    virtual void vf54(unsigned char r, unsigned char g, unsigned char b, int frame);
    virtual bool vf58();
    virtual void vf5c();
    virtual void vf60();
    virtual void vf64();
    virtual void vf68();
    virtual void vf6c();
    virtual void vf70(int motion, int flag);
    virtual bool vf74();
    virtual void vf78();
    virtual void vf7c();
    virtual void vf80();
    virtual void vf84(int value);
    char unk_04[0x88];
    int moveType_;
    dss::Fix32Vector3 movePos_[4];
    dss::Fix32 moveSpeed_;
    int unk_c4;
    int unk_c8;
    char unk_cc[0x161 - 0xcc];
    signed char unk_161;
};

struct TownCharacterManager;

extern "C" {
    void func_ov000_0212eb88(TownCharacterBase* chara, int value);
    void func_ov000_0212ddfc(TownCharacterBase* chara, int lock);
    void func_ov000_0212ea00(TownCharacterBase* chara, int value);
    void func_ov000_0212e918(TownCharacterBase* chara, int value);
    void func_ov000_0212e900(TownCharacterBase* chara, int value);
    void func_ov000_0212ea4c(TownCharacterBase* chara, int value);
    int  func_ov000_02138744(TownCharacterManager* mgr, int index);
}

struct TOWN_CHARACTER {
    bool enable;                                // 0x00
    int index;                                  // 0x04
    int charaIndex;                             // 0x08
    int dir;                                    // 0x0C
    int ctrlNo;                                 // 0x10
    dss::Fix32Vector3 position;                  // 0x14
    dss::Vector2<int> position2d[2];            // 0x20
    dss::Flag flag;                             // 0x30
};

struct TownCharacterManager {
    int townCharacterCount_;
    TownCharacterBase* character_[32];

    void setSureId(int index, int value) { func_ov000_0212eb88(character_[index], value); }
    void setLockRot(int index, int lock) { func_ov000_0212ddfc(character_[index], lock); }
    short getDirection(int index) { return func_ov000_02138744(this, index); }
    void setSwingRound(int index, int value) { func_ov000_0212ea00(character_[index], value); }
    void setMonsterTalk(int index, int value) { func_ov000_0212e918(character_[index], value); }
    void setMapUid(int index, int uid) { character_[index]->vf84(uid); }
    void setLockMove(int index, int lock) { func_ov000_0212e900(character_[index], lock); }
    void setAction(int index, int value) { func_ov000_0212ea4c(character_[index], value); }
    void setMotion(int index, int motion, int flag) { character_[index]->vf70(motion, flag); }
};

extern "C" TownCharacterManager* func_ov000_02137f2c(void);
extern "C" int func_ov000_02138084(TownCharacterManager* manager, TOWN_CHARACTER* chara);   // TownCharacterManager::setup(TOWN_CHARACTER&)
