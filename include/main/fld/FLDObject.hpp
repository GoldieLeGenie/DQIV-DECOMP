#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"

namespace fld {

struct FLDRes_Tbl;
struct FLDRes_Dir;

struct FLDObject
{
    int          m_flag;                    // 0x000
    char         _pad004[0x224];            // 0x004
    FLDRes_Tbl*  field_228_;                // 0x228
    FLDRes_Dir*  field_22c_;                // 0x22C
    char         _pad230[0x3A4];            // 0x230
    dss::VecFx32      m_rgb_rate;                // 0x5D4

    void SetSepia();
    void SetRGBRate(dss::VecFx32* rate, int real_time);
};

}  // namespace fld

extern "C"
{
    void func_02044a48(fld::FLDObject*);
    void func_0204722c(fld::FLDObject*);
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
    int  func_0207c3b0(const char*, const char*, int);
    void func_0204718c(fld::FLDObject*, unsigned short*, unsigned short*, int);
}