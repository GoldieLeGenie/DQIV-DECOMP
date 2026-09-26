#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "main/fld/FLDObject.hpp"

struct TownStageManager;

extern "C" {
    void func_02047b04(TownStageManager* mgr, int id, int flag);
    void func_02046470(void* obj, int id);
    void func_02047b14(TownStageManager* mgr, int id, int flag);
}

struct TownStageManager {
    char unk_000[0x58];
    fld::FLDObject fldObject_;                                                      // 0x58
    char unk_638[0x8b4 - 0x638];
    char coll_[0x5c];                                                               // 0x8B4
    int unk_910;                                                                    // 0x910
    char unk_914[0xbb0 - 0x914];
    int unk_bb0;                                                                    // 0xBB0

    void setCollision(int id, int flag) { func_02047b04(this, id, flag); }
    void setCollisionObject(int id) { func_02046470(&fldObject_, id); }
    void eventAnim(int id, int flag) { func_02047b14(this, id, flag); }
    void setMapTexture(int texture) { unk_bb0 = texture; }
};

extern "C" {
    TownStageManager* func_ov000_02139668(void);                                    // TownStageManager::getSingleton
    int  func_ov000_0213a31c(TownStageManager* self, int type);                     // TownStageManager::getHitSurfaceIdByType
    int  func_ov000_02139fe8(TownStageManager* self, int exitNo, int group);
    void func_ov000_0213a2c4(TownStageManager* self, dss::Fx32Vector3* dir, int id);
    void func_02047d18(TownStageManager* self, int id, dss::Fx32Vector3* pos);
    void func_ov000_02130f54(short* dirIdx, dss::Fx32Vector3* dir);
    void func_0204ccf4(void* obj, int surfaceId, int flag);
}
