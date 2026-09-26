#include "ov000/Commands/TownCommand.hpp"
#include "ov000/TownPlayerManager.hpp"
#include "ov000/TownStageManager.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/global/Global.hpp"
#include "main/cmn/TalkSoundManager.hpp"
#include "main/menu/MenuDataCommon.hpp"
#include "main/dss/Random.hpp"
#include "main/profile/Profile.hpp"

extern "C" TownPlayerManager* func_ov000_02132a90();

THUMB int cmd_set_character_position(int* param)
{
    int index = func_0202375c();
    dss::Fx32Vector3 pos;
    pos.vx.value = param[0];
    pos.vy.value = param[1];
    pos.vz.value = param[2];
    func_ov000_02138598(func_ov000_02137f2c(), index, &pos);
    return 1;
}

THUMB int cmd_set_character_direction(int* param)
{
    int index = func_0202375c();
    func_ov000_021383bc(func_ov000_02137f2c(), index, param[0] << 14);
    return 1;
}

THUMB int cmd_character_action_sleep(int* param)
{
    int index = func_0202375c();
    func_ov000_021385b8(func_ov000_02137f2c(), index, param[0]);
    return 1;
}

THUMB int cmd_character_action_display(int* param)
{
    int index = func_0202375c();
    func_ov000_021384c0(func_ov000_02137f2c(), index, param[0]);
    return 1;
}

THUMB int cmd_character_action_near(int* param)
{
    int index = func_0202375c();
    func_ov000_021384a0(func_ov000_02137f2c(), index, param[0]);
    return 1;
}

THUMB int cmd_map_animation_a(int* param)
{
    func_ov000_02139e90(func_ov000_02139668(), param[0], param[1], 1);
    return 1;
}

THUMB int cmd_set_map_collision(int* param)
{
    if (param[1] == 1) {
        func_ov000_02139668()->setCollision(param[0], 0);
        func_ov000_02139668()->setCollisionObject(param[0]);
    } else {
        func_ov000_02139668()->setCollision(param[0], 1);
        func_ov000_0213a960(func_ov000_02139668(), param[0]);
    }
    return 1;
}

THUMB int cmd_chara_set_priority_sure_appointment(int* param)
{
    int values[5];
    values[0] = param[3];
    values[1] = param[4];
    values[2] = param[5];
    values[3] = param[6];
    values[4] = param[7];
    for (unsigned int i = 0; i < (unsigned int)param[2]; i++) {
        if (values[i] < 100) {
            values[i]--;
        }
    }
    if (g_Global.isAreaChange() == 1) {
        func_02037e20(func_02037da4(), param[0], param[1], param[2], values);
    }
    return 1;
}

THUMB int cmd_chara_set_normal_sure_appointment(int* param)
{
    if (g_Global.isAreaChange() == 1) {
        func_02037db0(func_02037da4(), param[0], param[1]);
    }
    return 1;
}

THUMB int cmd_chara_set_normal_sure(int* param)
{
    int index = func_0202375c();
    int id = func_02023778(index);
    int result = func_02037ef4(func_02037da4(), id, param[0]);
    if (result != 0xff) {
        func_ov000_02137f2c()->setSureId(index, param[0]);
        func_ov000_02137f2c()->chara_[index]->vf3c(result);
    } else {
        func_ov000_021384c0(func_ov000_02137f2c(), index, 0);
    }
    return 0;
}

THUMB int cmd_chara_talk_to_player_sure(int* param)
{
    int index = func_0202375c();
    if (index < func_020236a8()) {
        func_02056358(((cmn::TalkSoundManager*)data_020efcc0)->getCharacterVoice(index));
    }
    if (param[1] == 1) {
        data_020f0078 = 1;
    } else {
        int id = func_02023778(index);
        int value = func_ov000_0212eb90(func_ov000_02137f2c()->chara_[index]);
        func_0203a34c(&data_020f0078, func_02037f40(func_02037da4(), id, value));
    }
    if (param[0] == 1) {
        func_ov000_02138308(func_ov000_02137f2c(), index);
    }

    unsigned char* name = func_0203a65c(&data_020f0078);
    unsigned char* comment = func_0203a938(&data_020f0078);
    unsigned char sex = func_0203a714(&data_020f0078);
    unsigned char aetas = func_0203a750(&data_020f0078);
    unsigned char skill = func_0203a78c(&data_020f0078);
    unsigned char* townName = func_0203a820(&data_020f0078);
    char text0[0x40];
    char text1[0x40];
    char text2[0x40];
    func_ov016_0216fa48(text0, text1, text2, (int)comment);
    func_0205462c(0, (int)name);
    func_0205462c(1, (int)text0);
    func_0205462c(2, (int)text1);
    func_0205462c(3, (int)text2);
    func_0205462c(4, (int)townName);
    func_ov000_0213747c(func_ov000_021372e8());

    if (param[1] == 1) {
        func_02054364(0x1c, 0xd0000000, 0);
        func_02054380(0x21, 0xd0000000, 1);
        func_0205439c(0x21, 0xd0000000, 2);
        func_020543b8(0x21, 0xd0000000, 3);
        func_ov000_02137470(func_ov000_021372e8(), 0x92a8c);
    } else {
        func_02054364(0x1d, 0xd0000000, 0);
        func_02054380(0x20, 0xd0000000, 1);
        func_0205439c(0x20, 0xd0000000, 2);
        func_020543b8(0x20, 0xd0000000, 3);
        func_ov000_02137470(func_ov000_021372e8(), 0x92ac0);
    }

    if (param[1] != 1) {
        func_02056358(0x30);
        func_0205462c(0, (int)name);
        func_02054364(0x1d, 0xd0000000, 0);
        func_02054364(0x22, 0xa0000000, menu::MenuDataCommon::getSurechigaiAetas(aetas) & 0xfffffff);
        func_02054364(0x23, 0xa0000000, menu::MenuDataCommon::getSuretigaiSex(sex) & 0xfffffff);
        func_02054364(0x24, 0xe0000000, menu::MenuDataCommon::getSurechigaiSkill(skill) & 0xfffffff);
        func_02054364(0x1e, 0xd0000000, 4);
        func_ov000_02137470(func_ov000_021372e8(), 0x92ac1);
    }
    return 1;
}

THUMB int cmd_set_surechigai_level(int* param)
{
    return 1;
}

THUMB int cmd_character_action_stepping(int* param)
{
    int index = func_0202375c();
    func_ov000_02138480(func_ov000_02137f2c(), index, 0);
    func_ov000_02138460(func_ov000_02137f2c(), index, 1);
    return 1;
}

THUMB int cmd_character_action_still(int* param)
{
    int index = func_0202375c();
    func_ov000_02138480(func_ov000_02137f2c(), index, 0);
    func_ov000_02138460(func_ov000_02137f2c(), index, 0);
    return 1;
}

THUMB int cmd_character_action_wriggle(int* param)
{
    int index = func_0202375c();
    func_ov000_02138460(func_ov000_02137f2c(), index, 1);
    func_ov000_02138480(func_ov000_02137f2c(), index, 1);
    return 1;
}

THUMB int cmd_player_action_stepping(int* param)
{
    func_ov000_0213b17c(&func_ov000_02132a90()->unk_c, 0);
    func_ov000_0213b118(&func_ov000_02132a90()->unk_c, 1);
    return 1;
}

THUMB int cmd_player_action_still(int* param)
{
    func_ov000_0213b17c(&func_ov000_02132a90()->unk_c, 0);
    func_ov000_0213b118(&func_ov000_02132a90()->unk_c, 0);
    return 1;
}

THUMB int cmd_player_action_wriggle(int* param)
{
    func_ov000_0213b10c(&func_ov000_02132a90()->unk_c, 1);
    func_ov000_0213b17c(&func_ov000_02132a90()->unk_c, 1);
    return 1;
}

THUMB int cmd_set_character_collision(int* param)
{
    int index = func_0202375c();
    func_ov000_02138670(func_ov000_02137f2c(), index, param[0]);
    return 1;
}

THUMB int cmd_is_trigger(int* param)
{
    dss::Fx32Vector3 pos = func_ov000_02132a90()->getPosition();
    if (param[0] < pos.vx.value && param[3] > pos.vx.value &&
        param[1] < pos.vy.value && param[4] > pos.vy.value &&
        param[2] < pos.vz.value && param[5] > pos.vz.value) {
        return 1;
    }
    return 0;
}

THUMB int cmd_is_trigger2(int* param)
{
    dss::Fx32Vector3 pos = func_ov000_02132a90()->getPosition();
    if (param[0] < pos.vx.value && param[3] > pos.vx.value &&
        param[1] < pos.vy.value && param[4] > pos.vy.value &&
        param[2] < pos.vz.value && param[5] > pos.vz.value) {
        short dir = func_ov000_02132a90()->getDirection();
        dss::Fx32Vector3 front;
        func_ov000_02130f48(dir, &front);
        dss::Fx32Vector3 target = func_ov000_02131b1c((unsigned char)param[6]);
        dss::Fx32 dot = front * target;
        if (dot >= dss::Fx32(data_ov000_021487ac)) {
            return 1;
        }
    }
    return 0;
}

THUMB int cmd_character_action_pursue(int* param)
{
    TownCharaMoveParam move;
    int index = func_0202375c();
    if (func_ov000_02137f2c()->chara_[index]->moveType_ != 3) {
        func_ov000_02138670(func_ov000_02137f2c(), index, 0);
        index = func_0202375c();
        move.speed_.value = param[0];
        func_020872fc(&move.speed_, &data_ov000_021487b0);
        move.unk_38 = 0;
        move.unk_34 = 0;
        TownCharacter** chara = func_ov000_02137f2c()->chara_;
        chara[index]->moveType_ = 3;
        TownCharacter* c = chara[index];
        c->movePos_[0] = move.pos_[0];
        c->movePos_[1] = move.pos_[1];
        c->movePos_[2] = move.pos_[2];
        c->movePos_[3] = move.pos_[3];
        func_0208718c(&c->moveSpeed_, &move.speed_);
        c->unk_c4 = move.unk_34;
        c->unk_c8 = move.unk_38;
    }
    return 1;
}

THUMB int cmd_character_move_roam(int* param)
{
    int index = func_0202375c();
    TownCharaMoveParam move;
    move.unk_38 = dssrand::rand(0x50);
    move.unk_34 = 0;
    move.pos_[0].vx.value = param[0];
    move.pos_[0].vy.value = param[1];
    move.pos_[0].vz.value = param[2];
    move.pos_[1].vx.value = param[3];
    move.pos_[1].vy.value = param[4];
    move.pos_[1].vz.value = param[5];
    move.speed_.value = param[6];
    func_020872fc(&move.speed_, &data_ov000_021487b0);
    TownCharacter** chara = func_ov000_02137f2c()->chara_;
    chara[index]->moveType_ = 1;
    TownCharacter* c = chara[index];
    c->movePos_[0] = move.pos_[0];
    c->movePos_[1] = move.pos_[1];
    c->movePos_[2] = move.pos_[2];
    c->movePos_[3] = move.pos_[3];
    func_0208718c(&c->moveSpeed_, &move.speed_);
    c->unk_c4 = move.unk_34;
    c->unk_c8 = move.unk_38;
    return 1;
}

THUMB int cmd_is_trigger_character(int* param)
{
    int index = func_0202375c();
    dss::Fx32Vector3 pos = *func_ov000_021383ac(func_ov000_02137f2c(), index);
    short dir = func_ov000_02138744(func_ov000_02137f2c(), index);
    dss::Fx32Vector3 min;
    dss::Fx32Vector3 max;
    min.set(param[0], param[1], param[2]);
    max.set(param[3], param[4], param[5]);
    TriggerCheck check = param[6] == 0 ? TRIGGER_CHECK_0 : TRIGGER_CHECK_1;
    int type = param[7] == 0 ? 7 : 6;
    return func_020320ac(&pos, dir, &min, &max, check, type);
}

THUMB int cmd_is_trigger2_character(int* param)
{
    TriggerCheck check;
    int index = func_0202375c();
    dss::Fx32Vector3 pos = *func_ov000_021383ac(func_ov000_02137f2c(), index);
    short dir = func_ov000_02138744(func_ov000_02137f2c(), index);
    dss::Fx32Vector3 min;
    dss::Fx32Vector3 max;
    min.set(param[0], param[1], param[2]);
    max.set(param[3], param[4], param[5]);
    switch (param[6]) {
    case 0:
        check = TRIGGER_CHECK_2;
        break;
    case 1:
        check = TRIGGER_CHECK_3;
        break;
    case 2:
        check = TRIGGER_CHECK_4;
        break;
    case 3:
        check = TRIGGER_CHECK_5;
        break;
    }
    int type = param[7] == 0 ? 7 : 6;
    return func_020320ac(&pos, dir, &min, &max, check, type);
}

THUMB int cmd_party_join(int* param)
{
    int index = func_0202376c(param[0]);
    status::g_Party.add(param[1]);
    func_ov000_02132a90()->resetParty();
    func_ov000_021384c0(func_ov000_02137f2c(), index, 0);
    func_ov000_02138670(func_ov000_02137f2c(), index, 0);
    return 1;
}

THUMB int cmd_party_quit(int* param)
{
    status::g_Party.setNormalMode();
    int index = func_0202375c();
    int sortIndex = status::g_Party.getSortIndex(param[1]);
    int order[4] = {0, 0, 0, 0};
    if (sortIndex == -1) {
        return 1;
    }
    for (int i = 0; i < status::g_Party.getCarriageOutCount(); i++) {
        if (param[1] != status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveStatus_.playerIndex_) {
            order[i] = status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveStatus_.playerIndex_;
        }
    }
    dss::Fx32Vector3 pos = func_ov000_0213beec((char*)func_ov000_02132a90() + 0x134c, sortIndex);
    func_ov000_021384c0(func_ov000_02137f2c(), index, 1);
    func_ov000_02138670(func_ov000_02137f2c(), index, 1);
    func_ov000_02138598(func_ov000_02137f2c(), index, &pos);
    status::g_Party.del(param[1]);
    status::g_Party.reorder(order[0], order[1], order[2], order[3]);
    func_ov000_02132a90()->resetParty();
    return 1;
}
