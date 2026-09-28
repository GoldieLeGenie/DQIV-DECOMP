#include "main/CameraControl/CameraControl.hpp"



ARM void CameraControl::terminate()
{
    if (this->data_.getAddr() == 0)
    {
        return;
    }
    this->data_.cleanup();
}

ARM void CameraControl::initCameraControl(dss::Fix32Vector3 position, dss::Vector3short angle)
{
    this->dt_ = 0;
    this->waitCounter_ = 0;
    this->seqPhase_ = 1;
    this->iniAngle_.vx = angle.vx;
    this->iniAngle_.vy = angle.vy;
    this->iniAngle_.vz = angle.vz;
    this->iniPosition_ = position;
}

