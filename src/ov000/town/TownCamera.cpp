#include "ov000/town/TownCamera.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "ov000/town/TownCharacterManager.hpp"
#include "ov000/town/TownStageManager.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/BaseActionStatus.hpp"
#include "main/status/BaseStatus.hpp"
#include "ov000/Commands/TownCommand.hpp"

inline bool isEven() { return (func_02081254() & 1) == 0; }

static const float TOWN_CAMERA_DISTANCE = 39.55f;
static short cameraParam[8] = {(short)0xde94, 0, 0, 0xa, 0, 0x5b0, 0, 0};
static const dss::Fx32Vector3 position(0, 0, 0);
static dss::Fx32 distance(TOWN_CAMERA_DISTANCE);
static dss::Fx32 offset(2L);
static dss::Vector3short default_angle = {cameraParam[0], cameraParam[2], cameraParam[6]};

ARM TownCamera::TownCamera()
{
}

ARM TownCamera::~TownCamera()
{
}

ARM TownCamera* TownCamera::getSingleton()
{
    static TownCamera m_singleton;
    return &m_singleton;
}

ARM void TownCamera::initialize()
{
    func_02082dc8(&camera_.unk_004);
    func_02082dc8(&camera_.unk_068);
    func_0205788c(&camera_, (dss::Fx32Vector3*)&position, 0);
    camera_.setDistance(distance);
    camera_.setRotXYZ(default_angle);
    camera_.setOffset(offset);
    camera_.unk_dc = cameraParam[5];
    camera_.unk_cc = 1;
    camera_.unk_d0 = 0;
    camera_.unk_d4 = 0;
    short fov = cameraParam[3];
    func_020830d4(&camera_.unk_004, fov);
    func_020830d4(&camera_.unk_068, fov);
    dss::Fx32 near;
    near.value = 0x100;
    camera_.setNear(near);
    restore();
    cameraLock_ = 0;
    remote_ = 0;
    saveFlag_ = 0;
    func_0208718c(&distance_, distance);
    camera_.unk_f0 = 1;
    povLock_ = 0;
    counter_ = 0;
    isPovMove_ = 0;
    pointLock_ = 0;
    effect_ = 0;
    changeDefaultAngleFlag_ = 0;
    changeDefaultAngle_.vx = default_angle.vx;
    changeDefaultAngle_.vy = default_angle.vy;
    changeDefaultAngle_.vz = default_angle.vz;
    povOffset_.set(0, 0, 0);
    notEqualPreAngle_ = 1;
}

ARM void TownCamera::terminate()
{
    if (changeDefaultAngleFlag_ == 1) {
        func_02083054(&camera_.unk_004, default_angle);
    }
    store();
}

ARM void TownCamera::execute()
{
    if (cameraLock_ == 0) {
        func_0208303c(&camera_.unk_004, &g_cmnPartyInfo.position_);
        saveFlag_ = 0;
    } else {
        switch (remote_) {
        case 0:
            break;
        case 6:
            func_0208303c(&camera_.unk_004, &g_cmnPartyInfo.position_);
            break;
        case 5:
            func_0208303c(&camera_.unk_004, func_ov000_021383ac(func_ov000_02137f2c(), targetChara_));
            break;
        default:
            dss::Fx32Vector3 pos = *func_0208304c(&camera_.unk_004);
            func_020310f4(&cameraMove_, &pos);
            func_0208303c(&camera_.unk_004, &pos);
            func_02031160(&cameraMove_);
            break;
        }
    }
    if (unk_258 == 1) {
        dss::Vector3short* now = func_02083070(&camera_.unk_004);
        dss::Vector3short angle;
        angle.vx = now->vx;
        angle.vy = now->vy;
        angle.vz = now->vz;
        func_02031154(&cameraMove_, &angle);
        func_02083054(&camera_.unk_004, angle);
        if (func_020311c8(&cameraMove_) == 1) {
            unk_258 = 0;
        }
    }
    if (changeDistance_ == 1) {
        if (counter_ < frame_) {
            func_0208718c(&distance_, *(dss::Fx32*)func_020830b0(&camera_.unk_004));
            distance_ += addDistance_;
            func_02083078(&camera_.unk_004, distance_);
        } else {
            func_02083078(&camera_.unk_004, endDistance_);
            changeDistance_ = 0;
        }
    }
    counter_++;
    if (effect_ == 1) {
        if (cameraLock_ == 0 || remote_ == 5 || remote_ == 6) {
            effecter_.moveLock_ = 1;
        } else {
            effecter_.moveLock_ = 0;
        }
        dss::Fx32Vector3 effpos = *func_0208304c(&camera_.unk_004);
        func_020310f4(&effecter_, &effpos);
        func_0208303c(&camera_.unk_004, &effpos);
        if (func_02031160(&effecter_)) {
            effect_ = 0;
        }
    }
    if (povLock_ == 1) {
        dss::Fx32Vector3 povPos = *func_02083034(&camera_.unk_004);
        switch (remote_) {
        case 5:
        case 6:
            dss::Fx32Vector3 target = *func_0208304c(&camera_.unk_004);
            dss::Vector3short* now = func_02083070(&camera_.unk_004);
            dss::Vector3short angle;
            angle.vx = now->vx;
            angle.vy = now->vy;
            angle.vz = now->vz;
            calculatePursue(angle, povPos, target);
            povPos += povOffset_;
            break;
        }
        if (isPovMove_ == 1) {
            dss::Fx32Vector3 oldPovPos = povPos;
            func_020310f4(&povMove_, &povPos);
            povOffset_ += func_02088988(povPos, oldPovPos);
            if (func_02031160(&povMove_) == 1) {
                isPovMove_ = 0;
            }
        }
        func_02083024(&camera_.unk_004, &povPos);
    }
    if (remote_ == 0) {
        return;
    }
    if (func_020311d4(&cameraMove_) != 1) {
        return;
    }
    switch (remote_) {
    case 2:
    case 3:
    case 4:
        if (pointLock_ == 0) {
            cameraLock_ = 0;
        }
        break;
    case 5:
    case 6:
        return;
    }
    remote_ = 0;
}

ARM void TownCamera::draw()
{
    int a = func_ov000_02139668()->fldObject_.unk_24c;
    int b = func_ov000_02139668()->fldObject_.unk_250;
    if (a == 0 && b == 0) {
        func_020576bc(&camera_);
    } else {
        dss::CameraSub* cam = (func_02081254() & 1) == 0 ? &camera_.unk_004 : &camera_.unk_068;
        int no = func_02081254() & 1;
        cam->unk_18.x = func_ov000_02139668()->GetCameraCentFX32(no).x;
        cam->unk_18.y = func_ov000_02139668()->GetCameraCentFX32(no).y;
        cam->unk_18.z = func_ov000_02139668()->GetCameraCentFX32(no).z;
        cam->unk_30.x = func_ov000_02139668()->GetCameraUpFX32(no).x;
        cam->unk_30.y = func_ov000_02139668()->GetCameraUpFX32(no).y;
        cam->unk_30.z = func_ov000_02139668()->GetCameraUpFX32(no).z;
        cam->unk_0c.x = func_ov000_02139668()->GetCameraPosFX32(no).x;
        cam->unk_0c.y = func_ov000_02139668()->GetCameraPosFX32(no).y;
        cam->unk_0c.z = func_ov000_02139668()->GetCameraPosFX32(no).z;
        func_020576ec(&camera_);
        func_02049984(!isEven() ? &camera_.unk_004 : &camera_.unk_068);
    }
    data_0210bd08 = !isEven() ? &camera_.unk_004 : &camera_.unk_068;

    flagRotateL = 0;
    flagRotateR = 0;
    if (preAngle_.vy != func_02083070(&camera_.unk_004)->vy || preAngle_.vx != func_02083070(&camera_.unk_004)->vx ||
        preAngle_.vz != func_02083070(&camera_.unk_004)->vz) {
        notEqualPreAngle_ = 1;
    }
    if (notEqualPreAngle_ == 0) {
        data_020f22c0 = 0;
    } else {
        data_020f22c0 = 1;
    }
    dss::Vector3short* now = func_02083070(&camera_.unk_004);
    short y = now->vy;
    short z = now->vz;
    preAngle_.set(now->vx, y, z);

    notEqualPreAngle_ = 0;
}

ARM bool TownCamera::setAngleNorth(short& retAngle)
{
    bool ret = false;
    dss::Vector3short* now = func_02083070(&camera_.unk_004);
    dss::Vector3short target;
    target.set(now->vx, now->vy, now->vz);
    short ry = target.vy;
    short dy = ry > 0 ? -0x200 : 0x200;
    if (ry < 0x200 && ry > -0x200) {
        dy = 0;
        target.vy = 0;
        camera_.setRotXYZ(target);
        ret = true;
    } else {
        target.vy += dy;
        camera_.setRotXYZ(target);
    }
    retAngle = dy;
    return ret;
}

ARM void TownCamera::rotateL()
{
    dss::Vector3short* now = func_02083070(&camera_.unk_004);
    dss::Vector3short angle;
    angle.set(now->vx, now->vy, now->vz);
    angle.vy += 0x100;
    if (limitL == dss::Fx32(-1L)) {
        angle.vy = 0;
    } else if (limitL != dss::Fx32(0L)) {
        angle.vy = func_02008ea0(angle.vy, -func_02080d94(limitR), func_02080d94(limitL));
    }
    if (angle.vy == 0) {
        flagRotateL = false;
    } else {
        flagRotateL = true;
    }
    camera_.setRotXYZ(angle);
}

ARM void TownCamera::rotateR()
{
    dss::Vector3short* now = func_02083070(&camera_.unk_004);
    dss::Vector3short angle;
    angle.set(now->vx, now->vy, now->vz);
    angle.vy -= 0x100;
    if (limitR == dss::Fx32(-1L)) {
        angle.vy = 0;
    } else if (limitR != dss::Fx32(0L)) {
        angle.vy = func_02008ea0(angle.vy, -func_02080d94(limitR), func_02080d94(limitL));
    }
    if (angle.vy == 0) {
        flagRotateR = false;
    } else {
        flagRotateR = true;
    }
    camera_.setRotXYZ(angle);
}

ARM void TownCamera::setLimitL(dss::Fx32 left)
{
    func_0208718c(&limitL, left);
    if (limitL != dss::Fx32(0L)) {
        camera_.setRotXYZ(changeDefaultAngle_);
    }
}

ARM void TownCamera::setLimitR(dss::Fx32 right)
{
    func_0208718c(&limitR, right);
    if (limitR != dss::Fx32(0L)) {
        camera_.setRotXYZ(changeDefaultAngle_);
    }
}

ARM void TownCamera::resetAngle()
{
    dss::Vector3short* now = func_02083070(&camera_.unk_004);
    dss::Vector3short angle;
    angle.set(now->vx, 0, now->vz);
    camera_.setRotXYZ(angle);
}

ARM void TownCamera::restore()
{
    dss::Vector3short* pop = g_Stage.popCameraAngle();
    dss::Vector3short angle;
    angle.set(pop->vx, pop->vy, pop->vz);
    if (angle.vx == 0 && angle.vy == 0 && angle.vz == 0) {
        return;
    }
    camera_.setRotXYZ(angle);
}

ARM void TownCamera::store()
{
    dss::Vector3short* now = func_02083070(&camera_.unk_004);
    dss::Vector3short angle;
    angle.set(now->vx, now->vy, now->vz);
    g_Stage.pushCameraAngle(angle);
}

ARM void TownCamera::setMoveTo(dss::Fx32Vector3& target, int frame, bool absFlag)
{
    dss::Fx32Vector3 pos = *func_0208304c(&camera_.unk_004);
    dss::Fx32Vector3 to;
    to = absFlag ? target : target + pos;
    func_020311f0(&cameraMove_, &pos, &to);
    if (frame) {
        func_020312e8(&cameraMove_, frame);
    }
    if (saveFlag_ == 0) {
        savePos_ = pos;
        dss::Vector3short* now = func_02083070(&camera_.unk_004);
        saveAngle_.vx = now->vx;
        saveAngle_.vy = now->vy;
        saveAngle_.vz = now->vz;
    }
    remote_ = 1;
    cameraLock_ = 1;
    saveFlag_ = 1;
}

ARM void TownCamera::setRotTo(dss::Vector3short& angle, int frame, bool absFlag)
{
    if (frame == 0 && absFlag == true) {
        camera_.setRotXYZ(angle);
        return;
    }
    dss::Vector3short* now = func_02083070(&camera_.unk_004);
    dss::Vector3short angleNow;
    angleNow.vx = now->vx;
    angleNow.vy = now->vy;
    angleNow.vz = now->vz;
    if (!absFlag) {
        angle.vx += angleNow.vx;
        angle.vy += angleNow.vy;
        angle.vz += angleNow.vz;
    }
    func_0203122c(&cameraMove_, &angleNow, &angle);
    func_0203133c(&cameraMove_, frame, 0);
    if (absFlag == true && angleNow.vx == angle.vx && angleNow.vz == angle.vz && frame != 0 &&
        status::BaseActionStatus::abs(cameraMove_.rotIdx_.vy) < 100) {
        func_020315fc(&cameraMove_, 100);
    }
    if (saveFlag_ == 0) {
        savePos_ = *func_0208304c(&camera_.unk_004);
        saveAngle_.vx = angleNow.vx;
        saveAngle_.vy = angleNow.vy;
        saveAngle_.vz = angleNow.vz;
    }
    saveFlag_ = 1;
    unk_258 = 1;
}

ARM void TownCamera::resetCameraMove(int frame)
{
    dss::Fx32Vector3 pos = *func_0208304c(&camera_.unk_004);
    dss::Fx32Vector3 target = func_ov000_02132a90()->getPosition();
    if (pos != target) {
        func_020311f0(&cameraMove_, &pos, &target);
        func_020312e8(&cameraMove_, frame);
    }
    dss::Vector3short* now = func_02083070(&camera_.unk_004);
    dss::Vector3short angleNow;
    angleNow.vx = now->vx;
    angleNow.vy = now->vy;
    angleNow.vz = now->vz;
    if (changeDefaultAngleFlag_ == 0) {
        func_0203122c(&cameraMove_, &angleNow, &default_angle);
        func_0203133c(&cameraMove_, frame, 0);
        if (angleNow.vx == default_angle.vx && angleNow.vz == default_angle.vz && frame != 0 &&
            status::BaseActionStatus::abs(cameraMove_.rotIdx_.vy) < 100) {
            func_020315fc(&cameraMove_, 100);
        }
    } else {
        func_0203122c(&cameraMove_, &angleNow, &changeDefaultAngle_);
        func_0203133c(&cameraMove_, frame, 0);
        if (angleNow.vx == changeDefaultAngle_.vx && angleNow.vz == changeDefaultAngle_.vz && frame != 0 &&
            status::BaseActionStatus::abs(cameraMove_.rotIdx_.vy) < 100) {
            func_020315fc(&cameraMove_, 100);
        }
    }
    remote_ = 4;
    cameraLock_ = 1;
    unk_258 = 1;
}

ARM void TownCamera::setShake(int type, int count)
{
    dss::Fx32Vector3 targetPos = *func_0208304c(&camera_.unk_004);
    dss::Fx32Vector3 startPos = targetPos;
    int endframe = count << 3;
    dss::Fx32 len;
    len.value = 0x3e8;
    switch (type) {
    case 0: {
        dss::Fx32Vector3 vec;
        func_ov000_02130f48((short)(func_02083070(&camera_.unk_004)->vy + 0x4000), &vec);
        targetPos += vec * len;
        func_02031908(&effecter_, &startPos, &targetPos, count);
        break;
    }
    case 3:
        targetPos.vy.value += 0x1f4;
        func_020316f4(&effecter_, &startPos, &targetPos, 0xf, endframe - 0xf, endframe);
        break;
    case 1:
        targetPos.vy.value += 0x3e8;
        func_020316f4(&effecter_, &startPos, &targetPos, 0xf, endframe - 0xf, endframe);
        break;
    case 2:
        targetPos.vy.value += 0x7d0;
        func_020316f4(&effecter_, &startPos, &targetPos, 0xf, endframe - 0xf, endframe);
        break;
    }
    effect_ = 1;
}

ARM void TownCamera::setChangeDistance(int frame, dss::Fx32 distance)
{
    if (frame == 0) {
        camera_.setDistance(distance);
        return;
    }
    counter_ = 0;
    frame_ = frame;
    func_0208718c(&endDistance_, distance);
    changeDistance_ = 1;
    func_0208718c(&addDistance_, (endDistance_ - distance_) / frame);
}

ARM void TownCamera::resetDistance(int frame)
{
    if (frame == 0) {
        camera_.setDistance(::distance);
        return;
    }
    counter_ = 0;
    frame_ = frame;
    func_0208718c(&endDistance_, ::distance);
    changeDistance_ = 1;
    func_0208718c(&addDistance_, (endDistance_ - distance_) / frame);
}

ARM bool TownCamera::isEndChangeDistance()
{
    return changeDistance_ == 0;
}

ARM void TownCamera::setPovMove(dss::Fx32Vector3 target, int frame, int flag)
{
    dss::Fx32Vector3 start = *func_02083034(&camera_.unk_004);
    if (flag) {
        target += start;
    }
    func_02031d04(&povMove_, &start, &target, frame);
    isPovMove_ = 1;
    povLock_ = 1;
}

ARM void TownCamera::calculatePursue(dss::Vector3short& angle, dss::Fx32Vector3& pos, dss::Fx32Vector3& target)
{
    Mtx43 rotX;
    func_020885f8(&rotX);
    Mtx43 rotY;
    func_020885f8(&rotY);
    dss::Fx32Vector3 vec;
    func_02088698(&rotX, angle.vx);
    func_020886d0(&rotY, angle.vy);
    func_0208888c(&vec, 0, 0, 1);
    func_02088b10(&vec, func_020830b0(&camera_.unk_004));
    vec = func_02088670(&rotX, &vec);
    vec = func_02088670(&rotY, &vec);
    pos = target + vec;
}

ARM void TownCamera::setTargetPlayer(int flag)
{
    if (flag == true) {
        remote_ = 6;
        cameraLock_ = 1;
    } else {
        remote_ = 0;
    }
}

ARM void TownCamera::setMoveTargetPlayer(int frame)
{
    dss::Fx32Vector3 target = func_ov000_02132a90()->getPosition();
    setMoveTo(target, frame, true);
}

ARM void TownCamera::setMoveTragetChara(int index)
{
    cameraLock_ = 1;
    remote_ = 5;
    targetChara_ = index;
}

ARM void TownCamera::setCameraLock(bool flag)
{
    cameraLock_ = flag;
    pointLock_ = flag;
}

ARM void TownCamera::setLockPov(int flag)
{
    povLock_ = flag;
    camera_.unk_f0 = !flag;
    povOffset_.set(0, 0, 0);
    if (flag) {
        return;
    }
    dss::Fx32 len = func_02088e90(func_02088988(*func_02057868(&camera_, 0), *func_020578b0(&camera_, 0)));
    camera_.setDistance(len);
}

ARM void TownCamera::setDefaultAngle(dss::Vector3short& angle)
{
    func_02083054(&camera_.unk_004, angle);
    changeDefaultAngle_.vx = angle.vx;
    changeDefaultAngle_.vy = angle.vy;
    changeDefaultAngle_.vz = angle.vz;
    changeDefaultAngleFlag_ = 1;
}
