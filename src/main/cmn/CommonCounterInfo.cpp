#include "main/cmn/CommonCounterInfo.hpp"
#include "main/dss/Pad.hpp"

cmn::CommonCounterInfo cmn::g_CommonCounterInfo;

THUMB void cmn::CommonCounterInfo::initialize()
{
    this->waitCounter_ = 0;
    this->waitMax_ = 0;
    for (int i = 0; i < 16; i++) {
        this->dayCounter_[i] = 0xFF;
    }
    for (int i = 0; i < 4; i++) {
        this->freeCounter_[i] = 0;
    }
}

THUMB bool cmn::CommonCounterInfo::isEndWaitCounter()
{
    if (this->waitCounter_ == -1) {
        return false;
    }
    bool result = false;
    if (checkBottun() == 1) {
        this->waitCounter_ = this->waitMax_;
    }
    if (this->waitCounter_ == 0) {
        result = true;
    }
    this->waitCounter_ = func_02008eb8(0, this->waitCounter_) - 1;
    return result;
}

THUMB void cmn::CommonCounterInfo::setWaitZero(int frame) {
    this->waitCounter_ = frame;
    this->waitMax_ = frame;
}


THUMB int cmn::CommonCounterInfo::checkBottun()
{
    if ((data_02116d40.unkfunc_0207f280() & 1)
     || (data_02116d40.unkfunc_0207f280() & 2)
     || (data_02116d40.unkfunc_0207f280() & 0x400)
     || (data_02116d40.unkfunc_0207f280() & 0x800)
     || (data_02116d40.unkfunc_0207f280() & 0x200)
     || (data_02116d40.unkfunc_0207f280() & 0x100)
     || (data_02116d40.unkfunc_0207f280() & 0x40)
     || (data_02116d40.unkfunc_0207f280() & 0x80)
     || (data_02116d40.unkfunc_0207f280() & 0x20)
     || (data_02116d40.unkfunc_0207f280() & 0x10)) {
        return 1;
    }
    return 0;
}

THUMB int cmn::CommonCounterInfo::setDayCounter(int index, unsigned char value)
{
    this->dayCounter_[index] = value;
    return 1;
}


THUMB void cmn::CommonCounterInfo::setChangeDay()
{
    for (int i = 0; i < 16; i++) {
        unsigned char c = this->dayCounter_[i];
        if (c != 0xFF && c != 0) {
            this->dayCounter_[i] = c - 1;
        }
    }
}

THUMB int cmn::CommonCounterInfo::isEndDayCounter(int index) {
    return this->dayCounter_[index] == 0;
}


