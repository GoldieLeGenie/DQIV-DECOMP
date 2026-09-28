#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"
#include "main/data/DataObject.hpp"

struct CameraControl {
    struct SeqCameraControl {
        int frame;
        dss::Fix32Vector3 pos;
        dss::Fix32Vector3 pos_a;
        dss::Fix32Vector3 ang;
        dss::Fix32Vector3 ang_a;
        dss::Fix32Vector3 posEnd;
        dss::Fix32Vector3 angEnd;
    };
    DataObject data_;
    dss::Fix32Vector3 iniPosition_;
    dss::Vector3short iniAngle_;
    unsigned int maxSeqPhase_;
    unsigned int seqPhase_;
    short dt_;
    short waitCounter_;
    SeqCameraControl *seqData_;
    char camera_name[128];
    int wait_;
    CameraControl();
    ~CameraControl();
    void terminate();
    void initCameraControl(dss::Fix32Vector3 position, dss::Vector3short angle);
};

extern "C" {
    void func_0201da1c(CameraControl* control, const char* name, int flag);                         // CameraControl::readCameraData
    int  func_0201dac8(CameraControl* control, dss::Fix32Vector3* pos, dss::Vector3short* angle);   // CameraControl::calc
    void func_0201e048(CameraControl* control, dss::Fix32Vector3* pos, dss::Vector3short* angle);   // CameraControl::moveCamera
}

