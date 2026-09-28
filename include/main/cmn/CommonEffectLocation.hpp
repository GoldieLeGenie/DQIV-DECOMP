#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/fld/FLDObject.hpp"

namespace cmn{
    struct CommonEffectLocation
    {
        dss::Fix32Vector3 prev_;
        dss::Fix32Vector3 next_;
        int frame_;
        int counter_;
        int extend_;
        int enable_;
        int index_;
        void initialize();
        void terminate();
        void execute();
        void start(int index, int extend);
        int setPaletteRate(int index);
        int calcPaletteRate();
        dss::Fix32Vector3 getPaletteRate();
    };
}

extern "C" cmn::CommonEffectLocation* func_0203e8f8(void);   // CommonEffectLocation::getSingleton


struct BattleStage {
    dss::Fix32Vector3 m_rgb_rate;   // 0x00
    char             _pad0c[0x4c]; // 0x0c
    fld::FLDObject        m_fld;        // 0x58
};

struct TownStageManager;

extern char data_0210bb94[];

extern "C"
{
    int  func_02058114(void*, int);
    int  func_02088ca8(dss::Fix32Vector3*, dss::Fix32Vector3*);
    TownStageManager* func_ov000_02139668(void);                   // TownStageManager::getSingleton
    void func_ov000_02139f1c(TownStageManager*, dss::Fix32Vector3*, int); // SetRGBRate
    BattleStage* func_ov003_0212dfe8(void);                        // BattleStage::getSingleton
    void func_02046f74(fld::FLDObject*, VecFx32*, int);    // fld::FLDObject::SetRGBRate
    int func_0203ea64(cmn::CommonEffectLocation*,int index);
    int func_0203eb24(cmn::CommonEffectLocation*);
}