#include "main/status/BaseActionStatus.hpp"
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
            target->printAction();
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
