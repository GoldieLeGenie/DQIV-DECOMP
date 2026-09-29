#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"

struct COLL_HEADER;

namespace fld {

struct FLDRes_Tbl;
struct FLDRes_Dir;

struct FLDObjEntry                          // 0x50
{
    char         _pad00[0x20];
    VecFx32      pos;                       // 0x20
    char         _pad2c[0x4c - 0x2c];
    int          uid;                       // 0x4C
};

struct FLDObjTable
{
    char         _pad00[8];
    int          unk_08;                    // 0x08
    int          count;                     // 0x0C
    int          _pad10;
    short*       index;                     // 0x14
};

struct FLDSceneInfo
{
    char         _pad00[8];
    int          backColor;                 // 0x08
    char         _pad0c[0x18 - 0xc];
    int          cameraLimitR;              // 0x18
    int          cameraLimitL;              // 0x1C
};

struct FLDObject
{
    int          m_flag;                    // 0x000
    char         _pad004[0x8];              // 0x004
    FLDObjTable* m_objTable;                // 0x00C
    int          _pad010;                   // 0x010
    FLDSceneInfo* m_scene;                  // 0x014
    char         _pad018[0x228 - 0x18];     // 0x018
    FLDRes_Tbl*  field_228_;                // 0x228
    FLDRes_Dir*  field_22c_;                // 0x22C
    char         _pad230[0x238 - 0x230];    // 0x230
    char         unk_238[0x10];             // 0x238
    COLL_HEADER* m_coll;                // 0x248
    int          unk_24c;                   // 0x24C
    int          unk_250;                   // 0x250
    VecFx32 unk_254[2];                // 0x254
    VecFx32 unk_26c[2];                // 0x26C
    VecFx32 unk_284[2];                // 0x284
    char         _pad29c[0x2a8 - 0x29c];    // 0x29C
    int          unk_2a8;                   // 0x2A8
    char         _pad2ac[0x5b0 - 0x2ac];    // 0x2AC
    VecFx32      unk_5b0;                   // 0x5B0
    VecFx32      unk_5bc;                   // 0x5BC
    int          unk_5c8;                   // 0x5C8
    char         _pad5cc[0x5d4 - 0x5cc];    // 0x5CC
    VecFx32      m_rgb_rate;                // 0x5D4

    FLDObject();                            // func_020421bc
    ~FLDObject();                           // func_020421d8
    void SetSepia();
    void SetRGBRate(VecFx32* rate, int real_time);
};

}  // namespace fld

extern "C"
{
    void func_02044a48(fld::FLDObject*);
    void func_0204722c(fld::FLDObject*);
    void func_02047350(fld::FLDObject* self, fx32 r, fx32 g, fx32 b);
}

extern char data_020c1bcc[];

namespace fld {

struct FLDRes_DirEntry                      // 0x18
{
    char          name[0x10];               // 0x00
    unsigned char index;                    // 0x10
    unsigned char _pad11[7];                // 0x11
};

struct FLDRes_Dir
{
    char             _pad00[8];
    int              count;                 // 0x08
    FLDRes_DirEntry  entries[1];            // 0x0C
};

struct FLDRes_Tbl
{
    char  _pad00[0xC];
    void* res[1];                           // 0x0C
};

struct FLD_PLTT16  { short id; unsigned short col[0x10];  };   // 0x22
struct FLD_PLTT256 { short id; unsigned short col[0x100]; };   // 0x202

struct FLD_PLTT_SET
{
    char          _pad00[4];
    short         count;                    // 0x04
    short         flag;                     // 0x06
    unsigned char data[1];                  // 0x08
};

}  // namespace fld

extern "C"
{
    int  STD_CompareNString(const char*, const char*, int);
    void func_0204718c(fld::FLDObject*, unsigned short*, unsigned short*, int);
}