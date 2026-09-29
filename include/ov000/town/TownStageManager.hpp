#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "main/fld/FLDObject.hpp"
#include "main/fld/FldStage.hpp"

struct TownStageManager;

extern "C" {
    void func_02046470(void* obj, int id);
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
    FldStage stage_;                                                                // 0x000
    char coll_[0x5c];                                                               // 0x8B4
    int unk_910;                                                                    // 0x910
    char unk_914[0xabc - 0x914];
    TownDataManager townData_;                                                      // 0xABC
    char unk_ad0[0xb08 - 0xad0];
    char mapEffect_[0xbb0 - 0xb08];                                                 // 0xB08
    int unk_bb0;                                                                    // 0xBB0

    void setCollision(int id, int flag) { stage_.setMapUidOnOff(id, flag); }
    void setCollisionObject(int id) { func_02046470(&stage_.m_fld, id); }
    void eventAnim(int id, int flag) { stage_.eventAnim(id, flag); }
    void setMapTexture(int texture) { unk_bb0 = texture; }
    void setClipping(int clip) { stage_.unk_664 = clip; }
    VecFx32& GetCameraCentFX32(int no) { return stage_.m_fld.unk_254[no]; }
    VecFx32& GetCameraPosFX32(int no) { return stage_.m_fld.unk_26c[no]; }
    VecFx32& GetCameraUpFX32(int no) { return stage_.m_fld.unk_284[no]; }
    void setNextBackColor(int index) { townData_.setNextBackColor(index); }
    int getNextBackColor() { return townData_.getNextBackColor(); }
    void setClipDistance(dss::Fix32 dist) { stage_.m_fld.unk_2a8 = dist.value; }
};

extern "C" {
    TownStageManager* func_ov000_02139668(void);                                    // TownStageManager::getSingleton
    int  func_ov000_0213a31c(TownStageManager* self, int type);                     // TownStageManager::getHitSurfaceIdByType
    int  func_ov000_02139fe8(TownStageManager* self, int exitNo, int group);
    void func_ov000_0213a2c4(TownStageManager* self, dss::Fix32Vector3* dir, int id);
    void func_ov000_02130f54(short* dirIdx, dss::Fix32Vector3* dir);
    void func_0204ccf4(void* obj, int surfaceId, int flag);
}
