#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"
#include "main/data/DataObject.hpp"
#include "main/fld/FLDObject.hpp"
#include "main/object/ModelObject.hpp"
#include "main/dss/Render.hpp"

struct COLL_POLY;
struct COLL_HEADER;
struct FldStage;
struct FldCollision;

int unkfunc_020484ec(VecFx32* pos, VecFx32* rot, VecFx32* scale, VecFx32* box, dss::Fix32* rate);

extern "C" {
    void  func_0208532c(FldStage* stage, Render* render);
    void  func_02085348(FldStage* stage);
    void  func_020857a8(int index, dss::Fix32Vector3 scale);
    void  func_02084c78(int r, int g, int b);
    void  func_02083354(UnkModelMember* self, void* data);
    void  func_02083360(UnkModelMember* self);
    void  func_0208336c(UnkModelMember* self);
    int*  func_0207f88c(void* heap);
    void  func_02067940(const void* src, void* dst);              // MI_Copy36B
    void  func_0204bc50(FldCollision* coll);                       // FldCollision::searchClear

    void  func_02042428(fld::FLDObject* self, void* model, void* texture, void* coll, int heap);
    void  func_02045004(fld::FLDObject* self);
    void  func_0204545c(fld::FLDObject* self);
    void  func_02045e10(fld::FLDObject* self);
    void  func_02045f68(fld::FLDObject* self, int obj, int alpha, int flag);
    void  func_02045fd0(fld::FLDObject* self, int obj, int flag);
    void  func_02046034(fld::FLDObject* self, int obj, VecFx32* pos);
    void  func_02046194(fld::FLDObject* self, int uid, int flag);
    void  func_0204627c(fld::FLDObject* self, int uid, VecFx32* rot);
    void  func_020463e4(fld::FLDObject* self, int uid);                     // FLDObject::CollEraseMapUid
    void  func_02046558(fld::FLDObject* self, int obj, VecFx32* move);
    void  func_020465b4(fld::FLDObject* self, int anim);
    void  func_020468b8(fld::FLDObject* self, int obj, int frame);
    int   func_02046ba4(fld::FLDObject* self, int obj);
    int   func_02046c20(fld::FLDObject* self, int obj);
    VecFx32* func_02046e28(fld::FLDObject* self, int obj);
    int   func_02046e40(fld::FLDObject* self, int frame);
    int   func_02046eac(fld::FLDObject* self, int frame);
    int   func_02046f34(fld::FLDObject* self, int obj);

    int   func_0203f464(COLL_HEADER* coll, int poly, COLL_POLY* out);      // coll_GetPoly
    int   func_02040928(COLL_HEADER* coll, int poly);
    int   func_0204098c(COLL_HEADER* coll, int poly);                      // coll_GetSurface
    void  func_020409f0(COLL_HEADER* coll, int obj);
    int   func_02046f4c(fld::FLDObject* fld, int obj);                         // FLDObject::GetMapObjCommonId
    int   func_0204cf3c(FldCollision* coll, int surface, int obj);            // FldCollision::getFrontPoly
    void  func_02040a8c(COLL_HEADER* coll, int obj);
    int   func_02040b28(COLL_HEADER* coll, int surface, int index);
    int   func_02040bd4(COLL_HEADER* coll, int uid, int start);
    int   func_0204162c(COLL_HEADER* coll, VecFx32* start, VecFx32* dir, fx32 len, int poly, fx32* dist);   // coll_CrossCheck
    int   func_02041afc(int id, int face, COLL_HEADER* coll, COLL_POLY* poly, void* work, int flag);
    int   func_02053abc(COLL_HEADER* coll, int obj, int wall);

}

struct COLL_POLY {
    VecFx32 vertex[4];                          // 0x00
    VecFx32 normal;                             // 0x30
    unsigned short type;                        // 0x3C
    short id;                                   // 0x3E
    short flag;                                 // 0x40
    short obj_id;                               // 0x42
    VecFx32 bbox[2];                            // 0x44
    unsigned short uid;                         // 0x5C
};

struct COLL_HEADER {
    unsigned short poly_size;                   // 0x00
    unsigned short floor_poly_size;             // 0x02
    unsigned short wall_poly_size;              // 0x04
    unsigned short common_poly_size;            // 0x06
};

struct FldCollision {
    DataObject* m_coll;                         // 0x00
    fld::FLDObject* m_fld;                      // 0x04
    int* m_collisionFlag;                       // 0x08
    int m_id;                                   // 0x0C
    int m_exitType;                             // 0x10
    int m_polyIndex;                            // 0x14
    int m_polyIndexBak;                         // 0x18
    int m_floorPolygonNo;                       // 0x1C
    int m_surfaceType[14];                      // 0x20
    int m_surfacePolyNo[14];                    // 0x58
    int m_eraseSurfaceId[15];                   // 0x90
    int m_eraseSurfaceCount;                    // 0xCC
    int m_searchObjectId;                       // 0xD0
    int m_searchPolyNo;                         // 0xD4
    dss::Fix32 m_searchLen2;                    // 0xD8
    dss::Fix32 m_surfaceLen;                    // 0xDC
    COLL_POLY* m_nextList[30];                  // 0xE0
    int m_collPolyNo[30];                       // 0x158
    int m_collCount;                            // 0x1D0
    int m_crossCount;                           // 0x1D4
    dss::Fix32Vector3 m_playerDir;              // 0x1D8
    fx32 m_newX;                                // 0x1E4
    fx32 m_newY;                                // 0x1E8
    fx32 m_newZ;                                // 0x1EC
    fx32 m_preR;                                // 0x1F0
    fx32 m_radB;                                // 0x1F4
    fx32 m_radS;                                // 0x1F8
    VecFx32 m_dirVec32;                         // 0x1FC

    FldCollision();
    ~FldCollision();
    void computeCollFloor(dss::Fix32Vector3& pos, dss::Fix32 r, dss::Fix32Vector3& next);
    void searchFloorSurface(dss::Fix32Vector3& pos, dss::Fix32 r, dss::Fix32 len, dss::Fix32Vector3& out);
};

struct FldStage {
    // vtable                                   // 0x000
    void* m_item_place;                         // 0x004
    Render* m_render;                           // 0x008
    LZDataObject m_data;                        // 0x00C
    DataObject m_model;                         // 0x01C
    DataObject m_texture;                       // 0x02C
    DataObject m_coll;                          // 0x03C
    UnkModelMember m_anim;                      // 0x04C
    int unk_054;                                // 0x054
    fld::FLDObject m_fld;                       // 0x058
    char _pad638[0x660 - 0x638];                // 0x638
    int unk_660;                                // 0x660
    int unk_664;                                // 0x664
    dss::Fix32Vector3 scale_;                   // 0x668
    int collisionFlag_;                         // 0x674
    int collisionDrawFlag_;                     // 0x678
    int exitType_;                              // 0x67C
    char path_[32];                             // 0x680
    int obj_index[128];                         // 0x6A0
    int pool_counter;                           // 0x8A0
    int extraObjectNum_;                        // 0x8A4
    int unk_8a8;                                // 0x8A8
    int unk_8ac;                                // 0x8AC
    int unk_8b0;                                // 0x8B0

    FldStage();
    ~FldStage();
    void setRender(Render* render);
    void terminate();
    virtual void setup();
    virtual void cleanup();
    void setPath(const char* path);
    bool isExist(char* name);
    void load(char* name);
    virtual void draw();
    void execAnime();
    dss::Fix32 getCameraLimitR();
    dss::Fix32 getCameraLimitL();
    void eraseObject(int uid, int flag);
    void setMapUidOnOff(int uid, int flag);
    int eventAnim(int anim, int frame);
    void repop(int uid);
    void commonAnim(int obj, int frame);
    void animLocation(int id, int frame, int uidFlag);
    void setAnimLocation(int obj, int frame);
    void setAlpha(int obj, int alpha);
    void setFldColl(FldCollision* coll);
    bool collGetPolygonPos(int poly, dss::Fix32Vector3* pos);
    int collCrossCheckPoly(dss::Fix32Vector3& start, dss::Fix32Vector3& end, dss::Fix32* dist, int all);
    int collCrossCheckOtherNo(dss::Fix32Vector3& start, dss::Fix32Vector3& end, int no, dss::Fix32* dist);
    void setRotObjectUid(int uid, dss::Fix32Vector3& rot);
    int collGetPoly(int poly, COLL_POLY* out);
    void setPosByObjectID(int id, dss::Fix32Vector3& pos);
    static dss::Fix32Vector3 getFx32Vector3(const VecFx32& vec);
    static VecFx32 getVecFx32(const dss::Fix32Vector3& vec);
    bool getObjectIn(int uid, dss::Fix32Vector3& pos);
    int getObjWallNo(int obj, int wall);
    int getObjWallPolyNo(int obj, int wall);
    short getObjectRotIdxY(int obj);
    VecFx32 getUidPos(int uid);
    int* GetMapUidObj(int uid);
    bool IsCommonAnimationEnd(int uid);
    int addBoxCollistion(dss::Fix32Vector3& pos, dss::Fix32Vector3& size, int* id, int flag);
    int getPolyNoBySurfaceId(int surface, int index);
    void addMovePosByObjNo(int obj, dss::Fix32Vector3& move);
    int getCrossPolygonOtherSurface(dss::Fix32Vector3& start, dss::Fix32Vector3& end, short* surface, int count, int* poly, dss::Fix32* dist, int all);

    int collCrossCheck(VecFx32& start, VecFx32& end, int poly, fx32* dist) {
        if (poly == 0) {
            m_fld.unk_5b0 = start;
            func_02062f98(&end, &start, &m_fld.unk_5bc);
            func_020630ec(&m_fld.unk_5bc, &m_fld.unk_5bc);
            m_fld.unk_5c8 = func_0206338c(&start, &end);
        }
        return func_0204162c(m_fld.m_coll, &m_fld.unk_5b0, &m_fld.unk_5bc, m_fld.unk_5c8, poly, dist);
    }
};

