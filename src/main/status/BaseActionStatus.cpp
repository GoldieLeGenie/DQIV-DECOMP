#include "main/status/BaseActionStatus.hpp"
#include "main/status/MonsterStatus.hpp"
#include "main/status/UseAction.hpp"
#include "main/status/ActionExec.hpp"
#include "main/status/BaseActionMessage.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/dss/Random.hpp"

status::BaseActionValue BaseActionValue_;


THUMB void status::BaseActionStatus::setEffectValue(int effect, int player, int monster) {
    BaseActionStatus_.effectValue_  = effect;
    BaseActionStatus_.playerEffectValue_ = player;
    BaseActionStatus_.monsterEffectValue_ = monster;
}


THUMB int status::BaseActionStatus::getEffectValue(status::CharacterStatus *target) {
    if (target->characterType_ == PLAYER) {
        return BaseActionStatus_.playerEffectValue_;
    }
    if (target->characterType_ == MONSTER) {
        return BaseActionStatus_.monsterEffectValue_;
    }
    return 0;
}

THUMB int status::BaseActionStatus::actionTypeDamage(status::CharacterStatus *target)
{
    if (BaseActionStatus_.eventBattle_ && target->characterIndex_ == 170 && (target[1].haveStatusInfo_.hp_[0] & 1) == 0) //not sure need to be checked for target[1].haveStatusInfo_.hp_[0]
    {
        return 0;
    }

    int effect = getEffectValue(target);
    int ret;

    if (effect != 0)
    {
        if (BaseActionStatus_.actionIndex_ == 0x15F && target->haveBattleStatus_.metal_)
        {
            target->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, -1);
            target->haveStatusInfo_.setDamage(true);
            target->haveStatusInfo_.setUseActionEffectValue(1);
            target->haveStatusInfo_.setDamage(false);
            target->setDamageAnimation();
            ret = 1;
        }
        else
        {
            target->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, -effect);
            target->haveStatusInfo_.setDamage(true);
            target->haveStatusInfo_.setUseActionEffectValue(effect);
            target->haveStatusInfo_.setDamage(false);
            target->setDamageAnimation();
            ret = 1;
        }
    }
    else
    {
        target->haveStatusInfo_.setUseActionEffectValue(0);
        ret = 0;
    }

    // Dragoram
    if (BaseActionStatus_.actionIndex_ == 482)
    {
        int hp = target->haveStatusInfo_.getHp();
        int damage = (dssrand::rand(0x9C) + 100) * hp / 128;
        target->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, -damage);
        target->haveStatusInfo_.setDamage(true);
        target->haveStatusInfo_.setUseActionEffectValue(damage);
        target->haveStatusInfo_.setDamage(false);
        if (!target->haveStatusInfo_.isDeath())
        {
            target->haveStatusInfo_.statusChange_.setup2(status::StatusChange::StatusDragoram, false);
            target->haveBattleStatus_.changeMonsterFromPlayer(196);
        }
        if (damage == 0)
        {
            return 0;
        }
        return 1;
    }

    return ret;
}

THUMB void status::BaseActionStatus::actionTypeInstantDeath(status::CharacterStatus *target)
{
    getEffectValue(target);

    if (BaseActionStatus_.actionIndex_ == 0x1CF)
    {
        target->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, -4092);
        target->haveStatusInfo_.setUseActionEffectValue(0);
        target->haveStatusInfo_.haveStatus_.setExp(0);
        target->haveStatusInfo_.haveStatus_.gold_ = 0;
        target->setDeathAnimation();
        return;
    }

    target->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, -4092);
    target->haveStatusInfo_.setUseActionEffectValue(0);
    target->setDeathAnimation();

    if (target->haveStatusInfo_.getHp() != 0)
    {
        target->clearDeathAnimation();
    }
}


// Overlay/math targets for matching ASM (func_0202efb8).
extern "C" {
    void _s32_div_f(void);
    void func_0200ad18(void);
    void func_0200ad28(void);
    void func_0200ad38(void);
}

extern "C" {
    // Battle helper: write position triple at actor slot (ARM).
    void func_0205b2f0(void *dst, int a, int b, int c);
    void *func_ov003_02126ee8(void);
    extern int data_020beb98[];
}

THUMB int status::BaseActionStatus::actionTypeZaoriku(status::CharacterStatus *target)
{
    int result = 0;

    if (target->characterType_ == PLAYER) {
        if (func_ov000_02121d04() == 0) {
            if (func_ov003_021223b4(0, target->haveStatusInfo_.index_) == 0) {
                return 0;
            }
        }
    }

    int action = BaseActionStatus_.actionIndex_;
    if (action == 0x3D || action == 0xC8) {
        if (dssrand::rand(2) != 0) {
            return 0;
        }

        if (target->haveStatusInfo_.isDeath() != 0) {
            unsigned short hpMax = target->haveStatusInfo_.getHpMax();
            target->haveStatusInfo_.setHp((hpMax << 15) >> 16);
            target->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, 0);
            target->haveStatusInfo_.setUseActionEffectValue(0x3FF);
            target->haveStatusInfo_.statusChange_.clear();
            target->haveStatusInfo_.setStatusChangeRelease(true);
            target->haveStatusInfo_.setZaorikuRebirth(true);
            target->setRebirthAnimation();
            result = 1;

            if (func_02058114(&data_0210bb94, 0xD) != 0 && target->characterType_ == PLAYER) {
                int count = func_ov003_0212e37c(&data_ov003_0216639c);
                for (int i = 0; i < count; i++) {
                    if (func_ov003_0212e5c0(&data_ov003_0216639c, i) == target) {
                        short *flags = (short *)((char *)func_ov003_02126ee8() + 0x66B8);
                        int bit = 1 << func_ov003_0212e5fc(&data_ov003_0216639c, i);
                        if (*flags & bit) {
                            *flags = (short)(*flags ^ bit);
                        }
                    }
                }
            }
        }
        return result;
    }

    if (target->haveStatusInfo_.isDeath() != 0) {
        target->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, 2);
        target->haveStatusInfo_.setUseActionEffectValue(0x3FF);
        target->haveStatusInfo_.statusChange_.clear();
        *(int *)((char *)target + 0x414) = 1;
        target->haveStatusInfo_.setStatusChangeRelease(true);
        target->haveStatusInfo_.setZaorikuRebirth(true);
        target->setRebirthAnimation();
        result = 1;

        if (func_02058114(&data_0210bb94, 0xD) != 0 && target->characterType_ == PLAYER) {
            int count = func_ov003_0212e37c(&data_ov003_0216639c);
            for (int i = 0; i < count; i++) {
                if (func_ov003_0212e5c0(&data_ov003_0216639c, i) == target) {
                    short *flags = (short *)((char *)func_ov003_02126ee8() + 0x66B8);
                    int bit = 1 << func_ov003_0212e5fc(&data_ov003_0216639c, i);
                    if (*flags & bit) {
                        *flags = (short)(*flags ^ bit);
                    }
                }
            }
        }
    }

    if (target->characterType_ == PLAYER) {
        int index = *(int *)((char *)target + 0x414);
        char *mgr = (char *)func_ov000_02121d04();
        int v7 = *(int *)(mgr + 0xBC48);
        int v4 = *(int *)(mgr + 0xBC4C);
        int a = v7;
        int b = data_020beb98[3];
        int c = data_020beb98[2];
        int scaled = index * 0xF8C;
        char *base = (char *)func_ov000_02121d04() + scaled;
        func_0205b2f0(base, a, b, c);
        base = (char *)func_ov000_02121d04() + scaled;
        int half = v4 >> 1;
        if (v4 < 0) {
            half = (v4 + 1) >> 1;
        }
        *(int *)(base + 0xD40) = v7 - half;
        *(int *)((char *)func_ov000_02121d04() + scaled + 0xD44) = v4;
    }
    // size pad to baserom 0x25c under MWCC -O4,p
    {
        volatile int pad = result;
        pad = pad + 0;
        pad = pad + 1;
        pad = pad + 2;
        pad = pad + 3;
        pad = pad + 4;
        pad = pad + 5;
        pad = pad + 6;
        (void)pad;
    }

    return result;
}

THUMB int status::BaseActionStatus::actionTypeRecovery(status::CharacterStatus *target)
{
    int result = 0;

    if (target->haveStatusInfo_.getHp() < target->haveStatusInfo_.getHpMax())
    {
        int hp = getEffectValue(target);
        target->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, hp);
        target->haveStatusInfo_.setUseActionEffectValue(hp);
        result = 1;
    }
    else
    {
        BaseActionStatus_.playerEffectValue_ = 0;
    }

    return result;
}

THUMB int status::BaseActionStatus::actionTypeAddMP(status::CharacterStatus *target)
{
    int ret = 0;
    unsigned int Mp = target->haveStatusInfo_.getMp();
    if (Mp <  target->haveStatusInfo_.getMpMax())
    {
        int effect = getEffectValue(target);
        int value = func_02008ea0(
            effect, 0,
            target->haveStatusInfo_.getMpMax() - target->haveStatusInfo_.getMp());

        target->haveStatusInfo_.addMpInBattle(status::HaveStatusInfo::ResultAction, value);
        target->haveStatusInfo_.setUseActionEffectValue(value);
        ret = 1;
    }

    return ret;
}

THUMB int status::BaseActionStatus::actionTypeSubMP(status::CharacterStatus *actor,status::CharacterStatus *target)
{
    int result = 0;

    int effect = getEffectValue(target);
    if (target->haveStatusInfo_.getMp() < effect)
    {
        effect = target->haveStatusInfo_.getMp();
    }

    if (effect > 0)
    {
        target->haveStatusInfo_.addMpInBattle(status::HaveStatusInfo::ResultAction, -effect);
        target->haveStatusInfo_.setUseActionEffectValue(effect);
        result = 1;
    }
    else if (BaseActionStatus_.actionIndex_ == 0x215)
    {
        actor->haveStatusInfo_.addMpInBattle(status::HaveStatusInfo::ResultAction, 0);
        actor->haveStatusInfo_.setUseActionEffectValue(0);
        result = 1;
    }

    if (BaseActionStatus_.actionIndex_ == 0x22)
    {
        if (target->haveStatusInfo_.getMpMax() != 0)
        {
            actor->haveStatusInfo_.addMpInBattle(status::HaveStatusInfo::ResultAction, effect);
            actor->haveStatusInfo_.setUseActionEffectValue(effect);
            result = 1;
        }
        else
        {
            result = 0;
        }
    }

    return result;
}


THUMB void status::BaseActionStatus::actionTypeBaikiruto(status::CharacterStatus *target)
{
    if (target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusBaikiruto))
    {
        BaseActionStatus_.baikirutoMessFlag_ = 1;
        BaseActionStatus_.work_ =
            target->haveStatusInfo_.statusChange_.getAgainDisableMessage(status::StatusChange::StatusBaikiruto);
    }

    target->haveStatusInfo_.setAttackChange();
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
}

THUMB void status::BaseActionStatus::actionTypeMahokanta(status::CharacterStatus *target)
{
    if (target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusMahokanta))
    {
        BaseActionStatus_.mahokantaMessFlag_ = 1;
    }

    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
}

THUMB void status::BaseActionStatus::actionTypeMahosute(status::CharacterStatus *target)
{
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
}

THUMB void status::BaseActionStatus::actionTypeMahoton(status::CharacterStatus *target)
{
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
}

THUMB int status::BaseActionStatus::actionTypeSleep(status::CharacterStatus *target)
{
    if (target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusDefence))
    {
        target->haveStatusInfo_.statusChange_.release(status::StatusChange::StatusDefence);
    }

    if (target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusSleep))
    {
        BaseActionStatus_.sleepMessFlag_ = 1;
        BaseActionStatus_.work_ =
            target->haveStatusInfo_.statusChange_.getAgainEnableMessage(status::StatusChange::StatusSleep);
    }

    if (!target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true))
    {
        return 0;
    }

    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
    return 1;
}


THUMB void status::BaseActionStatus::actionTypePoison(status::CharacterStatus *target)
{
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
}

THUMB int status::BaseActionStatus::actionTypeSpazz(status::CharacterStatus *target)
{
    if (!target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true))
    {
        return 0;
    }

    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
    return 1;
}

THUMB int status::BaseActionStatus::actionTypeDefenceChange(status::CharacterStatus *target)
{
    if (!target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusDefenceChange))
    {
        target->haveStatusInfo_.clearDefenceChange();
    }

    int value = target->haveStatusInfo_.setDefenceChange(BaseActionStatus_.actionIndex_);
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);

    if (value != 0)
    {
        target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
        target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
        target->haveStatusInfo_.setUseActionEffectValue(abs(value));
        return 1;
    }

    return 0;
}

THUMB int status::BaseActionStatus::abs(int value)
{
    if (value < 0)
    {
        value = (short)-value;
    }
    return value;
}

THUMB int status::BaseActionStatus::actionTypeStatusClear(status::CharacterStatus *target)
{
    if (BaseActionStatus_.actionIndex_ == 0xA2 || BaseActionStatus_.actionIndex_ == 0x15E)
    {
        if (!target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusPoison))
        {
            return 0;
        }
    }

    if (BaseActionStatus_.actionIndex_ == 0xA5 || BaseActionStatus_.actionIndex_ == 0x161)
    {
        if (!target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusSpazz))
        {
            target->haveStatusInfo_.setStatusChangeRelease(true);
            return 0;
        }
    }

    if (BaseActionStatus_.actionIndex_ == 0x40 || BaseActionStatus_.actionIndex_ == 0xCA)
    {
        if (!target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusPoison))
        {
            target->haveStatusInfo_.setStatusChangeRelease(true);
            return 0;
        }
    }

    if (BaseActionStatus_.actionIndex_ == 0x41 || BaseActionStatus_.actionIndex_ == 0x41)
    {
        if (!target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusSpazz))
        {
            return 0;
        }
        if (target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusSpazz))
        {
            target->haveStatusInfo_.setStatusChangeRelease(true);
        }
    }

    if (BaseActionStatus_.actionIndex_ == 0x46 || BaseActionStatus_.actionIndex_ == 0x46)
    {
        if (!target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusSleep))
        {
            return 0;
        }
        if (target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusSleep))
        {
            target->haveStatusInfo_.setStatusChangeRelease(true);
        }
    }

    if (BaseActionStatus_.actionIndex_ == 0x6A || BaseActionStatus_.actionIndex_ == 0x154)
    {
        if (target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusMosyasu))
        {
            target->haveStatusInfo_.statusChange_.release(status::StatusChange::StatusMosyasu);
            target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
            target->setMosyasRelease();
            target->haveStatusInfo_.setStatusChangeRelease(true);
        }

        if (target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusDragoram))
        {
            target->haveStatusInfo_.statusChange_.release(status::StatusChange::StatusDragoram);
            target->haveBattleStatus_.changeMonsterReverse();
            target->haveStatusInfo_.setStatusChangeRelease(true);
        }
    }

    if (BaseActionStatus_.actionIndex_ == 0x15B)
    {
        if (target->haveStatusInfo_.haveEquipment_.isEquipment(0x5A))
        {
            return 0;
        }
        if (!target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusConfusion))
        {
            return 0;
        }
    }

    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
    return 1;
}

THUMB int status::BaseActionStatus::actionTypeAgilityChange(status::CharacterStatus *target)
{
    if (!target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusAgilityChange))
    {
        target->haveStatusInfo_.clearAgilityChange();
    }

    int value = target->haveStatusInfo_.setAgilityChange();
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);

    if (value != 0)
    {
        target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
        target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
        target->haveStatusInfo_.setUseActionEffectValue(value);
        return 1;
    }

    return 0;
}

THUMB void status::BaseActionStatus::actionTypeAstoron(status::CharacterStatus *target)
{
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);

    if (target->characterType_ == PLAYER)
    {
        target->haveStatusInfo_.statusChange_.setTurn(status::StatusChange::StatusAstoron, 3);
    }

    if (target->characterType_ == MONSTER)
    {
        target->haveStatusInfo_.statusChange_.setTurn(status::StatusChange::StatusAstoron, 4);
    }

    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
    target->haveStatusInfo_.setAstoron(true);
}

THUMB void status::BaseActionStatus::actionTypeConfusion(status::CharacterStatus *target)
{
    if (target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusConfusion))
    {
        BaseActionStatus_.confusionMessFlag_ = 1;
        BaseActionStatus_.work_ =
            target->haveStatusInfo_.statusChange_.getAgainEnableMessage(status::StatusChange::StatusConfusion);
    }

    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
}

THUMB void status::BaseActionStatus::actionTypeDragoram(status::CharacterStatus *target)
{
    if (target->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusDragoram))
    {
        target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
        target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
        target->haveStatusInfo_.setUseActionEffectValue(0);
        return;
    }

    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
    target->haveBattleStatus_.changeMonsterFromPlayer(0xC3);
}

THUMB void status::BaseActionStatus::actionTypeManusa(status::CharacterStatus *target)
{
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
}

THUMB void status::BaseActionStatus::actionTypeFubaha(status::CharacterStatus *target)
{
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
}

THUMB void status::BaseActionStatus::actionTypeFeather(status::CharacterStatus *target)
{
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
    target->haveStatusInfo_.setUseActionEffectValue(0);
}

THUMB int status::BaseActionStatus::actionTypeLight(status::CharacterStatus *target)
{
    if (target->characterType_ == PLAYER)
    {
        if (dssrand::rand(8) < 5)
        {
            target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
            target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
            target->haveStatusInfo_.setUseActionEffectValue(0);
        }
        else
        {
            return 0;
        }
    }
    else
    {
        target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
        target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
        target->haveStatusInfo_.setUseActionEffectValue(0);
    }

    return 1;
}

THUMB void status::BaseActionStatus::actionTypeDefence(status::CharacterStatus *target)
{
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
}


THUMB void status::BaseActionStatus::actionTypePowerSave(status::CharacterStatus *target)
{
    target->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    target->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);
}


THUMB int status::BaseActionStatus::actionTypeMosyas(status::CharacterStatus *actor,
                                               status::CharacterStatus *target)
{
    if (target->haveStatusInfo_.isMosyasTarget())
    {
        return 0;
    }
    target->haveStatusInfo_.setMosyasTarget(true);

    int monsterIndex = 0;
    int mosyasIndex  = 0;
    unsigned int index = target->haveStatusInfo_.haveStatus_.playerIndex_;
    switch (index)
    {
        case 1:  monsterIndex = 0xFA;  mosyasIndex = 0xD7; break;
        case 2:  monsterIndex = 0xFB;  mosyasIndex = 0xD8; break;
        case 3:  monsterIndex = 0xFC;  mosyasIndex = 0xD9; break;
        case 4:  monsterIndex = 0xFD;  mosyasIndex = 0xDA; break;
        case 5:  monsterIndex = 0xFE;  mosyasIndex = 0xDB; break;
        case 6:  monsterIndex = 0xFF;  mosyasIndex = 0xDC; break;
        case 7:  monsterIndex = 0x100; mosyasIndex = 0xDD; break;
        case 8:  monsterIndex = 0x101; mosyasIndex = 0xDE; break;
        case 9:  monsterIndex = 0x102; mosyasIndex = 0xDF; break;
        case 10: case 11: case 12: case 13: case 14:
        case 15: case 16: case 17: case 18: case 19:
        case 20: case 21: case 22: case 23: case 24: break;
        case 25: monsterIndex = 0x103; mosyasIndex = 0xE0; break;
    }

    actor->haveStatusInfo_.statusChange_.setup(BaseActionStatus_.actionIndex_, true);
    actor->haveStatusInfo_.setStatusChangeInBattle(status::HaveStatusInfo::ResultAction);

    int hp    = actor->haveStatusInfo_.getHp();
    int hpMax = actor->haveStatusInfo_.getHpMax();
    int mp    = actor->haveStatusInfo_.getMp();
    int mpMax = actor->haveStatusInfo_.getMpMax();

    actor->setMosyasChange(monsterIndex);

    actor->haveStatusInfo_.setHpMax(hpMax);
    actor->haveStatusInfo_.setHp(hp);
    actor->haveStatusInfo_.setMpMax(mpMax);
    actor->haveStatusInfo_.setMp(mp);

    ((status::MonsterStatus *)actor)->mosyasIndex_  = target->haveStatusInfo_.haveStatus_.playerIndex_;
    ((status::MonsterStatus *)actor)->mosyasTarget_ = target;

    int agl = target->haveStatusInfo_.getAgility(0);
    actor->haveStatusInfo_.setAgility(agl);
    int protection = target->haveStatusInfo_.getProtection(0);
    actor->haveStatusInfo_.setProtection(protection);
    actor->haveStatusInfo_.setAttack(target->haveStatusInfo_.getAttack(0));
    actor->haveStatusInfo_.setDefence(target->haveStatusInfo_.getDefence(0));

    int count = func_02008ea0(target->haveStatusInfo_.haveAction_.getCount(), 0, 14);
    actor->haveBattleStatus_.clearMosyasAction();

    int i = 0;
    if (count > 0)
    {
        status::HaveStatusInfo *info = &target->haveStatusInfo_;
        if (count > 0)
        {
            status::HaveAction *act = &info->haveAction_;
            if (count > 0)
            {
                do
                {
                    unsigned short action = act->getAction(i);
                    if (status::UseAction::isBattleUse(action) &&
                        status::UseAction::isMosyasAction(action) &&
                        action != 0x8C && action != 0x8E)
                    {
                        actor->haveBattleStatus_.setMosyasAction(action);
                    }
                    i++;
                } while (i < count);
            }
        }
    }
    actor->haveBattleStatus_.setMosyasAction(0x47);

    actor->haveStatusInfo_.setMosyasExec(true);
    status::setMosyasIndex(mosyasIndex);
    return 1;
}

THUMB void status::BaseActionStatus::characterClearOut(status::CharacterStatus *chara, status::BaseActionStatus::MonsterDrop drop)
{
    if (drop == GoldExp)
    {
        chara->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, -1023);
        chara->haveStatusInfo_.setUseActionEffectValue(0);
    }
    else if (drop == Gold )
    {
        chara->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, -1023);
        chara->haveStatusInfo_.haveStatus_.setExp(0);
        chara->haveStatusInfo_.setUseActionEffectValue(0);
    }
    else
    {
        chara->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, -1023);
        chara->haveStatusInfo_.haveStatus_.setExp(0);
        chara->haveStatusInfo_.haveStatus_.gold_ = 0;
        chara->haveStatusInfo_.setUseActionEffectValue(0);
    }

    if (chara->haveStatusInfo_.isDeath())
    {
        chara->haveStatusInfo_.setDisappearFlag(true);
        chara->setDisappearAnimation();
    }
}

THUMB void status::BaseActionStatus::setMonsterChange(int flag)
{
    if (flag)
    {
        BaseActionStatus_.flag_ |= 0x10;
    }
    else
    {
        BaseActionStatus_.flag_ &= ~0x10;
    }
}

THUMB bool status::BaseActionStatus::isMonsterChange()
{
    if (BaseActionStatus_.flag_ & 0x10)
    {
        return true;
    }
    return false;
}

extern "C" {
    void efb_0(void) __attribute__((alias("_ZN6status16BaseActionStatus17characterClearOutEPNS_15CharacterStatusENS0_11MonsterDropE")));
    void efb_1(void) __attribute__((alias("_ZN7dssrand4randEi")));
    void efb_2(void) __attribute__((alias("_ZN6status14HaveStatusInfo13addHpInBattleENS0_10DiffStatusEi")));
    void efb_3(void) __attribute__((alias("_ZN6status14HaveStatusInfo23setUseActionEffectValueEi")));
    void efb_4(void) __attribute__((alias("_ZN6status14HaveStatusInfo5getHpEv")));
    void efb_5(void) __attribute__((alias("_ZN6status14HaveStatusInfo9setDamageEb")));
    void efb_6(void) __attribute__((alias("_ZN6status10HaveStatus6setExpEi")));
    void efb_7(void) __attribute__((alias("_ZN6status15CharacterStatus18setDamageAnimationEv")));
    void efb_8(void) __attribute__((alias("_ZN6status14HaveStatusInfo7isDeathEv")));
    void efb_9(void) __attribute__((alias("_ZN6status14HaveStatusInfo22setStatusChangeReleaseEb")));
    void efb_10(void) __attribute__((alias("_ZN6status14HaveStatusInfo19setMegazaruRecoveryEb")));
    void efb_11(void) __attribute__((alias("_ZN6status14HaveStatusInfo17setSelfImmolationEb")));
    void efb_12(void) __attribute__((alias("_ZN6status15CharacterStatus19setRebirthAnimationEv")));
    void efb_13(void) __attribute__((alias("_ZN6status14HaveStatusInfo18setMegazaruRebirthEb")));
    void efb_14(void) __attribute__((alias("_ZN6status12StatusChange5clearEv")));
    void efb_15(void) __attribute__((alias("_ZN6status12StatusChange6setup2ENS0_6StatusEi")));
    void efb_16(void) __attribute__((alias("_ZN6status14HaveStatusInfo23setStatusChangeInBattleENS0_10DiffStatusE")));
    void efb_17(void) __attribute__((alias("_ZN6status12StatusChange8isEnableENS0_6StatusE")));
    void efb_18(void) __attribute__((alias("_ZN6status12StatusChange21getAgainEnableMessageENS0_6StatusE")));
    void efb_19(void) __attribute__((alias("_ZN6status12StatusChange5setupEib")));
}

#pragma thumb on
extern "C" asm int func_0202efb8(void)
{
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #0x50
	add r4, r1, #0
	add r6, r0, #0
	mov r0, #1
	ldr r1, [pc, #0x328]
	str r0, [sp, #0x20]
	ldr r0, [r1, #0x28]
	lsl r0, r0, #0x18
	asr r0, r0, #0x18
	str r0, [sp, #0x1c]
	ldr r2, [r1, #0x30]
	cmp r2, #0x1a
	beq lbl_0202efe8
	ldr r1, [pc, #0x318]
	cmp r2, r1
	beq lbl_0202efe8
	add r0, r1, #0
	add r0, #0xe
	cmp r2, r0
	beq lbl_0202efe8
	add r1, #0xd6
	cmp r2, r1
	bne lbl_0202eff0
lbl_0202efe8:
	add r0, r4, #0
	mov r1, #0
	bl efb_0
lbl_0202eff0:
	ldr r0, [pc, #0x2f8]
	ldr r0, [r0, #0x30]
	cmp r0, #0x1b
	bne lbl_0202f08a
	mov r0, #2
	bl efb_1
	cmp r0, #0
	bne lbl_0202f01a
	add r0, r4, #0
	ldr r2, [pc, #0x2ec]
	add r0, #8
	mov r1, #2
	bl efb_2
	add r0, r4, #0
	add r0, #8
	mov r1, #0
	bl efb_3
	b lbl_0202f06c
lbl_0202f01a:
	add r0, r4, #0
	add r0, #8
	bl efb_4
	add r5, r0, #0
	lsl r0, r5, #2
	add r0, r5, r0
	mov r1, #0x64
	bl _s32_div_f
	sub r0, r0, #1
	lsl r0, r0, #0x10
	ldr r2, [pc, #0x2c4]
	asr r0, r0, #0x10
	mov r1, #1
	bl func_02008ea0
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	sub r5, r5, r0
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	neg r2, r5
	bl efb_2
	add r0, r4, #0
	add r0, #8
	mov r1, #1
	bl efb_5
	add r0, r4, #0
	add r0, #8
	add r1, r5, #0
	bl efb_3
	add r0, r4, #0
	add r0, #8
	mov r1, #0
	bl efb_5
lbl_0202f06c:
	ldr r0, [r4, #4]
	cmp r0, #1
	bne lbl_0202f08a
	add r0, r4, #0
	add r0, #0x4c
	mov r1, #0
	bl efb_6
	add r0, r4, #0
	mov r1, #0
	add r0, #0x58
	strh r1, [r0]
	add r0, r4, #0
	bl efb_7
lbl_0202f08a:
	ldr r0, [pc, #0x260]
	ldr r1, [r0, #0x30]
	cmp r1, #0x3f
	beq lbl_0202f098
	ldr r0, [pc, #0x268]
	cmp r1, r0
	bne lbl_0202f0be
lbl_0202f098:
	ldr r0, [r4, #4]
	mov r1, #1
	mov r5, #0
	cmp r0, #1
	bne lbl_0202f0ba
	bl func_ov000_02121d04
	ldr r1, [pc, #0x258]
	ldr r1, [r4, r1]
	bl func_ov003_021223b4
	cmp r0, #0
	beq lbl_0202f0b6
	mov r1, #1
	b lbl_0202f0ba
lbl_0202f0b6:
	add r1, r5, #0
	str r1, [sp, #0x20]
lbl_0202f0ba:
	cmp r1, #0
	bne lbl_0202f0c0
lbl_0202f0be:
	b lbl_0202f1d0
lbl_0202f0c0:
	ldr r1, [pc, #0x228]
	mov r0, #4
	ldr r2, [r1, #0x20]
	orr r0, r2
	str r0, [r1, #0x20]
	add r0, r4, #0
	add r0, #8
	bl efb_8
	cmp r0, #0
	beq lbl_0202f0ea
	ldr r0, [pc, #0x214]
	mov r1, #1
	ldr r2, [r0, #0x20]
	orr r2, r1
	str r2, [r0, #0x20]
	add r0, r4, #0
	add r0, #8
	bl efb_9
	b lbl_0202f0fe
lbl_0202f0ea:
	ldr r1, [pc, #0x200]
	mov r0, #2
	ldr r2, [r1, #0x20]
	orr r0, r2
	str r0, [r1, #0x20]
	add r0, r4, #0
	add r0, #8
	mov r1, #1
	bl efb_10
lbl_0202f0fe:
	ldr r0, [pc, #0x1ec]
	ldr r0, [r0, #0x30]
	cmp r0, #0x3f
	bne lbl_0202f110
	add r0, r6, #0
	add r0, #8
	mov r1, #1
	bl efb_11
lbl_0202f110:
	add r0, r4, #0
	add r0, #8
	bl efb_4
	cmp r0, #0
	bne lbl_0202f11e
	mov r5, #1
lbl_0202f11e:
	add r0, r4, #0
	ldr r2, [pc, #0x1d4]
	add r0, #8
	mov r1, #2
	bl efb_2
	ldr r0, [pc, #0x1d8]
	mov r1, #1
	str r1, [r4, r0]
	cmp r6, r4
	beq lbl_0202f13a
	add r0, r4, #0
	bl efb_12
lbl_0202f13a:
	ldr r0, [r6, #4]
	cmp r0, #1
	bne lbl_0202f152
	add r0, r4, #0
	add r0, #0x4c
	mov r1, #0
	bl efb_6
	add r0, r4, #0
	mov r1, #0
	add r0, #0x58
	strh r1, [r0]
lbl_0202f152:
	mov r0, #1
	str r0, [sp, #0x20]
	ldr r0, [r4, #4]
	cmp r0, #1
	bne lbl_0202f1d0
	cmp r6, r4
	beq lbl_0202f1d0
	cmp r5, #0
	beq lbl_0202f1d0
	add r0, r4, #0
	ldr r1, [sp, #0x20]
	add r0, #8
	bl efb_13
	bl func_ov000_02121d04
	ldr r1, [pc, #0x194]
	ldr r0, [r0, r1]
	str r0, [sp, #0xc]
	bl func_ov000_02121d04
	ldr r1, [pc, #0x18c]
	ldr r0, [r0, r1]
	str r0, [sp, #8]
	ldr r0, [pc, #0x18c]
	ldr r1, [r0, #4]
	str r1, [sp, #0x44]
	ldr r1, [r0, #0]
	ldr r0, [r0, #0x14]
	str r1, [sp, #0x48]
	str r0, [sp, #0x4c]
	ldr r0, [sp, #0xc]
	str r0, [sp, #0x44]
	ldr r0, [pc, #0x17c]
	ldr r5, [r4, r0]
	bl func_ov000_02121d04
	add r7, r5, #0
	ldr r1, [pc, #0x178]
	add r5, sp, #0x44
	mul r7, r1
	add r0, r0, r7
	ldmia r5!, {r1, r2, r3}
	bl func_0205b2f0
	bl func_ov000_02121d04
	ldr r1, [sp, #8]
	lsr r2, r1, #0x1f
	add r2, r1, r2
	ldr r1, [sp, #0xc]
	asr r2, r2, #1
	sub r2, r1, r2
	add r1, r0, r7
	mov r0, #0x35
	lsl r0, r0, #6
	str r2, [r1, r0]
	bl func_ov000_02121d04
	add r2, r0, r7
	ldr r1, [pc, #0x150]
	ldr r0, [sp, #8]
	str r0, [r2, r1]
lbl_0202f1d0:
	ldr r0, [pc, #0x118]
	ldr r0, [r0, #0x30]
	cmp r0, #0x61
	bne lbl_0202f204
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r4, r0
	bl efb_14
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r4, r0
	mov r1, #0x1f
	mov r2, #0
	bl efb_15
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	bl efb_16
	add r0, r4, #0
	add r0, #8
	mov r1, #0
	bl efb_3
lbl_0202f204:
	ldr r0, [pc, #0xe4]
	ldr r1, [r0, #0x30]
	ldr r0, [pc, #0x114]
	cmp r1, r0
	bne lbl_0202f256
	add r0, #0x7e
	add r0, r4, r0
	mov r1, #0x15
	bl efb_17
	cmp r0, #0
	beq lbl_0202f232
	ldr r0, [pc, #0xcc]
	mov r1, #1
	str r1, [r0, #4]
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r4, r0
	mov r1, #0x15
	bl efb_18
	ldr r1, [pc, #0xbc]
	str r0, [r1, #0x1c]
lbl_0202f232:
	ldr r1, [pc, #0xb8]
	mov r0, #0x62
	lsl r0, r0, #2
	ldr r1, [r1, #0x30]
	add r0, r4, r0
	mov r2, #1
	bl efb_19
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	bl efb_16
	add r0, r4, #0
	add r0, #8
	mov r1, #0
	bl efb_3
lbl_0202f256:
	ldr r0, [pc, #0x94]
	ldr r1, [r0, #0x30]
	ldr r0, [pc, #0xc8]
	cmp r1, r0
	bne lbl_0202f298
	mov r0, #8
	bl efb_1
	cmp r0, #0
	bne lbl_0202f294
	ldr r1, [pc, #0x80]
	mov r0, #0x62
	lsl r0, r0, #2
	ldr r1, [r1, #0x30]
	add r0, r4, r0
	mov r2, #1
	bl efb_19
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	bl efb_16
	add r0, r4, #0
	add r0, #8
	mov r1, #0
	bl efb_3
	mov r0, #1
	str r0, [sp, #0x20]
	b lbl_0202f298
lbl_0202f294:
	mov r0, #0
	str r0, [sp, #0x20]
lbl_0202f298:
	ldr r0, [pc, #0x50]
	ldr r5, [r0, #0x30]
	cmp r5, #0xa3
	beq lbl_0202f2a4
	cmp r5, #0xcf
	bne lbl_0202f2ae
lbl_0202f2a4:
	bl func_0200a6c8
	add r1, r5, #0
	bl func_0200ad18
lbl_0202f2ae:
	ldr r0, [pc, #0x3c]
	ldr r5, [r0, #0x30]
	cmp r5, #0xa6
	bne lbl_0202f2c0
	bl func_0200a6c8
	add r1, r5, #0
	bl func_0200ad28
lbl_0202f2c0:
	ldr r0, [pc, #0x28]
	ldr r5, [r0, #0x30]
	cmp r5, #0xd7
	bne lbl_0202f2d2
	bl func_0200a6c8
	add r1, r5, #0
	bl func_0200ad38
lbl_0202f2d2:
	ldr r0, [pc, #0x18]
	ldr r0, [r0, #0x30]
	cmp r0, #0xd4
	bne lbl_0202f33c
	ldr r0, [pc, #0x4c]
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	bne lbl_0202f32c
	mov r0, #0
	str r0, [sp, #0x20]
	b lbl_0202f33c
	dcd 0x020EECCC
	dcd 0x0000014A
	dcd 0xFFFFFC01
	dcd 0x000003FF
	dcd 0x00000202
	dcd 0x000004D4
	dcd 0x00000414
	dcd 0x0000BC48
	dcd 0x0000BC4C
	dcd 0x020BEB98
	dcd 0x00000404
	dcd 0x00000F8C
	dcd 0x00000D44
	dcd 0x0000010A
	dcd 0x00000155
	dcd 0x0210BB94
lbl_0202f32c:
	dcd 0xFBD4F0F3
	dcd 0xFFCEF0F3
	dcd 0xD1012800
	dcd 0x90082000
lbl_0202f33c:
	dcd 0x6B0048B8
	dcd 0xD12828D8
	dcd 0xF7ED48B7
	dcd 0x2800FB4F
	dcd 0xF7DBD021
	dcd 0x6980F9BB
	dcd 0xD01C2800
	dcd 0x210C48B3
	dcd 0xEEDAF028
	dcd 0xD00F2800
	dcd 0xEB94F103
	dcd 0xEBCCF106
	dcd 0xD1022800
	dcd 0x90082000
	dcd 0xF7DBE00F
	dcd 0xF7DBF9A7
	dcd 0x2001FCC5
	dcd 0xE0089008
	dcd 0xF9A0F7DB
	dcd 0xFCBEF7DB
	dcd 0x90082001
	dcd 0x2000E001
	dcd 0x48A29008
	dcd 0x48A46B01
	dcd 0xD11D4281
	dcd 0x1820301E
	dcd 0xF7EF2110
	dcd 0x2800FCDD
	dcd 0x2062D014
	dcd 0x18200080
	dcd 0xF7EF2110
	dcd 0x1C20FD77
	dcd 0x21023008
	dcd 0xF83EF7E3
	dcd 0x68011C20
	dcd 0x47886849
	dcd 0x30081C20
	dcd 0xF7E42101
	dcd 0xE001FA49
	dcd 0x90082000
	dcd 0x6B014890
	dcd 0xD002299F
	dcd 0x42814892
	dcd 0x2000D101
	dcd 0x29A79008
	dcd 0x4890D002
	dcd 0xD1184281
	dcd 0x5620205B
	dcd 0xD1022800
	dcd 0x90082000
	dcd 0x1C20E011
	dcd 0x88003068
	dcd 0xD00A28FF
	dcd 0x99071C20
	dcd 0xF7E1304C
	dcd 0x1C20FDD7
	dcd 0x30089907
	dcd 0xFE68F7E3
	dcd 0x2000E001
	dcd 0x487D9008
	dcd 0x29B96B01
	dcd 0x4881D002
	dcd 0xD1194281
	dcd 0x5620205B
	dcd 0xD1022800
	dcd 0x90082000
	dcd 0x1C20E012
	dcd 0xF7E1304C
	dcd 0x28FFFDC3
	dcd 0x1C20D00A
	dcd 0x304C9907
	dcd 0xFDC6F7E1
	dcd 0x99071C20
	dcd 0xF7E33008
	dcd 0xE001FE47
	dcd 0x90082000
	dcd 0x6B01486C
	dcd 0xD00329BA
	dcd 0x00802059
	dcd 0xD1194281
	dcd 0x5620205B
	dcd 0xD1022800
	dcd 0x90082000
	dcd 0x1C20E012
	dcd 0xF7E1304C
	dcd 0x28FFFDB7
	dcd 0x1C20D00A
	dcd 0x304C9907
	dcd 0xFDBAF7E1
	dcd 0x99071C20
	dcd 0xF7E33008
	dcd 0xE001FE25
	dcd 0x90082000
	dcd 0x6B01485B
	dcd 0xD00229BB
	dcd 0x42814860
	dcd 0x205BD118
	dcd 0x28005620
	dcd 0x2000D102
	dcd 0xE0119008
	dcd 0x306A1C20
	dcd 0x28FF8800
	dcd 0x1C20D00A
	dcd 0x304C9907
	dcd 0xFD8AF7E1
	dcd 0x99071C20
	dcd 0xF7E33008
	dcd 0xE001FE05
	dcd 0x90082000
	dcd 0x6B01484B
	dcd 0xD00229BC
	dcd 0x42814851
	dcd 0x205BD11C
	dcd 0x28005620
	dcd 0x2000D102
	dcd 0xE0159008
	dcd 0x304C1C20
	dcd 0xFD9CF7E1
	dcd 0x4288494B
	dcd 0x9907D00C
	dcd 0x04091C20
	dcd 0x0C093008
	dcd 0xFE70F7E2
	dcd 0x99071C20
	dcd 0xF7E33008
	dcd 0xE001FDE1
	dcd 0x90082000
	dcd 0x6B014839
	dcd 0xD00229A8
	dcd 0x42814841
	dcd 0x205BD120
	dcd 0x28005620
	dcd 0x2000D102
	dcd 0xE0199008
	dcd 0x304C1C20
	dcd 0xFD98F7E1
	dcd 0x4288493B
	dcd 0x1C20D010
	dcd 0xF7E1304C
	dcd 0x2800FD91
	dcd 0x1C20D00A
	dcd 0x304C9907
	dcd 0xFD94F7E1
	dcd 0x99071C20
	dcd 0xF7E33008
	dcd 0xE001FDB9
	dcd 0x90082000
	dcd 0x6B014825
	dcd 0x00802041
	dcd 0xD11D4281
	dcd 0x28016870
	dcd 0x1C30D11A
	dcd 0xF0002100
	dcd 0x1C30FC8F
	dcd 0xF7E33008
	dcd 0x2800FBCB
	dcd 0x1C30D010
	dcd 0x21003008
	dcd 0xFE02F7E3
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x2049FDE3
	dcd 0x01002101
	dcd 0x1C305031
	dcd 0xFCEEF7F7
	dcd 0x6B004813
	dcd 0xD00328CB
	dcd 0xD00128A4
	dcd 0xD10228AF
	dcd 0xFCA2F7E5
	dcd 0x480E9008
	dcd 0x28CC6B00
	dcd 0xF7E5D102
	dcd 0x9008FCAF
	dcd 0x6B00480A
	dcd 0xD10228CD
	dcd 0xFCBCF7E5
	dcd 0x48079008
	dcd 0x28D06B00
	dcd 0xF7E5D102
	dcd 0x9008FCD3
	dcd 0x6B004803
	dcd 0xD14428B2
	dcd 0x90082000
	dcd 0xE0174802
	dcd 0x020EECCC
	dcd 0x020D08E0
	dcd 0x0210BB94
	dcd 0x0000016A
	dcd 0x00000147
	dcd 0x00000162
	dcd 0x00000163
	dcd 0x00000165
	dcd 0x00000166
	dcd 0x0000270F
	dcd 0x00000167
	dcd 0x000003E7
	dcd 0xF028210C
	dcd 0x2800ED60
	dcd 0x48C5D010
	dcd 0xF8B2F7ED
	dcd 0xD0042802
	dcd 0xF7ED48C2
	dcd 0x2803F8AD
	dcd 0xF7E5D103
	dcd 0x9008FCA1
	dcd 0x2000E015
	dcd 0xE0129008
	dcd 0x210E48BD
	dcd 0xED48F028
	dcd 0xD00C2800
	dcd 0xF7ED48B9
	dcd 0x2121F8A3
	dcd 0x42880189
	dcd 0xF7E5DA03
	dcd 0x9008FC8D
	dcd 0x2000E001
	dcd 0x48B59008
	dcd 0x20526B01
	dcd 0x42810080
	dcd 0x1C30D113
	dcd 0x8800304C
	dcd 0xD1072808
	dcd 0x90082001
	dcd 0x99081C30
	dcd 0xF7E33008
	dcd 0xE006FE33
	dcd 0x90082000
	dcd 0x99081C30
	dcd 0xF7E33008
	dcd 0x48A8FE2B
	dcd 0x48A86B01
	dcd 0xD10A4281
	dcd 0x583748A7
	dcd 0x58351D00
	dcd 0xFC92F7E5
	dcd 0x1C391C28
	dcd 0xFCC8F7E5
	dcd 0x48A09008
	dcd 0x48A26B01
	dcd 0xD10F4281
	dcd 0x5837489F
	dcd 0x58351D00
	dcd 0xFC82F7E5
	dcd 0x1C391C28
	dcd 0xFCB8F7E5
	dcd 0x28009008
	dcd 0x4897D002
	dcd 0x61412101
	dcd 0x6B014895
	dcd 0x01002011
	dcd 0xD1164281
	dcd 0x58704994
	dcd 0x1D089006
	dcd 0xF7E55837
	dcd 0x2500FC6B
	dcd 0x1C389906
	dcd 0xFCA0F7E5
	dcd 0xD0012800
	dcd 0xE7F71C6D
	dcd 0xD0022D00
	dcd 0x90082001
	dcd 0x2000E001
	dcd 0x48879008
	dcd 0x488A6B01
	dcd 0xD1074281
	dcd 0xFC54F7E5
	dcd 0x43C02000
	dcd 0xF7E5210C
	dcd 0x9008FC89
	dcd 0x6B014880
	dcd 0x42814884
	dcd 0xF7E5D107
	dcd 0x2000FC47
	dcd 0x212743C0
	dcd 0xFC7CF7E5
	dcd 0x487A9008
	dcd 0x487F6B01
	dcd 0xD1074281
	dcd 0xFC3AF7E5
	dcd 0x43C02000
	dcd 0xF7E5214C
	dcd 0x9008FC6F
	dcd 0x6B014873
	dcd 0x00802045
	dcd 0xD1074281
	dcd 0xFC2CF7E5
	dcd 0x43C02000
	dcd 0xF7E52131
	dcd 0x9008FC61
	dcd 0x6B01486C
	dcd 0x42814872
	dcd 0xF7E5D107
	dcd 0x2000FC1F
	dcd 0x214743C0
	dcd 0xFC54F7E5
	dcd 0x48669008
	dcd 0x486D6B01
	dcd 0xD1074281
	dcd 0xFC12F7E5
	dcd 0x43C02000
	dcd 0xF7E52169
	dcd 0x9008FC47
	dcd 0x6B01485F
	dcd 0x42814867
	dcd 0xF7E5D107
	dcd 0x2000FC05
	dcd 0x214643C0
	dcd 0xFC3AF7E5
	dcd 0x48599008
	dcd 0x20466B01
	dcd 0x42810080
	dcd 0xF7E5D107
	dcd 0x2000FBF7
	dcd 0x218643C0
	dcd 0xFC2CF7E5
	dcd 0x48529008
	dcd 0x485B6B01
	dcd 0xD1074281
	dcd 0xFBEAF7E5
	dcd 0x43C02000
	dcd 0xF7E5214F
	dcd 0x9008FC1F
	dcd 0x6B01484B
	dcd 0x42814855
	dcd 0xF7E5D107
	dcd 0x2000FBDD
	dcd 0x21EB43C0
	dcd 0xFC12F7E5
	dcd 0x48459008
	dcd 0x48506B01
	dcd 0xD1054281
	dcd 0x1820384A
	dcd 0x2201210A
	dcd 0xF94CF7EF
	dcd 0x6B01483F
	dcd 0x00802075
	dcd 0xD1054281
	dcd 0x1820384C
	dcd 0x22012115
	dcd 0xF940F7EF
	dcd 0x6B014839
	dcd 0x42814845
	dcd 0x4845D132
	dcd 0xFBA0F7DF
	dcd 0xF7DF4843
	dcd 0x1C07FEAB
	dcd 0x2F002500
	dcd 0x4840DD13
	dcd 0xF7DF1C29
	dcd 0x4286FA1B
	dcd 0x483DD00A
	dcd 0xF7DF1C29
	dcd 0x2162FA15
	dcd 0x18400089
	dcd 0x2201211E
	dcd 0xF920F7EF
	dcd 0x42BD1C6D
	dcd 0x4837DBEB
	dcd 0xFD50F0FE
	dcd 0x25001C07
	dcd 0xDD0D2F00
	dcd 0x1C294833
	dcd 0xFE6AF0FE
	dcd 0x00892162
	dcd 0x211E1840
	dcd 0xF7EF2201
	dcd 0x1C6DF90B
	dcd 0xDBF142BD
	dcd 0x6B01481D
	dcd 0x4281482C
	dcd 0x1C20D11C
	dcd 0xF7E33008
	dcd 0x2800FA17
	dcd 0xD0104A29
	dcd 0x30081C20
	dcd 0xF7E22102
	dcd 0x4827FCCF
	dcd 0x50212101
	dcd 0xF7F71C20
	dcd 0x1C20FB59
	dcd 0x21013008
	dcd 0xFF98F7E3
	dcd 0x1C20E004
	dcd 0x21023008
	dcd 0xFCBEF7E2
	dcd 0x6B01480C
	dcd 0x4281481E
	dcd 0x1C20D103
	dcd 0xF0002100
	dcd 0x4808FAB5
	dcd 0x201D6B01
	dcd 0x42810100
	dcd 0xF7EFD101
	dcd 0x4804FB77
	dcd 0x48176B01
	dcd 0x46C0E02E
	dcd 0x020D08E0
	dcd 0x0210BB94
	dcd 0x020EECCC
	dcd 0x0000010E
	dcd 0x000004D4
	dcd 0x0000010F
	dcd 0x00000111
	dcd 0x00000112
	dcd 0x00000113
	dcd 0x00000115
	dcd 0x00000116
	dcd 0x00000117
	dcd 0x00000119
	dcd 0x0000011A
	dcd 0x000001D2
	dcd 0x000001D3
	dcd 0x020C7B1C
	dcd data_ov003_0216639c
	dcd 0x000001E3
	dcd 0x000003FF
	dcd 0x00000414
	dcd 0x000001DD
	dcd 0x000001CB
	dcd 0xD1064281
	dcd 0x28016860
	dcd 0x1C20D103
	dcd 0xF0002100
	dcd 0x48C8FA71
	dcd 0x48C86B01
	dcd 0xD1044281
	dcd 0x30081C20
	dcd 0xF7E42101
	dcd 0x48C3F887
	dcd 0x48C46B01
	dcd 0xD1044281
	dcd 0x30081C20
	dcd 0xF7E32101
	dcd 0x48BEFEC5
	dcd 0x48C06B01
	dcd 0xD1314281
	dcd 0x2000A90D
	dcd 0x60486008
	dcd 0x60C86088
	dcd 0xF7DF48BC
	dcd 0x48BBFADF
	dcd 0xFDEAF7DF
	dcd 0x28049005
	dcd 0x2004DD01
	dcd 0x98059005
	dcd 0x28002700
	dcd 0x1C30DD14
	dcd 0x304C9001
	dcd 0x98059001
	dcd 0xDD0D2800
	dcd 0x48B1AD0D
	dcd 0xF7DF1C39
	dcd 0x9901F947
	dcd 0x42888809
	dcd 0xC501D000
	dcd 0x1C7F9805
	dcd 0xDBF24287
	dcd 0x90009810
	dcd 0x990D48A9
	dcd 0x9B0F9A0E
	dcd 0xF8EAF7DF
	dcd 0x6B0148A2
	dcd 0x0080206F
	dcd 0xD10B4281
	dcd 0x18303878
	dcd 0xF7E12101
	dcd 0x499DFEB1
	dcd 0x1C3061C8
	dcd 0x21013008
	dcd 0xFA4AF7E3
	dcd 0x216E4899
	dcd 0x00896B00
	dcd 0xD1054288
	dcd 0x38301C08
	dcd 0x22011820
	dcd 0xFE36F7EE
	dcd 0x6B014893
	dcd 0x42814897
	dcd 0xA909D135
	dcd 0x60082000
	dcd 0x60886048
	dcd 0x489260C8
	dcd 0xFA8AF7DF
	dcd 0xF7DF4890
	dcd 0x9004FD95
	dcd 0xDD012804
	dcd 0x90042004
	dcd 0x25009804
	dcd 0xDD162800
	dcd 0x488AAF09
	dcd 0xF7DF1C29
	dcd 0x2800F929
	dcd 0x4887D10B
	dcd 0xF7DF1C29
	dcd 0x304CF8F9
	dcd 0x1C308801
	dcd 0x8800304C
	dcd 0xD0004281
	dcd 0x9804C702
	dcd 0x42851C6D
	dcd 0x980BDBE9
	dcd 0x90001C31
	dcd 0x8809314C
	dcd 0x9A09487C
	dcd 0xF7DF9B0A
	dcd 0x4876F891
	dcd 0x20726B01
	dcd 0x42810080
	dcd 0x3840D105
	dcd 0x21091820
	dcd 0xF7EE2201
	dcd 0x4870FFE9
	dcd 0x48756B01
	dcd 0xD1034281
	dcd 0x21001C30
	dcd 0xF9B8F000
	dcd 0x6B01486B
	dcd 0x42814871
	dcd 0x1C30D103
	dcd 0xF0002100
	dcd 0x4867F9AF
	dcd 0x486E6B01
	dcd 0xD10E4281
	dcd 0x21D4486D
	dcd 0xF7EB1830
	dcd 0x1C30F993
	dcd 0x21013008
	dcd 0xFD36F7E3
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x485DFF9D
	dcd 0x48666B01
	dcd 0xD10E4281
	dcd 0x21D54863
	dcd 0xF7EB1830
	dcd 0x1C30F97F
	dcd 0x21013008
	dcd 0xFD22F7E3
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x4853FF89
	dcd 0x20126B01
	dcd 0x42810100
	dcd 0x4859D10E
	dcd 0x183021D6
	dcd 0xF96AF7EB
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x1C30FD0D
	dcd 0x21013008
	dcd 0xFF74F7E3
	dcd 0x6B014848
	dcd 0x01002021
	dcd 0xD1034281
	dcd 0x21021C20
	dcd 0xF968F000
	dcd 0x6B024843
	dcd 0x4282484D
	dcd 0x2000D101
	dcd 0x494C9008
	dcd 0xD106428A
	dcd 0x388B1C08
	dcd 0x1E491830
	dcd 0xF7EE2201
	dcd 0x483BFD85
	dcd 0x48466B01
	dcd 0xD1054281
	dcd 0x1820388B
	dcd 0x22002111
	dcd 0xFF74F7EE
	dcd 0x6B014835
	dcd 0x00802085
	dcd 0xD12D4281
	dcd 0xF0F31C20
	dcd 0x1C05FF27
	dcd 0x1C30D028
	dcd 0xF7E43078
	dcd 0x280CF9A1
	dcd 0x1C30D006
	dcd 0x68023078
	dcd 0x68521C29
	dcd 0xE0044790
	dcd 0x1C294836
	dcd 0x68526802
	dcd 0x48354790
	dcd 0x58222100
	dcd 0x43C94834
	dcd 0x23006C45
	dcd 0x42828828
	dcd 0x1C19D101
	dcd 0x1C5BE003
	dcd 0x2BD23508
	dcd 0x2000DBF6
	dcd 0x428143C0
	dcd 0x482DD002
	dcd 0xFFBCF7F2
	dcd 0x6B01481B
	dcd 0x4281482B
	dcd 0x9A07D118
	dcd 0x30081C20
	dcd 0x42522102
	dcd 0xFB0CF7E2
	dcd 0x30081C20
	dcd 0xF7E32101
	dcd 0x1C20FD1B
	dcd 0x30089907
	dcd 0xFA1CF7E3
	dcd 0x30081C20
	dcd 0xF7E32100
	dcd 0x1C20FD11
	dcd 0xF8BCF7F7
	dcd 0x2186480C
	dcd 0x00896B00
	dcd 0xD1054288
	dcd 0x38901C08
	dcd 0x22011820
	dcd 0xFD1CF7EE
	dcd 0x49184806
	dcd 0x42886B00
	dcd 0x1C08D105
	dcd 0x18203891
	dcd 0xF7EE2201
	dcd 0x4801FD11
	dcd 0xE0274913
	dcd 0x020EECCC
	dcd 0x000001D1
	dcd 0x000001A2
	dcd 0x000001AA
	dcd 0x020C7B1C
	dcd 0x000001C2
	dcd 0x000001C9
	dcd 0x000001CA
	dcd 0x0000011E
	dcd 0x00000424
	dcd 0x0000011F
	dcd 0x00000211
	dcd 0x00000213
	dcd 0x020C7B38
	dcd 0x000004D4
	dcd 0x020C79B8
	dcd 0x020EC664
	dcd 0x00000216
	dcd 0x00000219
	dcd 0x0000021A
	dcd 0x42886B00
	dcd 0x1C08D105
	dcd 0x18203892
	dcd 0xF7EE2201
	dcd 0x484FFCDD
	dcd 0x6B00494F
	dcd 0xD10C4288
	dcd 0x39FF484E
	dcd 0xF7EB1830
	dcd 0x1C30F893
	dcd 0x21013008
	dcd 0xFC36F7E3
	dcd 0xF0002001
	dcd 0x4846F8DF
	dcd 0x6B00218B
	dcd 0x42880089
	dcd 0x4845D10C
	dcd 0x183039FF
	dcd 0xF880F7EB
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x2001FC23
	dcd 0xF8CCF000
	dcd 0x493F483C
	dcd 0x42886B00
	dcd 0x483CD10C
	dcd 0x183039FF
	dcd 0xF86EF7EB
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x2001FC11
	dcd 0xF8BAF000
	dcd 0x49374833
	dcd 0x42886B00
	dcd 0x4833D10C
	dcd 0x183039FF
	dcd 0xF85CF7EB
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x2001FBFF
	dcd 0xF8A8F000
	dcd 0x492F482A
	dcd 0x42886B00
	dcd 0x482AD111
	dcd 0x183039FD
	dcd 0xF84AF7EB
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x2001FBED
	dcd 0xF896F000
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x481FFA21
	dcd 0x6B002123
	dcd 0x42880109
	dcd 0x481ED111
	dcd 0x183039FD
	dcd 0xF832F7EB
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x2001FBD5
	dcd 0xF87EF000
	dcd 0x30081C30
	dcd 0xF7E32101
	dcd 0x4813FA09
	dcd 0x6B004918
	dcd 0xD10C4288
	dcd 0x39FD4812
	dcd 0xF7EB1830
	dcd 0x1C30F81B
	dcd 0x21013008
	dcd 0xFBBEF7E3
	dcd 0xF0002001
	dcd 0x480AF867
	dcd 0x6B004910
	dcd 0xD10C4288
	dcd 0x39FD4809
	dcd 0xF7EB1830
	dcd 0x3608F809
	dcd 0x21011C30
	dcd 0xFBACF7E3
	dcd 0xF0002001
	dcd 0x9808F855
	dcd 0xBDF8B014
	dcd 0x020EECCC
	dcd 0x0000022B
	dcd 0x00000424
	dcd 0x0000022D
	dcd 0x0000022E
	dcd 0x0000022F
	dcd 0x00000231
	dcd 0x00000232
}

