#include "ov000/town/TownEndrollManager.hpp"
#include "main/cmn/CommonEffectData.hpp"
#include "main/dss/Camera.hpp"
#include "main/profile/Profile.hpp"

THUMB TownEndrollManager::TownEndrollManager()
{
    staffCount_ = 0x80;
    enable_ = 0;
}

THUMB TownEndrollManager::~TownEndrollManager()
{
}

THUMB TownEndrollManager* TownEndrollManager::getSingleton()
{
    static TownEndrollManager m_singleton;
    return &m_singleton;
}

THUMB void TownEndrollManager::setup()
{
    char filename[0x80];
    enable_ = 1;
    frame_ = 0;
    unk_180 = 0;
    for (int i = 0; i < STAFF_MAX; i++) {
        staffPos_[i] = -(i * 0xc0);
        staffIndex_[i] = i;
        if (func_0208a104() == 2) {
            dss::sprintf_s(filename, 0x80, "data/endroll_na/endroll%02d.tex", i);
            staffCount_ = 0x40;
        } else {
            dss::sprintf_s(filename, 0x80, "data/endroll_eu/endroll%02d.tex", i);
            staffCount_ = 0x40;
        }
        staff_[i].unkfunc_02057d60(filename, 1);
        staff_[i].unkfunc_02057f00(0x1f);
        staff_[i].unkfunc_02057f18(0x3f);
        staff_[i].unkfunc_02057ef4();
        staff_[i].sprite_.unk_32 = 1;
        staff_[i].unkfunc_02057e98(0x100, 0xc0);
        staff_[i].unkfunc_02057ea8(0, 0, 0x100, 0xc0);
    }
    theEndFrame_ = 0;
    enableTheEnd_ = 0;
    enableScroll_ = 1;
    staffDone_ = 0;
    unk_18c = -1;
}

THUMB void TownEndrollManager::cleanup()
{
    if (enable_) {
        for (int i = 0; i < STAFF_MAX; i++) {
            if (staff_[i].unkfunc_02057e74()) {
                staff_[i].unkfunc_02057e34();
            }
        }
        theEndData_.cleanup();
        func_02086868(texture_);
        textureData_.cleanup();
        enable_ = 0;
    }
}

THUMB void TownEndrollManager::animTheEnd()
{
    char filename[0x80];
    if (enableTheEnd_ && (func_02081254() & 1)) {
        if (theEndData_.getAddr()) {
            theEndData_.cleanup();
        }
        dss::sprintf_s(filename, 0x80, "data/fin/fin_%03d.tex", theEndFrame_);
        theEndData_.setup(filename, 0, 0);
        theEndTexture_ = theEndData_.getAddr();
        dss::memcpy((void*)func_02086a9c(texture_), (char*)theEndTexture_ + func_02086a9c(theEndTexture_), 0x1800);
        func_02086968(texture_, 0);
        theEndFrame_++;
        if (theEndFrame_ == 0xb5) {
            enableTheEnd_ = 0;
        }
    }
}

THUMB void TownEndrollManager::drawStaffRoll()
{
    char filename[0x80];
    if (enableScroll_ == 0) {
        return;
    }
    for (int i = 0; i < STAFF_MAX; i++) {
        if (!staff_[i].unkfunc_02057e74()) {
            continue;
        }
        if (func_02081254() & 1) {
            staff_[i].unkfunc_02057e88(0, 0xc0 - staffPos_[i]);
        } else {
            staff_[i].unkfunc_02057e88(0, 0x180 - staffPos_[i]);
        }
        if ((staffCount_ - 1 == staffIndex_[i] && staffPos_[i] >= 0xc0) ||
            (staffCount_ - 2 == staffIndex_[i] && staffPos_[i] >= 0x180)) {
            if (staffCount_ - 1 == staffIndex_[i]) {
                staff_[i].unkfunc_02057edc();
            } else {
                staff_[i].unkfunc_02057ee8();
            }
            staff_[i].unkfunc_02057e88(0, 0);
            staff_[i].unkfunc_02057ec0();
            staffDone_ = 1;
            continue;
        }
        if ((unsigned int)frame_ % 3 < 2) {
            staffPos_[i]++;
        }
        staff_[i].unkfunc_02057ec0();
        if (staffPos_[i] >= 0x240) {
            staffPos_[i] = 0;
            staffIndex_[i] = staffIndex_[i] + 3;
            staff_[i].unkfunc_02057e34();
            if (staffIndex_[i] < staffCount_) {
                if (func_0208a104() == 2) {
                    dss::sprintf_s(filename, 0x80, "data/endroll_na/endroll%02d.tex", staffIndex_[i]);
                } else {
                    dss::sprintf_s(filename, 0x80, "data/endroll_eu/endroll%02d.tex", staffIndex_[i]);
                }
                staff_[i].unkfunc_02057d60(filename, 1);
                staff_[i].unkfunc_02057e98(0x100, 0xc0);
                staff_[i].unkfunc_02057ea8(0, 0, 0x100, 0xc0);
            }
        }
    }
    frame_++;
}

THUMB void TownEndrollManager::startTheEnd()
{
    char filename[0x80];
    enableTheEnd_ = 1;
    enableScroll_ = 0;
    dss::sprintf_s(filename, 0x80, "data/fin/fin_000.tex");
    textureData_.setup(filename, 0, 0);
    texture_ = textureData_.getAddr();
    func_02086798(texture_, 1);
    theEnd_.texture_ = texture_;
    theEnd_.unkfunc_02084534(0x48, 0x20);
    theEnd_.unkfunc_02084578(0, 0, 0x80, 0x60);
    theEnd_.unkfunc_0208456c(0x80, 0x60);
    theEnd_.unk_2c = 1;
}

THUMB bool TownEndrollManager::isEndTheEnd()
{
    return theEndFrame_ == 0xb5;
}

THUMB void TownEndrollManager::draw()
{
    if (enable_) {
        unkfunc_020847e8();
        UnkSprite2D& theEnd = theEnd_;
        theEnd.draw();
        drawStaffRoll();
    }
}

THUMB void TownEndrollManager::execute()
{
    if (enable_) {
        animTheEnd();
    }
}

THUMB int TownEndrollManager::isStaffRollEnd()
{
    return staffDone_;
}
