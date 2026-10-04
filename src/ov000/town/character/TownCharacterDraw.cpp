#pragma ipa file
#include "ov000/town/TownCharacter.hpp"
#include "main/script/ScriptSystem.hpp"
#include "nitro/os.hpp"

ARM TownCharacterDraw::TownCharacterDraw()
{
}

ARM TownCharacterDraw::~TownCharacterDraw()
{
}

ARM void TownCharacterDraw::setup(TOWN_CHARACTER& data)
{
    TownCharacterBase::setup(data);
    char name[128];
    dss::sprintf_s(name, sizeof(name), "data/chr/h%03d.pack", data_.charaIndex);
    character_.setup(name, 0);
    character_.setPosition(data_.position);
    func_0204948c(&character_, data_.dir);
    character_.setRender(render_);
    func_02049984(unk_d0);
}

ARM void TownCharacterDraw::execute()
{
    TownCharacterBase::execute();
}

ARM void TownCharacterDraw::cleanup()
{
    data_.enable = 0;
    if (dataObject_.getAddr()) {
        restorePose();
    }
    character_.cleanup();
}

ARM void TownCharacterDraw::setDir(int dir)
{
    data_.dir = dir;
    func_0204948c(&character_, dir);
}

ARM int TownCharacterDraw::getDir()
{
    return data_.dir;
}

ARM void TownCharacterDraw::draw()
{
}

ARM void TownCharacterDraw::setDisplay(int flag)
{
    func_020497a4(&character_, flag);
}

ARM int TownCharacterDraw::isDisplay()
{
    return func_020497e8(&character_);
}

ARM void TownCharacterDraw::setShadow(int flag)
{
    func_02049880(&character_, flag);
}

ARM void TownCharacterDraw::setAnimation(int flag)
{
    func_02049814(&character_, flag);
}

ARM void TownCharacterDraw::setNearCharacter(int flag)
{
    func_02049868(&character_, flag);
}

ARM void TownCharacterDraw::setWriggleCharacter(int flag)
{
    func_020498d0(&character_, flag);
}

ARM void TownCharacterDraw::setPosition(dss::Fix32Vector3& pos)
{
    data_.position = pos;
    character_.setPosition(pos);
}

ARM void TownCharacterDraw::setSleepCharacter(int flag)
{
    type_ = flag == 1 ? TOWN_CHARACTER_SLEEP : TOWN_CHARACTER_NORMAL;
    func_02049898(&character_, flag);
}

ARM void TownCharacterDraw::setAlpha(unsigned char alpha)
{
    character_.setAlpha(alpha);
}

ARM void TownCharacterDraw::changePose(int pose)
{
    func_02049190(&character_);
    if (dataObject_.getAddr()) {
        dataObject_.cleanup();
    }
    char name[128];
    dss::sprintf_s(name, sizeof(name), "data/chr/h%03d.pack", pose);
    OS_Wait();
    dataObject_.setup(name, 0, 0);
    character_.setTexture(dataObject_.getAddr());
    data_.charaIndex = pose;
}

ARM void TownCharacterDraw::restorePose()
{
    func_02049190(&character_);
    if (dataObject_.getAddr()) {
        dataObject_.cleanup();
    }
    character_.resetTexture();
}

ARM void TownCharacterDraw::setPaletteRate(dss::Fix32 r, dss::Fix32 g, dss::Fix32 b)
{
    setRGB.set(r, g, b);
    func_02049a00(&character_, 1);
    func_020499f0(&character_, &setRGB);
}

ARM bool TownCharacterDraw::isEndPalletRate()
{
    if (rgbFrame_ == 0) {
        dss::Fix32Vector3 rate;
        rate.vx.value = rate.vy.value = rate.vz.value = 0x1000;
        func_020499f0(&character_, &rate);
    } else if (rgbFrame_ == -1) {
        func_02049a00(&character_, 0);
        return true;
    }
    return false;
}

ARM void TownCharacterDraw::requestReload()
{
    func_02049a18(&character_);
}
