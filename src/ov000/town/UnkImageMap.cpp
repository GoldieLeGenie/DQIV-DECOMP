#include "ov000/town/UnkImageMap.hpp"
#include "ov000/town/TownSystem.hpp"

ARM UnkImageMap_02141f6c::UnkImageMap_02141f6c()
{
    isEnable_ = 0;
    frame_ = 0;
    phase_ = 0;
}

ARM UnkImageMap_02141f6c::~UnkImageMap_02141f6c()
{
}

ARM void UnkImageMap_02141f6c::setup(TownSystem* system)
{
    window_.unkfunc_02033768(system);
    window_.unkfunc_02033c3c();
}

ARM void UnkImageMap_02141f6c::cleanup()
{
    if (isEnable_) {
        window_.unkfunc_02033788();
    }
}

ARM void UnkImageMap_02141f6c::execute()
{
    if (!isEnable_) {
        return;
    }
    switch (phase_) {
    case 0:
        frame_ = 0;
        break;
    case 1:
        if (++frame_ == 0x1f) {
            phase_ = 2;
        }
        break;
    case 2:
        frame_ = 0x1f;
        break;
    case 3:
        if (--frame_ <= 0) {
            phase_ = 0;
            cleanup();
            isEnable_ = 0;
        }
        break;
    }
    window_.unkfunc_02033cd4(frame_);
}

ARM void UnkImageMap_02141f6c::draw()
{
    if (isEnable_) {
        window_.unkfunc_02033928();
    }
}

ARM void UnkImageMap_02141f6c::open()
{
    isEnable_ = 1;
    setup(TownSystem::getSingleton());
    phase_ = 1;
}

ARM void UnkImageMap_02141f6c::close()
{
    phase_ = 3;
}

ARM int UnkImageMap_02141f6c::isOpen()
{
    return phase_ == 2;
}

ARM int UnkImageMap_02141f6c::isClose()
{
    return phase_ == 0;
}

ARM int UnkImageMap_02141f6c::isEnable()
{
    return isEnable_;
}
