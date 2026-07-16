#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"

struct DataObject {
    void *vtable_;
    void *m_addr;
    int m_flag;
    long m_size;
};

struct CameraControl {
    struct SeqCameraControl {
        int frame;
        dss::Fx32Vector3 pos;
        dss::Fx32Vector3 pos_a;
        dss::Fx32Vector3 ang;
        dss::Fx32Vector3 ang_a;
        dss::Fx32Vector3 posEnd;
        dss::Fx32Vector3 angEnd;
    };
    DataObject data_;
    dss::Fx32Vector3 iniPosition_;
    dss::Vector3short iniAngle_;
    unsigned int maxSeqPhase_;
    unsigned int seqPhase_;
    short dt_;
    short waitCounter_;
    SeqCameraControl *seqData_;
    char camera_name[128];
    int wait_;
    void terminate();
    void initCameraControl(dss::Fx32Vector3 position, dss::Vector3short angle);
};


extern "C" int  func_020574bc(DataObject* d);   // DataObject::getAddr()  
extern "C" void func_02057474(DataObject* d);   // ExcelBinaryData::clearData