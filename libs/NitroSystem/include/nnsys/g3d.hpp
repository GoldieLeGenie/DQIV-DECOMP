#pragma once
#include "nitro/fx.hpp"
#include "nnsys/fnd.hpp"

struct NNSG3dGlb {
    char unk_000[0xfc];
    unsigned int flag;                          // 0x0FC
    char unk_100[0x240 - 0x100];
    VecFx32 camPos;                             // 0x240
    VecFx32 camUp;                              // 0x24C
    VecFx32 camTarget;                          // 0x258
};

struct NNSG3dAnmObj {
    fx32 frame;                                 // 0x00
    fx32 ratio;                                 // 0x04
    void* resAnm;                               // 0x08
};

struct NNSG3dResDataBlockHeader {
    unsigned int kind;                          // 0x00
    unsigned int size;                          // 0x04
};

struct NNSG3dResDict {
    unsigned char revision;                     // 0x00
    unsigned char numEntry;                     // 0x01
    unsigned short sizeDictBlk;                 // 0x02
    unsigned short dummy_;                      // 0x04
    unsigned short ofsEntry;                    // 0x06
};

struct NNSG3dResDictEntryHeader {
    unsigned short sizeUnit;                    // 0x00
    unsigned short ofsName;                     // 0x02
    unsigned char data[4];                      // 0x04
};

struct NNSG3dResMdlInfo {
    unsigned char sbcType;                      // 0x00
    unsigned char scalingRule;                  // 0x01
    unsigned char texMtxMode;                   // 0x02
    unsigned char numNode;                      // 0x03
    unsigned char numMat;                       // 0x04
    unsigned char numShp;                       // 0x05
    unsigned char firstUnusedMtxStackID;        // 0x06
    unsigned char dummy_;                       // 0x07
    fx32 posScale;                              // 0x08
    fx32 invPosScale;                           // 0x0C
    unsigned short numVertex;                   // 0x10
    unsigned short numPolygon;                  // 0x12
    unsigned short numTriangle;                 // 0x14
    unsigned short numQuad;                     // 0x16
    fx16 boxX;                                  // 0x18
    fx16 boxY;                                  // 0x1A
    fx16 boxZ;                                  // 0x1C
    fx16 boxW;                                  // 0x1E
    fx16 boxH;                                  // 0x20
    fx16 boxD;                                  // 0x22
    fx32 boxPosScale;                           // 0x24
    fx32 boxInvPosScale;                        // 0x28
};

struct NNSG3dResMdl {
    unsigned int size;                          // 0x00
    unsigned int ofsSbc;                        // 0x04
    unsigned int ofsMat;                        // 0x08
    unsigned int ofsShp;                        // 0x0C
    unsigned int ofsEvpMtx;                     // 0x10
    NNSG3dResMdlInfo info;                      // 0x14
};

struct NNSG3dResMdlSet {
    NNSG3dResDataBlockHeader header;            // 0x00
    NNSG3dResDict dict;                         // 0x08
};

struct NNSG3dResDictMdlSetData {
    unsigned int offset;                        // 0x00
};

struct NNSG3dResTexInfo {
    unsigned int vramKey;                       // 0x00
    unsigned short sizeTex;                     // 0x04
    unsigned short ofsDict;                     // 0x06
    unsigned short flag;                        // 0x08
    unsigned short dummy_;                      // 0x0A
    unsigned int ofsTex;                        // 0x0C
};

struct NNSG3dResTex4x4Info {
    unsigned int vramKey;                       // 0x00
    unsigned short sizeTex;                     // 0x04
    unsigned short ofsDict;                     // 0x06
    unsigned short flag;                        // 0x08
    unsigned short dummy_;                      // 0x0A
    unsigned int ofsTex;                        // 0x0C
    unsigned int ofsTexPlttIdx;                 // 0x10
};

struct NNSG3dResPlttInfo {
    unsigned int vramKey;                       // 0x00
    unsigned short sizePltt;                    // 0x04
    unsigned short flag;                        // 0x06
    unsigned short ofsDict;                     // 0x08
    unsigned short dummy_;                      // 0x0A
    unsigned int ofsPlttData;                   // 0x0C
};

struct NNSG3dResTex {
    NNSG3dResDataBlockHeader header;            // 0x00
    NNSG3dResTexInfo texInfo;                   // 0x08
    NNSG3dResTex4x4Info tex4x4Info;             // 0x18
    NNSG3dResPlttInfo plttInfo;                 // 0x2C
    NNSG3dResDict dict;                         // 0x3C
};

struct NNSG3dRenderObj {
    unsigned int flag;                          // 0x00
    NNSG3dResMdl* resMdl;                       // 0x04
};

struct NNSG3dRS {
    unsigned char* c;                           // 0x00
};

struct NNSG3dGeBuffer {
    unsigned int idx;                           // 0x000
    unsigned int data[0xc0];                    // 0x004
};

typedef void (*NNSG3dFuncSbc)(NNSG3dRS* rs, unsigned int opt);

inline void* NNS_G3dGetResDataByIdx(const NNSG3dResDict* dict, unsigned int idx)
{
    NNSG3dResDictEntryHeader* p = (NNSG3dResDictEntryHeader*)((unsigned char*)dict + dict->ofsEntry);
    return (void*)(&p->data[0] + p->sizeUnit * idx);
}

struct NNSG3dResShpData {
    unsigned short itemTag;                     // 0x00
    unsigned short size;                        // 0x02
    unsigned int flag;                          // 0x04
    unsigned int ofsDL;                         // 0x08
    unsigned int sizeDL;                        // 0x0C
};

struct NNSG3dResShp {
    NNSG3dResDict dict;                         // 0x00
};

struct NNSG3dResDictShpData {
    unsigned int offset;                        // 0x00
};

inline NNSG3dResShp* NNS_G3dGetShp(const NNSG3dResMdl* mdl)
{
    return (NNSG3dResShp*)((unsigned char*)mdl + mdl->ofsShp);
}

inline NNSG3dResShpData* NNS_G3dGetShpDataByIdx(const NNSG3dResShp* shp, unsigned int idx)
{
    const NNSG3dResDictShpData* data = (NNSG3dResDictShpData*)NNS_G3dGetResDataByIdx(&shp->dict, idx);
    return (NNSG3dResShpData*)((unsigned char*)shp + data->offset);
}

inline unsigned int* NNS_G3dGetShpDLPtr(const NNSG3dResShpData* shpData)
{
    return (unsigned int*)((unsigned char*)shpData + shpData->ofsDL);
}

inline unsigned int NNS_G3dGetShpDLSize(const NNSG3dResShpData* shpData)
{
    return shpData->sizeDL;
}

struct NNSG3dResMat {
    unsigned short ofsTextureMatchDict;         // 0x00
    unsigned short ofsPaletteMatchDict;         // 0x02
    NNSG3dResDict dict;                         // 0x04
};

inline NNSG3dResMat* NNS_G3dGetMat(const NNSG3dResMdl* mdl)
{
    return (NNSG3dResMat*)((unsigned char*)mdl + mdl->ofsMat);
}

struct NNSG3dResName {
    char name[16];                              // 0x00
};

struct NNSG3dResDictPlttData {
    unsigned short offset;                      // 0x00
    unsigned short flag;                        // 0x02
};

inline const NNSG3dResName* NNS_G3dGetResNameByIdx(const NNSG3dResDict* dict, unsigned int idx)
{
    NNSG3dResDictEntryHeader* p = (NNSG3dResDictEntryHeader*)((unsigned char*)dict + dict->ofsEntry);
    return (NNSG3dResName*)((unsigned char*)p + p->ofsName) + idx;
}

inline NNSG3dResMdl* NNS_G3dGetMdlByIdx(const NNSG3dResMdlSet* mdlSet, unsigned int idx)
{
    const NNSG3dResDictMdlSetData* data = (NNSG3dResDictMdlSetData*)NNS_G3dGetResDataByIdx(&mdlSet->dict, idx);
    return (NNSG3dResMdl*)((unsigned char*)mdlSet + data->offset);
}

extern "C" {
    NNSG3dResTex* func_0206e8d0(void* file);                                    // NNS_G3dGetTex
    NNSG3dResMdlSet* func_0206e8c0(void* file);                                 // NNS_G3dGetMdlSet
    NNSG3dRenderObj* func_0206e3d8(NNSFndAllocator* allocator);                 // NNS_G3dAllocRenderObj
    void func_0206e3e8(NNSFndAllocator* allocator, NNSG3dRenderObj* obj);      // NNS_G3dFreeRenderObj
    void func_0206a34c(NNSG3dRenderObj* obj, NNSG3dResMdl* mdl);               // NNS_G3dRenderObjInit
    void G3d_Render(NNSG3dRenderObj* obj);                                      // NNS_G3dDraw
    void func_0206e4e4(NNSG3dResMdl* mdl, unsigned int matID, unsigned short col);
    void func_0206e528(NNSG3dResMdl* mdl, unsigned int matID, unsigned short col);
    void func_0206e56c(NNSG3dResMdl* mdl, unsigned int matID, unsigned short col);
    void func_0206e5b0(NNSG3dResMdl* mdl, unsigned int matID, unsigned short col);
    void func_0206e5f4(NNSG3dResMdl* mdl, unsigned int matID, unsigned int alpha);   // NNS_G3dMdlSetMdlAlpha
    unsigned int func_0206e630(const NNSG3dResMdl* mdl, unsigned int matID);   // NNS_G3dMdlGetMdlAlpha
    void* func_0206e664(const NNSG3dResDict* dict, const void* name);          // NNS_G3dGetResDataByName
    int  func_0206e7a0(const NNSG3dResDict* dict, const void* name);           // NNS_G3dGetResDictIdxByName
    void func_0206dcb0(NNSG3dGeBuffer* buffer);                                // NNS_G3dGeSetBuffer
    NNSG3dGeBuffer* func_0206dcd0(void);                                       // NNS_G3dGeReleaseBuffer
    void func_0206de34(unsigned int op, const void* args, unsigned int num);   // NNS_G3dGeBufferOP_N
    void func_0206b294(int* x1, int* y1, int* x2, int* y2);                    // NNS_G3dGlbGetViewPort
    void func_0206e154(int x, int y, VecFx32* near, VecFx32* far);             // NNS_G3dScrPosToWorldLine
    void func_0206dd70(int flag);
    void G3d_SBCRender_007(NNSG3dRS* rs, unsigned int opt);
    void G3d_SBCRender_008(NNSG3dRS* rs, unsigned int opt);
}

extern NNSG3dFuncSbc data_020c3f5c[];           // NNS_G3dFuncSbcTable

extern NNSG3dGlb data_0210cf28;                 // NNS_G3dGlb
extern MtxFx44 data_0210cf30;                   // NNS_G3dGlb.projMtx
extern MtxFx43 data_0210cf74;                   // NNS_G3dGlb.cameraMtx
extern MtxFx33 data_0210cfe4;                   // NNS_G3dGlb.prmBaseRot
