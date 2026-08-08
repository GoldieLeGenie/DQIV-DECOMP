#include "main/fld/FLDObject.hpp"

ARM void fld::FLDObject::SetSepia()
{
    m_flag |= 0x100;
}

ARM void fld::FLDObject::SetRGBRate(dss::VecFx32* rate, int real_time)
{
    m_rgb_rate = *rate;
    m_flag |= 0x80;

    if (real_time != 0) {
        m_flag |= 0x40;
        return;
    }

    m_flag &= ~0x40;

    if (field_22c_ != 0)
        func_02044a48(this);

    func_0204722c(this);
}

