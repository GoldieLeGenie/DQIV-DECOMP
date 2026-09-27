#pragma once
#include "main/dss/DssUtils.hpp"

namespace cmn {
    struct MoveBase {
        dss::Fx32Vector3 targetPos_;            // 0x00
        dss::Fx32Vector3 startPos_;             // 0x0C
        dss::Fx32Vector3 moveVec_;              // 0x18
        dss::Vector3<short> targetDirIdx_;      // 0x24
        dss::Vector3<short> startDirIdx_;       // 0x2A
        dss::Vector3<short> rotIdx_;            // 0x30
        short endMoveFrame_;                    // 0x36
        short endRotFrame_;                     // 0x38
        short moveCounter_;                     // 0x3A
        short rotCounter_;                      // 0x3C
        short dampFrame_;                       // 0x3E
        short ampFrame_;                        // 0x40
        int rotFlag_;                           // 0x44
        int moveFlag_;                          // 0x48
        int moveLock_;                          // 0x4C
        int moveType_;                          // 0x50

        MoveBase() : targetDirIdx_(), startDirIdx_(), rotIdx_() {}
    };
}

extern "C" {
    void func_020310f4(cmn::MoveBase* move, dss::Fx32Vector3* pos);
    void func_02031154(cmn::MoveBase* move, dss::Vector3short* angle);
    int func_02031160(cmn::MoveBase* move);
    int func_020311c8(cmn::MoveBase* move);
    bool func_020311d4(cmn::MoveBase* move);
    void func_020311f0(cmn::MoveBase* move, dss::Fx32Vector3* start, dss::Fx32Vector3* target);
    void func_0203122c(cmn::MoveBase* move, dss::Vector3short* start, dss::Vector3short* target);
    void func_020312e8(cmn::MoveBase* move, int frame);
    void func_0203133c(cmn::MoveBase* move, int frame, int type);
    void func_020315fc(cmn::MoveBase* move, short speed);
    void func_020316f4(cmn::MoveBase* move, dss::Fx32Vector3* start, dss::Fx32Vector3* target, int a, int b, int c);
    void func_02031908(cmn::MoveBase* move, dss::Fx32Vector3* start, dss::Fx32Vector3* target, int count);
    void func_02031d04(cmn::MoveBase* move, dss::Fx32Vector3* start, dss::Fx32Vector3* target, int frame);
}
