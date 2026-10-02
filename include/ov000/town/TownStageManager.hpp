#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "main/fld/FLDObject.hpp"
#include "main/fld/FldStage.hpp"
#include "ov000/town/TownDataManager.hpp"
#include "ov000/town/TownMapEffect.hpp"

struct TownStageManager;

extern "C" {
    void func_02046470(void* obj, int id);
    void func_02046118(fld::FLDObject* fld, int uid, int alpha, int priority);    /* FLDObject::SetMapUidAlpha */
    void func_0204c2e4(FldCollision* coll, dss::Fix32Vector3* pos, dss::Fix32Vector3* next, dss::Fix32 r, dss::Fix32Vector3* out); /* FldCollision::boxCompute */
    int  func_02046e10(fld::FLDObject* fld, int obj);                            /* FLDObject::GetMapObjUid */
    void func_0204c248(FldCollision* coll, dss::Fix32Vector3* oldPos, dss::Fix32Vector3* newPos, dss::Fix32 rad, dss::Fix32Vector3* retVec, int flag); /* FldCollision::characterColl */
    void  func_0204b850(FldCollision* coll, dss::Fix32Vector3* pos, int index);   /* FldCollision::setExitPosition */
    dss::Fix32Vector3 func_0204ba1c(FldCollision* coll, dss::Fix32Vector3& nowPos, dss::Fix32Vector3& nextPos, dss::Fix32 radius, dss::Fix32 surfaceRad, dss::Fix32 preR, dss::Fix32& height); /* FldCollision::compute */
    bool  func_0204c45c(FldCollision* coll, VecFx32* pos0, VecFx32* pos1, int polyNo);      /* FldCollision::checkCrossPolygon */
    int   func_0204c564(FldCollision* coll, VecFx32* pos0, VecFx32* pos1, int flag);        /* FldCollision::checkCrossNum */
    int   func_0204c64c(FldCollision* coll, VecFx32* pos0, VecFx32* pos1, int flag);        /* FldCollision::checkCrossNumCheckUnder */
    int   func_0204c740(FldCollision* coll, VecFx32 pos0, VecFx32 pos1, int surface, int flag, int* polyNo); /* FldCollision::checkCrossNumEraseSurface */
    int   func_0204c2d4(FldCollision* coll);                                     /* FldCollision::getSearchObjectId */
    int   func_0204c2dc(FldCollision* coll);                                     /* FldCollision::getSearchPolyNo */
    int   func_0204c558(FldCollision* coll, int type);                           /* FldCollision::getSurfaceByType */
    int   func_0204c874(FldCollision* coll, int objectId, int index, dss::Fix32Vector3* pos);
    void  func_0204cd6c(FldCollision* coll);                                     /* FldCollision::resetEraseSurface */
    void  func_020464fc(fld::FLDObject* fld, int uid, VecFx32* pos);            /* FLDObject::CollAddPolyPosByMapUid */
    void  func_020462f0(fld::FLDObject* fld, int uid, VecFx32* pos);            /* FLDObject::AddMapUidPosFX32 */
    void  func_02046208(fld::FLDObject* fld, int uid, VecFx32* pos);            /* FLDObject::SetMapUidPosFX32 */
    int   func_02047474(fld::FLDObject* fld, int obj);                          /* FLDObject::GetMapObjAlpha */
    char* func_0200bfc4(char* mapName, int index);                              /* StageLink::getName */
}
extern int data_0211d434;
extern "C" {
}

struct TownStageManager {
    FldStage stage_;                                                                // 0x000
    FldCollision coll_;                                                             // 0x8B4
    TownDataManager townData_;                                                      // 0xABC
    int allocFlag_;                                                                 // 0xAF0
    int softEraseObjId_[4];                                                         // 0xAF4
    int softEraseNum_;                                                              // 0xB04
    TownMapEffect mapEffect_;                                                       // 0xB08
    int stopScript_;                                                                // 0xBD4

    TownStageManager();
    ~TownStageManager();
    static TownStageManager* getSingleton();
    void initialize();
    void terminate();
    void execute();
    void draw();
    bool isStageExist(char* name);
    char* getLinkMapName();
    void setExitPosition(dss::Fix32Vector3* pos, int index);
    dss::Fix32Vector3 getMapUidPos(int uid);
    void addMapUidPosFX32(int uid, dss::Fix32Vector3& pos);
    void setMapUidPosFX32(int uid, dss::Fix32Vector3& pos);
    dss::Fix32Vector3 getRiseupPos(int uid, int type);
    void loadStage(char* name);
    void setObjectDraw(int uid, int flag, int frame);
    void rotObjectUid(int uid, short rot);
    void SetRGBRate(dss::Fix32Vector3& rate, int flag);
    void setTextureScaling(fx32 scaleX, fx32 scaleY);
    void getTextureScaling(fx32& scaleX, fx32& scaleY);
    void setEffect(TownMapEffect::EFFECT_TYPE type);
    int getOtherPolyNoBySurfaceId(int surface, int polyNo);
    dss::Fix32Vector3 getSurfaceDir(int surface);
    void setSoftErase(int objectId);
    void execSoftErase();
    int isEndSoftErase(int objectId);
    int getExitIndex();
    bool isPolyFacePosition(int polyNo, dss::Fix32Vector3& playerPos);
    int getCrossPolygonOtherSurface(dss::Fix32Vector3& start, dss::Fix32Vector3& end, short* surface, int count, int* poly, dss::Fix32* dist, int all);
    void collEraseMapUid(int uid);
    bool isRozariStage();
    static dss::Fix32 unkfunc_dataPad0();
    static dss::Fix32 unkfunc_dataPad1();

    void setCollision(int id, int flag) { stage_.setMapUidOnOff(id, flag); }
    void setCollisionObject(int id) { func_02046470(&stage_.m_fld, id); }
    void setCameraNo(int channel, int screen) { func_020422ec(&stage_.m_fld, channel, screen); }
    void eraseObject(int uid, int flag) { stage_.eraseObject(uid, flag); }
    void setAlpha(int obj, int alpha) { stage_.setAlpha(obj, alpha); }
    int getMapObjUid(int obj) { return func_02046e10(&stage_.m_fld, obj); }
    int getMapObjCommonId(int obj) { return obj == -1 ? -1 : func_02046f4c(&stage_.m_fld, obj); }
    int getObjWallNo(int obj, int wall) { return stage_.getObjWallNo(obj, wall); }
    void collEraseObject(int obj) { func_020409f0(stage_.m_fld.m_coll, obj); }
    void collResetObject(int obj) { func_02040a8c(stage_.m_fld.m_coll, obj); }
    void commonAnim(int obj, int frame) { stage_.commonAnim(obj, frame); }
    void setPosByObjectID(int id, dss::Fix32Vector3& pos) { stage_.setPosByObjectID(id, pos); }
    void searchFloorSurface(dss::Fix32Vector3& pos, dss::Fix32 r, dss::Fix32 len, dss::Fix32Vector3& out) { coll_.searchFloorSurface(pos, r, len, out); }
    void computeCollFloor(dss::Fix32Vector3& pos, dss::Fix32 r, dss::Fix32Vector3 next) { coll_.computeCollFloor(pos, r, next); }
    void eventAnim(int id, int flag) { stage_.eventAnim(id, flag); }
    void setMapTexture(int texture) { mapEffect_.m_enable = texture; }
    void setClipping(int clip) { stage_.unk_664 = clip; }
    void setBoxTest(int flag) { stage_.m_fld.m_box_test = flag; }
    VecFx32& GetCameraCentFX32(int no) { return stage_.m_fld.unk_254[no]; }
    VecFx32& GetCameraPosFX32(int no) { return stage_.m_fld.unk_26c[no]; }
    VecFx32& GetCameraUpFX32(int no) { return stage_.m_fld.unk_284[no]; }
    void setNextBackColor(int index) { townData_.setNextBackColor(index); }
    int getNextBackColor() { return townData_.getNextBackColor(); }
    void setClipDistance(dss::Fix32 dist) { stage_.m_fld.unk_2a8 = dist.value; }
    bool isCommonAnimationEnd(int uid) { return stage_.IsCommonAnimationEnd(uid); }
    void setMapUidAlpha(int uid, int alpha, int priority) { func_02046118(&stage_.m_fld, uid, alpha, priority); }
    void boxCompute(dss::Fix32Vector3& pos, dss::Fix32Vector3& next, dss::Fix32 r, dss::Fix32Vector3* out) { func_0204c2e4(&coll_, &pos, &next, r, out); }
    dss::Fix32Vector3 compute(dss::Fix32Vector3& nowPos, dss::Fix32Vector3& nextPos, dss::Fix32 radius, dss::Fix32 surfaceRad, dss::Fix32 preR, dss::Fix32& height);
    int getObjectIDfromMapUid(int mapUid);
    int getHitSurfaceIdByType(int type);
    bool checkCrossPolygon(dss::Fix32Vector3 pos0, dss::Fix32Vector3 pos1, int polyNo);
    int checkCrossNumEraseSurface(dss::Fix32Vector3& pos0, dss::Fix32Vector3& pos1, int surface, int flag, int& polyNo);
    bool getSearchPolyDirection(dss::Fix32Vector3& dir);
    dss::Fix32Vector3 getHitSurfaceDirByType(int type);
    dss::Fix32Vector3 getHitSurfacePosByType(int type);
    int getObjectPos(int objectId, int index, dss::Fix32Vector3* pos);
    bool addBoxCollision(dss::Fix32Vector3& center, dss::Fix32Vector3& vec, int& extraId);
    void addMovePosByObjNo(int objNo, dss::Fix32Vector3& nowPos, dss::Fix32Vector3& nextPos);
    bool isPolyFacePosition(int polyNo, dss::Fix32Vector3& playerPos, dss::Fix32 len);
    bool getPolyDirection(dss::Fix32Vector3& dir, int polyNo);
    int checkCrossNum(dss::Fix32Vector3& pos0, dss::Fix32Vector3& pos1, int flag);
    int checkCrossNumCheckUnder(dss::Fix32Vector3& pos0, dss::Fix32Vector3& pos1, int flag);
    void characoterColl(dss::Fix32Vector3& oldPos, dss::Fix32Vector3& newPos, dss::Fix32 rad, dss::Fix32Vector3* retVec, int flag)
    {
        func_0204c248(&coll_, &oldPos, &newPos, rad, retVec, flag);
    }
};

extern "C" {
    void func_0204ccf4(void* obj, int surfaceId, int flag);
}
