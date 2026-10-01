#include "ov000/town/TownMapEffect.hpp"
#include "main/data/FileLoader.hpp"
#include "main/script/ScriptSystem.hpp"

ARM void TownMapEffect::setup(EFFECT_TYPE type)
{
    char path[128];
    type_ = type;
    unkfunc_02142790();
    m_enable = 0;
    if (loaded_) {
        func_02057e34(&sprite0_);
    }
    loaded_ = 1;
    if (exist_) {
        switch (type_) {
        case EFFECT_TYPE_DREAM1:
            func_02088308(path, sizeof(path), "data/mask/siro1a1.tex");
            func_02057d60(&sprite0_, path, 0);
            func_02057edc(&sprite0_);
            func_02057f00(&sprite0_, 30);
            func_02057f18(&sprite0_, 60);
            func_02057ee8(&sprite1_);
            func_02057f18(&sprite1_, 61);
            break;
        case EFFECT_TYPE_DREAM2:
            func_02088308(path, sizeof(path), "data/mask/siro1a2.tex");
            func_02057d60(&sprite0_, path, 0);
            func_02057edc(&sprite0_);
            func_02057f00(&sprite0_, 30);
            func_02057f18(&sprite0_, 60);
            func_02057dac(&sprite1_);
            func_02057ee8(&sprite1_);
            func_02057f18(&sprite1_, 61);
            break;
        case EFFECT_TYPE_DEATHPISARO:
            func_02088308(path, sizeof(path), "data/mask/pisaro.tex");
            func_02057d60(&sprite0_, path, 0);
            func_02057edc(&sprite0_);
            func_02057f00(&sprite0_, 30);
            func_02057f18(&sprite0_, 60);
            x_ = 128;
            y_ = 96;
            width_ = 256;
            height_ = 192;
            break;
        }
    }
    red_ = 31;
    green_ = 31;
    blue_ = 31;
    m_counter = -1;
}

ARM void TownMapEffect::execute()
{
    if (m_enable == 0) {
        return;
    }
    if (exist_) {
        func_02057ed4(&sprite0_, 1);
    } else {
        loaded_ = 0;
        func_02057ed4(&sprite0_, 0);
    }
}

ARM void TownMapEffect::draw()
{
    if (m_enable == 0) {
        return;
    }
    if (exist_) {
        func_020847e8();
        switch (type_) {
        case EFFECT_TYPE_DREAM1:
        case EFFECT_TYPE_DREAM2:
            func_02057ea8(&sprite0_, 0, 0, 127, 95);
            func_02057e98(&sprite0_, 128, 96);
            func_02057e88(&sprite0_, 0, 0);
            func_02057f38(&sprite0_, 0);
            func_02057f40(&sprite0_, red_, green_, blue_);
            func_02057ec0(&sprite0_);
            func_02057e88(&sprite0_, 128, 96);
            func_02057f38(&sprite0_, 0x8000);
            func_02057f40(&sprite0_, red_, green_, blue_);
            func_02057ec0(&sprite0_);
            func_02057ea8(&sprite0_, 127, 0, 0, 95);
            func_02057e98(&sprite0_, 128, 96);
            func_02057e88(&sprite0_, 128, 0);
            func_02057f38(&sprite0_, 0);
            func_02057f40(&sprite0_, red_, green_, blue_);
            func_02057ec0(&sprite0_);
            func_02057e88(&sprite0_, 0, 96);
            func_02057f38(&sprite0_, 0x8000);
            func_02057f40(&sprite0_, red_, green_, blue_);
            func_02057ec0(&sprite0_);
            func_02057e88(&sprite1_, 0, 0);
            func_02057e98(&sprite1_, 256, 192);
            func_02057f40(&sprite1_, red_, green_, blue_);
            func_02057ec0(&sprite1_);
            break;
        case EFFECT_TYPE_DEATHPISARO:
            func_02057e98(&sprite0_, width_, height_);
            func_02057e88(&sprite0_, x_ - (width_ >> 1), y_ - (height_ >> 1));
            func_02057ec0(&sprite0_);
            break;
        }
    }
    if (m_counter > -1) {
        green_ = 3100 / m_base_counter * m_counter / 100;
        blue_ = 3100 / m_base_counter * m_counter / 100;
        m_counter--;
    }
}

ARM void TownMapEffect::setPisaroEvent(int count)
{
    m_base_counter = count;
    m_counter = count;
}

ARM void TownMapEffect::cleanup()
{
    if (loaded_) {
        func_02057e34(&sprite0_);
        exist_ = 0;
        m_enable = 0;
    }
    loaded_ = 0;
}

ARM void TownMapEffect::unkfunc_02142790()
{
    char path[128];
    exist_ = 0;
    switch (type_) {
    case EFFECT_TYPE_DREAM1:
        func_02088308(path, sizeof(path), "data/mask/siro1a1.tex");
        exist_ = func_0207ebd4(&data_02116ce8, path);
        break;
    case EFFECT_TYPE_DREAM2:
        func_02088308(path, sizeof(path), "data/mask/siro1a2.tex");
        exist_ = func_0207ebd4(&data_02116ce8, path);
        break;
    case EFFECT_TYPE_DEATHPISARO:
        func_02088308(path, sizeof(path), "data/mask/pisaro.tex");
        exist_ = func_0207ebd4(&data_02116ce8, path);
        break;
    }
}

ARM void TownMapEffect::unkfunc_02142850(fx32 scaleX)
{
}

ARM void TownMapEffect::unkfunc_02142854(fx32 scaleY)
{
}
