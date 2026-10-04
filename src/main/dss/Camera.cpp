#include "main/dss/Camera.hpp"

ARM dss::Camera::Camera()
{
    unk_60 = 0;
    m_perspective.m_fovySin = 0x424;
    m_perspective.m_fovyCos = 0xf74;
    m_perspective.m_aspect = 0x1555;
    m_perspective.m_near = 0x400;
    m_perspective.m_far = 0xc8000;
    m_scaleW.value = 0x100;
    m_fov2 = 0xa;
    m_distance = 0x10L;
    m_distanceSq = m_distance * m_distance;
}

ARM void dss::Camera::setup()
{
    m_target_pos.setFix32(0, 0, 0);
    m_angle.vx = data_020c4158[0];
    m_angle.vy = data_020c4158[2];
    m_angle.vz = data_020c4158[1];
    m_distance = 0x10L;
    m_distanceSq = m_distance * m_distance;
    m_up.setFix32(0, 1, 0);
}

ARM void dss::Camera::calcPosition()
{
    MtxFx43 rotX;
    func_020885f8(&rotX);
    MtxFx43 rotY;
    func_020885f8(&rotY);
    func_02088698(&rotX, m_angle.vx);
    func_020886d0(&rotY, m_angle.vy);
    direction_.setFix32(0, 0, 1);
    direction_ *= m_distance;
    direction_ = func_02088670(&rotX, &direction_);
    direction_ = func_02088670(&rotY, &direction_);
    m_pos = m_target_pos + direction_;
    direction_ = direction_ * -1;
    direction_.normalize();
}

ARM void dss::Camera::applyCamera()
{
    if (unk_60 == 0) {
        update();
    }
    calcPosition();
    func_02065604(m_perspective.m_fovySin, m_perspective.m_fovyCos, m_perspective.m_aspect, m_perspective.m_near, m_perspective.m_far, m_scaleW.value, 0, &data_0210cf30);
    data_0210cf28.flag &= ~0x50;
    data_0210cf28.camPos.x = m_pos.vx.value;
    data_0210cf28.camPos.y = m_pos.vy.value;
    data_0210cf28.camPos.z = m_pos.vz.value;
    data_0210cf28.camUp.x = m_up.vx.value;
    data_0210cf28.camUp.y = m_up.vy.value;
    data_0210cf28.camUp.z = m_up.vz.value;
    data_0210cf28.camTarget.x = m_target_pos.vx.value;
    data_0210cf28.camTarget.y = m_target_pos.vy.value;
    data_0210cf28.camTarget.z = m_target_pos.vz.value;
    func_02065a98((VecFx32*)&m_pos, (VecFx32*)&m_up, (VecFx32*)&m_target_pos, 0, &data_0210cf74);
    data_0210cf28.flag &= ~0xe8;
}

ARM void dss::Camera::update()
{
}

ARM void dss::Camera::setPosition(const Fix32Vector3& pos)
{
    m_pos = pos;
}

ARM dss::Fix32Vector3& dss::Camera::getPosition()
{
    return m_pos;
}

ARM void dss::Camera::setTarget(const Fix32Vector3& target)
{
    m_target_pos = target;
}

ARM dss::Fix32Vector3& dss::Camera::getTarget()
{
    return m_target_pos;
}

ARM void dss::Camera::setAngle(const Vector3short& angle)
{
    m_angle.vx = angle.vx;
    m_angle.vy = angle.vy;
    m_angle.vz = angle.vz;
}

ARM dss::Vector3<short>& dss::Camera::getAngle()
{
    return m_angle;
}

ARM void dss::Camera::setDistance(const Fix32& distance)
{
    m_distance = distance;
    m_distanceSq = m_distance * m_distance;
}

ARM dss::Fix32& dss::Camera::getDistance()
{
    return m_distance;
}

ARM dss::Fix32& dss::Camera::getDistanceSq()
{
    return m_distanceSq;
}

ARM dss::Fix32Vector3& dss::Camera::getDirection()
{
    return direction_;
}

ARM void dss::Camera::setFOV(unsigned int sin, unsigned int cos)
{
    m_perspective.m_fovySin = sin;
    m_perspective.m_fovyCos = cos;
}

ARM void dss::Camera::setFOV2(int fovy)
{
    int index = (int)dss::clamp<int>(fovy, 0, 0x4e) / 2;
    m_fov2 = index;
    setFOV(data_020c4160[index][0], data_020c4160[index][1]);
}

ARM void dss::Camera::setScaleW(Fix32 scaleW)
{
    m_scaleW = scaleW;
}

ARM void dss::Camera::setNear(int value)
{
    m_perspective.m_near = value;
}

ARM void dss::Camera::setFar(int value)
{
    m_perspective.m_far = value;
}
