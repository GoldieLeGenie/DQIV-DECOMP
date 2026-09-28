#include "ov003/btl/BattleCameraHoming.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"
#include "main/object/DSSAObject.hpp"
#include "nitro/fx/fx_atan.h"
#include "nitro/fx/fx_division.h"

THUMB BattleCameraHoming::BattleCameraHoming()
{
    init();
}

THUMB BattleCameraHoming::~BattleCameraHoming()
{
}

THUMB void BattleCameraHoming::setup(dss::Fix32Vector3 target, int drawCtrlId)
{
    dss::Fix32Vector3 position;
    position = dss::Fix32Vector3(*func_02083648((Position*)&func_ov003_02121d04()->monster_[drawCtrlId]));

    VecFx32 dir;
    dir.x = position.vx.value - target.vx.value;
    dir.y = 0;
    dir.z = position.vz.value - target.vz.value;
    func_020630ec(&dir, &dir);
    rotAngle_ = FX_AtanIdx(FX_Divide(dir.x / 2, dir.z));
    count_ = 0;
    step_ = 0;
}

THUMB void BattleCameraHoming::calcHomingTarget(dss::Vector3short& angle)
{
    angle.vy = count_ * rotAngle_ / startTime_;
    count_++;
    if (count_ == startTime_) {
        step_ = 2;
        count_ = 0;
    }
}

THUMB void BattleCameraHoming::waitHomingTarget(dss::Vector3short& angle)
{
    angle.vy = rotAngle_;
    count_++;
    if (count_ == waitTime_) {
        step_ = 3;
        count_ = 0;
    }
}

THUMB void BattleCameraHoming::restoreHomingTarget(dss::Vector3short& angle)
{
    angle.vy = rotAngle_ * (restoreTime_ - count_) / restoreTime_;
    count_++;
    if (count_ == restoreTime_) {
        step_ = 0;
    }
}

THUMB void BattleCameraHoming::calculation(dss::Vector3short& angle)
{
    switch (step_) {
    case 0:
        break;
    case 1:
        calcHomingTarget(angle);
        break;
    case 2:
        waitHomingTarget(angle);
        break;
    case 3:
        restoreHomingTarget(angle);
        break;
    }
}

THUMB void BattleCameraHoming::setRotateTime(int time)
{
    startTime_ = time;
    restoreTime_ = time;
}

THUMB void BattleCameraHoming::setWaitTime(int time)
{
    waitTime_ = time;
}
