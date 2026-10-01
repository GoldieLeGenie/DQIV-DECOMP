#pragma ipa file
#include "ov000/town/TownShopListMap.hpp"
#include "main/status/StageStatus.hpp"

ARM TownShopListMap::TownShopListMap()
{
    isEnable_ = 0;
    frame_ = 0;
    phase_ = 0;
}

ARM TownShopListMap::~TownShopListMap()
{
}

ARM void TownShopListMap::initialize()
{
    checkData();
    if (isEnable_) {
        func_02057d60(&shopSprite_, "data/2d/map/shop.tex", 0);
        func_02057ee8(&shopSprite_);
        func_02057f00(&shopSprite_, 0);
        func_02057f18(&shopSprite_, 0x3f);
        shopSprite_.sprite_.unk_32 = 1;
        func_02057e98(&blackSprite_, 0x100, 0xc0);
        func_02057f00(&blackSprite_, 0);
        func_02057ee8(&blackSprite_);
        func_02057f40(&blackSprite_, 0, 0, 0);
        func_02057f18(&blackSprite_, 0x3f);
    }
    phase_ = 0;
}

ARM void TownShopListMap::cleanup()
{
    if (isEnable_) {
        func_02057e34(&shopSprite_);
    }
    isEnable_ = 0;
}

ARM void TownShopListMap::execute()
{
    if (!isEnable_) {
        return;
    }
    switch (phase_) {
    case 0:
        frame_ = 0;
        break;
    case 1:
        func_02057ed4(&shopSprite_, 1);
        func_02057f00(&shopSprite_, frame_);
        frame_++;
        if (frame_ == 31) {
            phase_ = 2;
        }
        break;
    case 2:
        frame_ = 31;
        func_02057f00(&shopSprite_, 31);
        func_02057ed4(&shopSprite_, 1);
        break;
    case 3:
        frame_ = func_02008ea0(frame_, 0, 31);
        func_02057f00(&shopSprite_, frame_);
        frame_--;
        if (frame_ <= 0) {
            func_02057ed4(&shopSprite_, 0);
            phase_ = 0;
            cleanup();
        }
        break;
    case 4:
        func_02057ed4(&shopSprite_, 0);
        func_02057f00(&blackSprite_, 31);
        frame_++;
        if (frame_ == 31) {
            initialize();
            phase_ = 5;
        }
        break;
    case 5:
        func_02057ed4(&shopSprite_, 1);
        func_02057f00(&shopSprite_, 31 - frame_);
        func_02057f00(&blackSprite_, 31);
        if (--frame_ == 0) {
            func_02057ed4(&shopSprite_, 1);
            func_02057f00(&blackSprite_, 0);
            phase_ = 2;
        }
        break;
    }
}

ARM void TownShopListMap::checkData()
{
    isEnable_ = g_Stage.isShopIcon() != 0;
}

ARM void TownShopListMap::draw()
{
    if (isEnable_) {
        func_020847e8();
        func_02057ec0(&shopSprite_);
    }
}

ARM void TownShopListMap::open()
{
    initialize();
    phase_ = 1;
}

ARM void TownShopListMap::openBlack()
{
    checkData();
    phase_ = 4;
}

ARM void TownShopListMap::close()
{
    phase_ = 3;
}

ARM int TownShopListMap::isOpen()
{
    return phase_ == 2;
}

ARM int TownShopListMap::isClose()
{
    return phase_ == 0;
}
