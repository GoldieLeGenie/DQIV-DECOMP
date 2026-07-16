#include "main/CameraControl/CameraControl.hpp"



ARM void CameraControl::terminate()
{
    if (func_020574bc(&this->data_) == 0)
    {
        return;
    }
    func_02057474(&this->data_);
}

ARM void CameraControl::initCameraControl(dss::Fx32Vector3 position, dss::Vector3short angle)
{
    this->dt_ = 0;
    this->waitCounter_ = 0;
    this->seqPhase_ = 1;
    this->iniAngle_.vx = angle.vx;
    this->iniAngle_.vy = angle.vy;
    this->iniAngle_.vz = angle.vz;
    this->iniPosition_ = position;
}

