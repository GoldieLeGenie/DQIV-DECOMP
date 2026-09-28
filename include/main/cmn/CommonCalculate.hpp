#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"



namespace cmn {
    struct CommonCalculate {
        static void getDirByIdx(short dir, dss::Fx32Vector3& vec);
        static bool simpleAreaInCheck(dss::Fx32Vector3& min, dss::Fx32Vector3& max, dss::Fx32Vector3 pos);
        static bool areaCheck(dss::Fx32Vector3& pos, short dir, dss::Fx32Vector3& min, dss::Fx32Vector3& max, int check, int type);
        static bool directionCheckByScriptParam(int param, short dir);
        static int getFrameByVector(dss::Fx32Vector3& from, dss::Fx32Vector3& to, dss::Fx32 speed);
        static dss::Fx32Vector3 setVecByParam(int x, int y, int z);
        static short getIdxByParam(unsigned char param);
        static dss::Fx32Vector3 getAxisMoveTargetByParam(unsigned int axis, unsigned int mode, int value, dss::Fx32Vector3& pos);
    };
}


// direction per script param: 0x0000, 0x2000, 0x4000, 0x6000, -0x8000, -0x6000, -0x4000, -0x2000
extern const short data_020b5faa[8];