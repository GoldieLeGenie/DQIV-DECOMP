#pragma ipa file
#include "ov003/btl/BattleMonsterMask.hpp"
#include "ov003/btl/BattleActorAnimation.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"
#include "main/status/HaveEquipment.hpp"
#include "main/global/Global.hpp"

static dss::Fix32 unkScale(1.0f);
int BattleMonsterMask::monsterRectTemp[12];

THUMB BattleMonsterMask::BattleMonsterMask() : select_(-1)
{
}

THUMB BattleMonsterMask::~BattleMonsterMask()
{
}

THUMB BattleMonsterMask* BattleMonsterMask::getSingleton()
{
    static BattleMonsterMask battleMonsterMask;
    return &battleMonsterMask;
}

THUMB void BattleMonsterMask::initialize()
{
    sprite_.unk_2c = 3;
    sprite_.setPolygonID(0x3e);
    sprite_.unk_28 = 0;
    sprite_.setAlpha(10);
    func_02084534(&sprite_, 0, 0);
    func_0208456c(&sprite_, 0x80, 0x80);
    sprite_.enable_ = 0;
    func_02084e8c(&sprite_, 0, 0, 0);
    func_02057d60(&mask_[0], "data/mask/en02.tex", 0);
    func_02057f00(&mask_[0], 1);
    func_02057d60(&mask_[1], "data/mask/en01.tex", 0);
    func_02057f00(&mask_[1], 1);
    for (int i = 0; i < 2; i++) {
        func_02057ef4(&mask_[i]);
        func_02057f18(&mask_[i], 0x3e);
        func_02057f30(&mask_[i], 0);
        func_02057e88(&mask_[i], 0, 0);
        func_02057ed4(&mask_[i], 0);
    }
    scale_ = 0x1000;
}

THUMB void BattleMonsterMask::setup()
{
    select_ = -1;
    for (int i = 0; i < g_monster.getCount(); i++) {
        if (g_monster.getMonsterStatus(i)->isEnable()) {
            calcTargetPos(i);
        }
    }
}

THUMB void BattleMonsterMask::terminate()
{
    for (int i = 0; i < 2; i++) {
        func_02057e34(&mask_[i]);
    }
}

THUMB void BattleMonsterMask::execute()
{
}

THUMB void BattleMonsterMask::select(int groupId)
{
    select_ = groupId;
}

THUMB void BattleMonsterMask::draw()
{
    if (select_ < 0) {
        sprite_.enable_ = 0;
        for (int i = 0; i < 2; i++) {
            func_02057ed4(&mask_[i], 0);
        }
        return;
    }
    sprite_.enable_ = 1;
    for (int i = 0; i < 2; i++) {
        func_02057ed4(&mask_[i], 1);
    }
    for (int i = 0; i < g_monster.getCount(); i++) {
        if (g_monster.getMonsterStatus(i)->isBattleEnable() && select_ == g_monster.getMonsterGroup(i)) {
            targetPos[i] = getTargetPos(i);
        }
    }
    func_020848a8();
    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 12; i++) {
            if (select_ == g_monster.getMonsterGroup(i) && g_monster.getMonsterStatus(i)->isBattleEnable()) {
                func_02057e88(&mask_[j], targetPos[i].vx / 2, targetPos[i].vy * 2 / 3);
                func_02057f38(&mask_[j], 0);
                func_02057ec0(&mask_[j]);
            }
        }
    }
    sprite_.draw();
}

THUMB void BattleMonsterMask::calcTargetPos(int actorindex)
{
    dss::Fix32 x;
    dss::Fix32 y;
    dss::Fix32Vector3 pos;
    int index = g_monster.getMonsterStatus(actorindex)->haveStatusInfo_.drawCtrlId_;
    dss::Fix32Vector3* position = btl::BattleMonsterDraw2::getSingleton()->monsters_[index].monsterDraw_.getPosition();
    pos = dss::Fix32Vector3(position->vx, position->vy, position->vz);
    func_0205710c(actorindex, &pos);
}

THUMB dss::Vector2<int> BattleMonsterMask::getTargetPos(int actorindex)
{
    dss::Vector2<int> screen;
    int monster = g_monster.getMonsterIndex(actorindex);
    short* rect = data_020c04f4[monster];
    int maskScaleX = status::HaveEquipment::getAbsoluteValue(rect[1] - rect[3]);
    int maskScaleY = ((scale_ * status::HaveEquipment::getAbsoluteValue(rect[2] - rect[4])).value / 4096);
    maskScaleX = (scale_ * maskScaleX).value / 4096;
    screen = *func_02057128(actorindex);
    maskScaleY = maskScaleY * 2 / 3;
    screen.vx -= maskScaleY;
    screen.vy -= maskScaleX;
    for (int i = 0; i < 2; i++) {
        func_02057e98(&mask_[i], maskScaleY, maskScaleX);
    }
    return screen;
}

THUMB int* BattleMonsterMask::getMonsterTouchRect(int actorindex)
{
    int monster = g_monster.getMonsterIndex(actorindex);
    short* rect = data_020c04f4[monster];
    int w = status::HaveEquipment::getAbsoluteValue(rect[2] - rect[4]);
    int h = status::HaveEquipment::getAbsoluteValue(rect[1] - rect[3]);
    dss::Vector2<int> screen = *func_02057128(actorindex);
    monsterRectTemp[0] = g_monster.getMonsterGroup(actorindex);
    monsterRectTemp[1] = screen.vx - w / 2;
    monsterRectTemp[2] = screen.vy - h - rect[3] / 2;
    monsterRectTemp[3] = screen.vx + w / 2;
    monsterRectTemp[4] = screen.vy;
    return monsterRectTemp;
}
