#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "main/fld/FLDObject.hpp"

struct TownStageManager;

extern "C" {
    void func_02047b04(TownStageManager* mgr, int id, int flag);
    void func_02046470(void* obj, int id);
    void func_02047b14(TownStageManager* mgr, int id, int flag);
    void func_ov000_02139f1c(TownStageManager* mgr, dss::Fix32Vector3* rate, int flag);
}

struct TownDataManager {
    int correctTime_;
    dss::Fix32Vector3 rate_;
    int nextIndex_;

    void setNextBackColor(int index) { nextIndex_ = index; }
    int getNextBackColor() { return nextIndex_; }
};

struct TownStageManager;
extern "C" {
}

struct TownStageManager {
    char unk_000[0x58];
    fld::FLDObject fldObject_;                                                      // 0x58
    char unk_638[0x664 - 0x638];
    int unk_664;                                                                    // 0x664
    char unk_668[0x8b4 - 0x668];
    char coll_[0x5c];                                                               // 0x8B4
    int unk_910;                                                                    // 0x910
    char unk_914[0xabc - 0x914];
    TownDataManager townData_;                                                      // 0xABC
    char unk_ad0[0xb08 - 0xad0];
    char mapEffect_[0xbb0 - 0xb08];                                                 // 0xB08
    int unk_bb0;                                                                    // 0xBB0

    void setCollision(int id, int flag) { func_02047b04(this, id, flag); }
    void setCollisionObject(int id) { func_02046470(&fldObject_, id); }
    void eventAnim(int id, int flag) { func_02047b14(this, id, flag); }
    void setMapTexture(int texture) { unk_bb0 = texture; }
    void setClipping(int clip) { unk_664 = clip; }
    VecFx32& GetCameraCentFX32(int no) { return fldObject_.unk_254[no]; }
    VecFx32& GetCameraPosFX32(int no) { return fldObject_.unk_26c[no]; }
    VecFx32& GetCameraUpFX32(int no) { return fldObject_.unk_284[no]; }
    void setNextBackColor(int index) { townData_.setNextBackColor(index); }
    int getNextBackColor() { return townData_.getNextBackColor(); }
    void setClipDistance(dss::Fix32 dist) { fldObject_.unk_2a8 = dist.value; }
};

extern "C" {
    TownStageManager* func_ov000_02139668(void);                                    // TownStageManager::getSingleton
    int  func_ov000_0213a31c(TownStageManager* self, int type);                     // TownStageManager::getHitSurfaceIdByType
    int  func_ov000_02139fe8(TownStageManager* self, int exitNo, int group);
    void func_ov000_0213a2c4(TownStageManager* self, dss::Fix32Vector3* dir, int id);
    void func_02047d18(TownStageManager* self, int id, dss::Fix32Vector3* pos);
    void func_ov000_02130f54(short* dirIdx, dss::Fix32Vector3* dir);
    void func_0204ccf4(void* obj, int surfaceId, int flag);
}
