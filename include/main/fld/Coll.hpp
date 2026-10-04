#pragma once
#include <globaldefs.h>
#include "nitro/fx.hpp"

struct NNSFndAllocator;

struct COLL_LINE {
    short val;                                  // 0x00
    unsigned short poly_id;                     // 0x02
};

struct COLL_POLY {
    VecFx32 vertex[4];                          // 0x00
    VecFx32 normal;                             // 0x30
    unsigned short type;                        // 0x3C
    short id;                                   // 0x3E
    short flag;                                 // 0x40
    short obj_id;                               // 0x42
    VecFx32 bbox[2];                            // 0x44
    unsigned short uid;                         // 0x5C
    short pad;                                  // 0x5E
};

struct COLL_EXT_DATA {
    COLL_LINE* id_list;                         // 0x00
    int ext_num;                                // 0x04
    COLL_POLY ext_coll[1];                      // 0x08
};

struct COLL_HEADER {
    unsigned short poly_size;                   // 0x00
    unsigned short floor_poly_size;             // 0x02
    unsigned short wall_poly_size;              // 0x04
    unsigned short common_poly_size;            // 0x06
    unsigned int id_size;                       // 0x08
    VecFx32 check_point[2];                     // 0x0C
    COLL_POLY* poly;                            // 0x24
    COLL_EXT_DATA* ext_data;                    // 0x28
    COLL_LINE* x0;                              // 0x2C
    COLL_LINE* x1;                              // 0x30
    COLL_LINE* y0;                              // 0x34
    COLL_LINE* y1;                              // 0x38
    COLL_LINE* z0;                              // 0x3C
    COLL_LINE* z1;                              // 0x40
    char* check;                                // 0x44
    char* check2;                               // 0x48
};

// collision file as loaded: 0x10-byte file header, then the COLL_HEADER block
struct COLL_FILE {
    unsigned char unk_00[0x10];                 // 0x00
    COLL_HEADER header;                         // 0x10
};

extern "C" {
    int coll_GetPoly(COLL_HEADER* header, int poly_no, COLL_POLY* poly);
    int coll_Id2PolyNo(COLL_HEADER* header, int surface_id);
    int coll_CheckLinePoint(const VecFx32* posP, fx32 r, const VecFx32* posA, const VecFx32* posB, const VecFx32* nml, VecFx32* cross);
    int coll_SearchFloorPoly(COLL_HEADER* header, VecFx32* point, fx32 height, VecFx32* ret);
    int coll_GetNextMove(COLL_HEADER* header, VecFx32* old_center, VecFx32* center, fx32 r, VecFx32* ret);
    int coll_GetObjId(COLL_HEADER* header, int poly_no);
    int coll_GetSurface(COLL_HEADER* header, int poly_no);
    int coll_GetPolyNoByMapObj(COLL_HEADER* header, int obj_id, int start);
    int coll_TriangleIntersect(VecFx32* pos, VecFx32* dir, COLL_POLY* poly, int flag, fx32* ret_t, fx32* ret_u, fx32* ret_v);
    int coll_CrossCheck(COLL_HEADER* header, VecFx32* pos, VecFx32* dir, fx32 len, int start, fx32* ret_len);
    int coll_SearchFloorPoly2(COLL_HEADER* header, VecFx32* point, fx32 height, int start, fx32 judgeLen, VecFx32* ret);
    int coll_GetNextMoveBox(COLL_HEADER* header, VecFx32* old_center, VecFx32* center, fx32 r, VecFx32* ret);
    int   func_0203f368(COLL_HEADER* coll, NNSFndAllocator* allocator);    // coll_init
    void  func_020409f0(COLL_HEADER* coll, int obj);
    void  func_02040a8c(COLL_HEADER* coll, int obj);
    int   func_02040b28(COLL_HEADER* coll, int surface, int index);
    void  func_02041108(COLL_HEADER* coll, int poly, VecFx32* add);        // coll_AddPolyPos
    int   func_02041afc(int id, int face, COLL_HEADER* coll, COLL_POLY* poly, void* work, int flag);
    int   func_02053abc(COLL_HEADER* coll, int obj, int wall);
}
