#pragma ipa file

#include "ov000/town/TownCamera.hpp"
#include "main/object/DSSAObject.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "ov000/town/TownCharacterManager.hpp"
#include "ov000/town/TownStageManager.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/BaseActionStatus.hpp"
#include "main/status/BaseStatus.hpp"
#include "ov000/Commands/TownCommand.hpp"

inline bool isEven() { return (func_02081254() & 1) == 0; }
inline const long& limitLockL() { return -1L; }
static const float TOWN_CAMERA_DISTANCE = 39.55f;
static const dss::Fix32Vector3 position(0, 0, 0);
inline const long& limitFreeR() { return 0L; }
inline const long& limitLockR() { return -1L; }
static dss::Vector3<short> default_angle(cameraParam[0], cameraParam[2], cameraParam[6]);
static dss::Fix32 distance(TOWN_CAMERA_DISTANCE);

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

static dss::Fix32 offset(2L);

ARM void TownCamera::initialize()
{
    camera_.unk_004.setup();
    camera_.unk_068.setup();
    camera_.setTarget(position, 0);
    camera_.setDistance(distance);
    camera_.setRotXYZ(default_angle);
    camera_.setOffset(offset);
    camera_.m_dirOffset = cameraParam[5];
    camera_.m_cameraNo = 1;
    camera_.unk_d0 = 0;
    camera_.unk_d4 = 0;
    short fov = cameraParam[3];
    camera_.unk_004.setFOV2(fov);
    camera_.unk_068.setFOV2(fov);
    dss::Fix32 scaleW;
    scaleW.value = 0x100;
    camera_.setScaleW(scaleW);
    restore();
    cameraLock_ = 0;
    remote_ = 0;
    saveFlag_ = 0;
    distance_ = distance;
    camera_.m_pursue = 1;
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
        camera_.unk_004.setAngle(default_angle);
    }
    store();
}

ARM void TownCamera::execute()
{
    if (cameraLock_ == 0) {
        camera_.unk_004.setTarget(g_cmnPartyInfo.position_);
        saveFlag_ = 0;
    } else {
        switch (remote_) {
        case 0:
            break;
        case 6:
            camera_.unk_004.setTarget(g_cmnPartyInfo.position_);
            break;
        case 5:
            camera_.unk_004.setTarget(*func_ov000_021383ac(func_ov000_02137f2c(), targetChara_));
            break;
        default:
            dss::Fix32Vector3 pos = camera_.unk_004.getTarget();
            func_020310f4(&cameraMove_, &pos);
            camera_.unk_004.setTarget(pos);
            func_02031160(&cameraMove_);
            break;
        }
    }
    if (changeAngle_ == 1) {
        dss::Vector3short* now = &camera_.unk_004.getAngle();
        dss::Vector3short angle;
        angle.vx = now->vx;
        angle.vy = now->vy;
        angle.vz = now->vz;
        func_02031154(&cameraMove_, &angle);
        camera_.unk_004.setAngle(angle);
        if (func_020311c8(&cameraMove_) == 1) {
            changeAngle_ = 0;
        }
    }
    if (changeDistance_ == 1) {
        if (counter_ < frame_) {
            distance_ = camera_.unk_004.getDistance();
            distance_ += addDistance_;
            camera_.unk_004.setDistance(distance_);
        } else {
            camera_.unk_004.setDistance(endDistance_);
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
        dss::Fix32Vector3 effpos = camera_.unk_004.getTarget();
        func_020310f4(&effecter_, &effpos);
        camera_.unk_004.setTarget(effpos);
        if (func_02031160(&effecter_)) {
            effect_ = 0;
        }
    }
    if (povLock_ == 1) {
        dss::Fix32Vector3 povPos = camera_.unk_004.getPosition();
        switch (remote_) {
        case 5:
        case 6:
            dss::Fix32Vector3 target = camera_.unk_004.getTarget();
            dss::Vector3short* now = &camera_.unk_004.getAngle();
            dss::Vector3short angle;
            angle.vx = now->vx;
            angle.vy = now->vy;
            angle.vz = now->vz;
            calculatePursue(angle, povPos, target);
            povPos += povOffset_;
            break;
        }
        if (isPovMove_ == 1) {
            dss::Fix32Vector3 oldPovPos = povPos;
            func_020310f4(&povMove_, &povPos);
            povOffset_ += func_02088988(povPos, oldPovPos);
            if (func_02031160(&povMove_) == 1) {
                isPovMove_ = 0;
            }
        }
        camera_.unk_004.setPosition(povPos);
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
    int a = func_ov000_02139668()->stage_.m_fld.unk_24c;
    int b = func_ov000_02139668()->stage_.m_fld.unk_250;
    if (a == 0 && b == 0) {
        camera_.applyCamera();
    } else {
        dss::Camera* cam = (func_02081254() & 1) == 0 ? &camera_.unk_004 : &camera_.unk_068;
        int no = func_02081254() & 1;
        cam->m_pos.vx.value = func_ov000_02139668()->GetCameraCentFX32(no).x;
        cam->m_pos.vy.value = func_ov000_02139668()->GetCameraCentFX32(no).y;
        cam->m_pos.vz.value = func_ov000_02139668()->GetCameraCentFX32(no).z;
        cam->m_up.vx.value = func_ov000_02139668()->GetCameraUpFX32(no).x;
        cam->m_up.vy.value = func_ov000_02139668()->GetCameraUpFX32(no).y;
        cam->m_up.vz.value = func_ov000_02139668()->GetCameraUpFX32(no).z;
        cam->m_target_pos.vx.value = func_ov000_02139668()->GetCameraPosFX32(no).x;
        cam->m_target_pos.vy.value = func_ov000_02139668()->GetCameraPosFX32(no).y;
        cam->m_target_pos.vz.value = func_ov000_02139668()->GetCameraPosFX32(no).z;
        camera_.applyG3d();
        func_02049984(!isEven() ? &camera_.unk_004 : &camera_.unk_068);
    }
    DSSAObjectWithCamera::camera_ = !isEven() ? &camera_.unk_004 : &camera_.unk_068;

    flagRotateL = 0;
    flagRotateR = 0;
    if (preAngle_.vy != camera_.unk_004.getAngle().vy || preAngle_.vx != camera_.unk_004.getAngle().vx ||
        preAngle_.vz != camera_.unk_004.getAngle().vz) {
        notEqualPreAngle_ = 1;
    }
    if (notEqualPreAngle_ == 0) {
        data_020f22c0 = 0;
    } else {
        data_020f22c0 = 1;
    }
    dss::Vector3short* now = &camera_.unk_004.getAngle();
    short y = now->vy;
    short z = now->vz;
    preAngle_.set(now->vx, y, z);

    notEqualPreAngle_ = 0;
}

ARM bool TownCamera::setAngleNorth(short& retAngle)
{
    bool ret = false;
    dss::Vector3short* now = &camera_.unk_004.getAngle();
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
    dss::Vector3short* now = &camera_.unk_004.getAngle();
    dss::Vector3short angle;
    angle.set(now->vx, now->vy, now->vz);
    angle.vy += 0x100;
    if (limitL == dss::Fix32(limitLockL())) {
        angle.vy = 0;
    } else if (limitL != dss::Fix32(0L)) {
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
    dss::Vector3short* now = &camera_.unk_004.getAngle();
    dss::Vector3short angle;
    angle.set(now->vx, now->vy, now->vz);
    angle.vy -= 0x100;
    if (limitR == dss::Fix32(limitLockR())) {
        angle.vy = 0;
    } else if (limitR != dss::Fix32(limitFreeR())) {
        angle.vy = func_02008ea0(angle.vy, -func_02080d94(limitR), func_02080d94(limitL));
    }
    if (angle.vy == 0) {
        flagRotateR = false;
    } else {
        flagRotateR = true;
    }
    camera_.setRotXYZ(angle);
}

ARM void TownCamera::setLimitL(dss::Fix32 left)
{
    limitL = left;
    if (limitL != dss::Fix32(0L)) {
        camera_.setRotXYZ(changeDefaultAngle_);
    }
}

ARM void TownCamera::setLimitR(dss::Fix32 right)
{
    limitR = right;
    if (limitR != dss::Fix32(0L)) {
        camera_.setRotXYZ(changeDefaultAngle_);
    }
}

ARM void TownCamera::resetAngle()
{
    dss::Vector3short* now = &camera_.unk_004.getAngle();
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
    dss::Vector3short* now = &camera_.unk_004.getAngle();
    dss::Vector3short angle;
    angle.set(now->vx, now->vy, now->vz);
    g_Stage.pushCameraAngle(angle);
}

ARM void TownCamera::setMoveTo(dss::Fix32Vector3& target, int frame, bool absFlag)
{
    dss::Fix32Vector3 pos = camera_.unk_004.getTarget();
    dss::Fix32Vector3 to;
    to = absFlag ? target : target + pos;
    func_020311f0(&cameraMove_, &pos, &to);
    if (frame) {
        func_020312e8(&cameraMove_, frame);
    }
    if (saveFlag_ == 0) {
        savePos_ = pos;
        dss::Vector3short* now = &camera_.unk_004.getAngle();
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
    dss::Vector3short* now = &camera_.unk_004.getAngle();
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
        savePos_ = camera_.unk_004.getTarget();
        saveAngle_.vx = angleNow.vx;
        saveAngle_.vy = angleNow.vy;
        saveAngle_.vz = angleNow.vz;
    }
    saveFlag_ = 1;
    changeAngle_ = 1;
}

ARM void TownCamera::resetCameraMove(int frame)
{
    dss::Fix32Vector3 pos = camera_.unk_004.getTarget();
    dss::Fix32Vector3 target = func_ov000_02132a90()->getPosition();
    if (pos != target) {
        func_020311f0(&cameraMove_, &pos, &target);
        func_020312e8(&cameraMove_, frame);
    }
    dss::Vector3short* now = &camera_.unk_004.getAngle();
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
    changeAngle_ = 1;
}

ARM void TownCamera::setShake(int type, int count)
{
    dss::Fix32Vector3 targetPos = camera_.unk_004.getTarget();
    dss::Fix32Vector3 startPos = targetPos;
    int endframe = count << 3;
    dss::Fix32 len;
    len.value = 0x3e8;
    switch (type) {
    case 0: {
        dss::Fix32Vector3 vec;
        func_ov000_02130f48((short)(camera_.unk_004.getAngle().vy + 0x4000), &vec);
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

ARM void TownCamera::setChangeDistance(int frame, dss::Fix32 distance)
{
    if (frame == 0) {
        camera_.setDistance(distance);
        return;
    }
    counter_ = 0;
    frame_ = frame;
    endDistance_ = distance;
    changeDistance_ = 1;
    addDistance_ = (endDistance_ - distance_) / frame;
}

ARM void TownCamera::resetDistance(int frame)
{
    if (frame == 0) {
        camera_.setDistance(::distance);
        return;
    }
    counter_ = 0;
    frame_ = frame;
    endDistance_ = ::distance;
    changeDistance_ = 1;
    addDistance_ = (endDistance_ - distance_) / frame;
}

ARM bool TownCamera::isEndChangeDistance()
{
    return changeDistance_ == 0;
}

ARM void TownCamera::setPovMove(dss::Fix32Vector3 target, int frame, int flag)
{
    dss::Fix32Vector3 start = camera_.unk_004.getPosition();
    if (flag) {
        target += start;
    }
    func_02031d04(&povMove_, &start, &target, frame);
    isPovMove_ = 1;
    povLock_ = 1;
}

ARM void TownCamera::calculatePursue(dss::Vector3short& angle, dss::Fix32Vector3& pos, dss::Fix32Vector3& target)
{
    MtxFx43 rotX;
    func_020885f8(&rotX);
    MtxFx43 rotY;
    func_020885f8(&rotY);
    dss::Fix32Vector3 vec;
    func_02088698(&rotX, angle.vx);
    func_020886d0(&rotY, angle.vy);
    func_0208888c(&vec, 0, 0, 1);
    func_02088b10(&vec, &camera_.unk_004.getDistance());
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
    dss::Fix32Vector3 target = func_ov000_02132a90()->getPosition();
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
    camera_.m_pursue = !flag;
    povOffset_.set(0, 0, 0);
    if (flag) {
        return;
    }
    dss::Fix32 len = func_02088e90(func_02088988(camera_.getPosition(0), camera_.getTarget(0)));
    camera_.setDistance(len);
}

ARM void TownCamera::setDefaultAngle(dss::Vector3short& angle)
{
    camera_.unk_004.setAngle(angle);
    changeDefaultAngle_.vx = angle.vx;
    changeDefaultAngle_.vy = angle.vy;
    changeDefaultAngle_.vz = angle.vz;
    changeDefaultAngleFlag_ = 1;
}
