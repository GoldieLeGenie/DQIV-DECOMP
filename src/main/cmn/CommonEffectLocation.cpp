#include "main/cmn/CommonEffectLocation.hpp"
#include "main/param/Param.hpp"
#include "main/status/ExcelParam.hpp"


#pragma profile on

ARM void cmn::CommonEffectLocation::initialize()

{
  this->enable_ = 0;
  return;
}

ARM void cmn::CommonEffectLocation::terminate()
{
  return;
}


ARM void cmn::CommonEffectLocation::execute()
{
    if (this->enable_ != 0 && calcPaletteRate() == 0) {
        int i = this->index_ + 1;
        this->index_ = i;
        if (setPaletteRate(i) == 0)
            this->enable_ = 0;
    }
}

ARM void cmn::CommonEffectLocation::start(int index, int extend)
{

    this->index_ = index;
    this->enable_ = 1;
    this->extend_ = extend;
    setPaletteRate(index);

}

ARM int cmn::CommonEffectLocation::setPaletteRate(int index)
{
    param::EffectColorParam* tbl = status::excelParam.effectColor_;

    if (tbl[index + 1].frame == 0)
        return 0;

    this->prev_.vx.value = tbl[index].rPoint;
    this->prev_.vy.value = tbl[index].gPoint;
    this->prev_.vz.value = tbl[index].bPoint;

    this->next_.vx.value = tbl[index + 1].rPoint;
    this->next_.vy.value = tbl[index + 1].gPoint;
    this->next_.vz.value = tbl[index + 1].bPoint;

    this->frame_   = tbl[index + 1].frame;
    this->counter_ = 0;

    if (tbl[index + 3].frame == 0)
        this->frame_ = this->frame_ + this->extend_;

    return 1;
}



static inline void setFieldRGBRate(const dss::Fx32Vector3& rgb)
{
    dss::VecFx32     v;
    dss::Fx32Vector3 tmp(rgb.vx, rgb.vy, rgb.vz);
    BattleStage*     stage = func_ov003_0212dfe8();

    v.x = tmp.vx.value;
    v.y = tmp.vy.value;
    v.z = tmp.vz.value;

    stage->m_fld.SetRGBRate(&v, 0);
}


ARM int cmn::CommonEffectLocation::calcPaletteRate()
{
    dss::Fx32Vector3 rgb;
    dss::Fx32 one;
    dss::Fx32 rate;

    if (this->counter_ >= this->frame_)
        return 0;

    if (func_02088ca8(&this->prev_, &this->next_) != 0) {
        this->counter_ = this->counter_ + 1;
        return 1;
    }

    one.value  = (dss::fx32)0x1000;
    rate.value = (dss::fx32)((this->counter_ << 12) / this->frame_);

    rgb = this->prev_ * (one - rate) + this->next_ * rate;

    if (func_02058114(&data_0210bb94, 0xC) != 0)
        func_ov000_02139f1c(func_ov000_02139668(), &rgb, 0);

    if (func_02058114(&data_0210bb94, 0xD) != 0)
        setFieldRGBRate(rgb);

    this->counter_ = this->counter_ + 1;
    return 1;
}


ARM dss::Fx32Vector3 cmn::CommonEffectLocation::getPaletteRate()
{
    dss::Fx32 one;
    dss::Fx32 rate;

    one.value  = (dss::fx32)0x1000;
    rate.value = (dss::fx32)((this->counter_ << 12) / this->frame_);

    return this->prev_ * (one - rate) + this->next_ * rate;
}
#pragma profile off