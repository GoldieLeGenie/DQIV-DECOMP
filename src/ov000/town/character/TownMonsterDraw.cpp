#include "ov000/town/TownCharacter.hpp"
#include "ov000/town/TownCamera.hpp"
#include "main/object/DSSAObject.hpp"

ARM TownMonsterDraw::TownMonsterDraw()
{
}

ARM TownMonsterDraw::~TownMonsterDraw()
{
}

ARM void TownMonsterDraw::setup(TOWN_CHARACTER& data)
{
    TownCharacterBase::setup(data);
    func_0204d04c(&monster_, data_.charaIndex);
    monster_.setPosition(data_.position);
    func_0205b384(&monster_, DSSAObjectWithCamera::Standard);
    display_ = 1;
    func_0205b3a0(&monster_, 0);
    defaultIndex_ = data_.charaIndex;
}

ARM void TownMonsterDraw::cleanup()
{
    if (data_.enable) {
        data_.enable = 0;
        func_0204d084(&monster_);
    }
}

ARM void TownMonsterDraw::execute()
{
    TownCharacterBase::execute();
}

ARM void TownMonsterDraw::draw()
{
    if (!display_) {
        return;
    }
    DSSAObject::calcType_ = 0;
    bool even = (func_02081254() & 1) == 0;
    TownCamera* camera = TownCamera::getSingleton();
    unkfunc_0212ed58(!even ? &camera->camera_.unk_004 : &camera->camera_.unk_068);
    func_0205aa8c(&monster_);
    dss::Fix32Vector3 pos = *monster_.getPosition();
    DSSAObject::calcType_ = 1;
}

ARM void TownMonsterDraw::unkfunc_0212ed58(dss::Camera* camera)
{
    DSSAObjectWithCamera::camera_ = camera;
}

ARM void TownMonsterDraw::setDisplay(int flag)
{
    display_ = flag;
}

ARM int TownMonsterDraw::isDisplay()
{
    return display_;
}

ARM void TownMonsterDraw::setNearCharacter(int flag)
{
    if (flag == 1) {
        func_0205b384(&monster_, DSSAObjectWithCamera::Normal2);
    } else {
        func_0205b384(&monster_, DSSAObjectWithCamera::Standard);
        monster_.setScale(DSSAObject::getDefaultScale2());
    }
}

ARM void TownMonsterDraw::setAnimation(int flag)
{
    func_0205b3a0(&monster_, flag == 0);
}

ARM void TownMonsterDraw::setPosition(dss::Fix32Vector3& pos)
{
    data_.position = pos;
    monster_.setPosition(pos);
}

ARM void TownMonsterDraw::setPaletteRate(dss::Fix32 r, dss::Fix32 g, dss::Fix32 b)
{
    void* palette = monster_.unk_904;
    dss::Fix32 rate[3];
    rate[0] = r;
    rate[1] = g;
    rate[2] = b;
    func_02086034(palette, rate);
}

ARM void TownMonsterDraw::setMotion(int motion, int loop)
{
    func_0205af20(&monster_, motion, loop);
}

ARM bool TownMonsterDraw::isMotion()
{
    return monster_.currentAnimationIndex_ == 0;
}

ARM void TownMonsterDraw::setDir(int dir)
{
}

ARM int TownMonsterDraw::getDir()
{
    return 0;
}

ARM void TownMonsterDraw::changePose(int pose)
{
    func_0204d084(&monster_);
    data_.charaIndex = pose;
    func_0204d04c(&monster_, pose);
    monster_.setPosition(data_.position);
    func_0205b384(&monster_, DSSAObjectWithCamera::Standard);
    display_ = 1;
    func_0205b3a0(&monster_, 0);
}

ARM void TownMonsterDraw::restorePose()
{
    func_0204d084(&monster_);
    data_.charaIndex = defaultIndex_;
    func_0204d04c(&monster_, data_.charaIndex);
    monster_.setPosition(data_.position);
    func_0205b384(&monster_, DSSAObjectWithCamera::Standard);
    display_ = 1;
    func_0205b3a0(&monster_, 0);
}

ARM void TownMonsterDraw::requestReload()
{
    int anim = monster_.currentAnimationIndex_;
    func_0204d084(&monster_);
    func_0204d04c(&monster_, data_.charaIndex);
    monster_.setPosition(data_.position);
    func_0205b384(&monster_, DSSAObjectWithCamera::Standard);
    func_0205b3a0(&monster_, 0);
    func_0205af20(&monster_, anim, 1);
}

ARM void TownMonsterDraw::setAlpha(unsigned char alpha)
{
    func_0205b120(&monster_, alpha);
}
