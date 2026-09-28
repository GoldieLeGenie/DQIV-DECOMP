#pragma ipa file
#include "main/object/ModelObject.hpp"

dss::Fx32 ModelObjectWithCamera::distance_(2.5f);
dss::Fx32 ModelObjectWithCamera::relativeScale_(0.4f);
dss::Camera* ModelObjectWithCamera::camera_;

ARM ModelObjectWithCamera::ModelObjectWithCamera()
{
}

ARM void ModelObjectWithCamera::draw()
{
    dss::Fx32Vector3 position = getPosition();
    dss::Fx32Vector3 scale = getScale();
    if (camera_) {
        if (type_ == Far) {
            execFar();
        }
        if (type_ == Near) {
            execNear();
        }
        if (type_ == Near2) {
            execNear2();
        }
        if (type_ == Normal) {
            execNormal();
        }
        if (type_ == Follow) {
            execFollow();
        }
    }
    func_020589a4(this);
    func_02058bcc(this, position);
    func_02058b88(this, scale);
}

ARM void ModelObjectWithCamera::execNormal()
{
    dss::Fx32Vector3 cameraPosition = camera_->getPosition();
    dss::Fx32Vector3 position = getPosition();
    dss::Fx32Vector3 distance = func_02088988(cameraPosition, m_pos);
    dss::Fx32Vector3 unk1;
    dss::Fx32Vector3 unk2;
    func_02058bcc(this, m_pos + func_02088bdc(distance, 2));
    func_02058b88(this, func_02088bdc(m_scl, 2));
}

ARM void ModelObjectWithCamera::execFollow()
{
    dss::Fx32Vector3 cameraPosition;
    dss::Fx32Vector3 target;
    dss::Fx32Vector3 direction;
    cameraPosition = camera_->getPosition();
    target = camera_->getTarget();
    direction = func_02088988(target, cameraPosition);
    func_02089168(&direction);
    target = cameraPosition + direction * distance_;
    func_02058bcc(this, target);
    func_02058af4(this, relativeScale_);
}

ARM void ModelObjectWithCamera::execNear()
{
    dss::Fx32Vector3 cameraPosition = camera_->getPosition();
    dss::Fx32Vector3 position = getPosition();
    dss::Fx32Vector3 distance = func_02088988(cameraPosition, m_pos);
    dss::Fx32Vector3 unk1;
    dss::Fx32Vector3 unk2;
    func_02058bcc(this, m_pos + func_02088bdc(func_02088a9c(&distance, 15), 16));
    func_02058b88(this, func_02088bdc(m_scl, 16));
}

ARM void ModelObjectWithCamera::execNear2()
{
    dss::Fx32Vector3 cameraPosition = camera_->getPosition();
    dss::Fx32Vector3 position = getPosition();
    dss::Fx32Vector3 distance = func_02088988(cameraPosition, m_pos);
    dss::Fx32Vector3 unk1;
    dss::Fx32Vector3 unk2;
    func_02058bcc(this, m_pos + func_02088bdc(func_02088a9c(&distance, 3), 4));
    func_02058b88(this, func_02088bdc(m_scl, 4));
}

ARM void ModelObjectWithCamera::execFar()
{
    dss::Fx32Vector3 cameraPosition = camera_->getPosition();
    dss::Fx32Vector3 position = getPosition();
    dss::Fx32Vector3 distance = func_02088988(cameraPosition, m_pos);
    dss::Fx32Vector3 unk1;
    dss::Fx32Vector3 unk2;
    func_02058bcc(this, m_pos + func_02088bdc(func_02088a9c(&distance, 1), 4));
    func_02058b88(this, func_02088bdc(func_02088a9c(&m_scl, 3), 4));
}
