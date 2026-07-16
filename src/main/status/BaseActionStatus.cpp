#include "main/status/BaseActionStatus.hpp"
#include "main/status/MonsterStatus.hpp"
#include "main/status/UseAction.hpp"
#include "main/status/ActionExec.hpp"
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

extern "C" void* func_0205b2f0();

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
                int count = status::g_Party.getCount();
                for (int i = 0; i < count; i++) {
                    if ((status::CharacterStatus*)status::g_Party.getPlayerStatus(i) == target) {
                        void* mgr = func_0205b2f0();
                        short flags = *(short*)((char*)mgr + 0x66B8);
                        int bit = 1 << status::g_Party.getPlayerIndex(i);
                        if (flags & bit) {
                            flags ^= bit;
                            *(short*)((char*)mgr + 0x66B8) = flags;
                        }
                    }
                }
            }
            return result;
        }
    }

    if (target->haveStatusInfo_.isDeath() != 0) {
        target->haveStatusInfo_.addHpInBattle(status::HaveStatusInfo::ResultAction, 2);
        target->haveStatusInfo_.setUseActionEffectValue(0x3FF);
        target->haveStatusInfo_.statusChange_.clear();
        target->haveStatusInfo_.setStatusChangeRelease(true);
        target->haveStatusInfo_.setZaorikuRebirth(true);
        target->setRebirthAnimation();
        result = 1;

        if (func_02058114(&data_0210bb94, 0xD) != 0 && target->characterType_ == PLAYER) {
            int count = status::g_Party.getCount();
            for (int i = 0; i < count; i++) {
                if ((status::CharacterStatus*)status::g_Party.getPlayerStatus(i) == target) {
                    void* mgr = func_0205b2f0();
                    short flags = *(short*)((char*)mgr + 0x66B8);
                    int bit = 1 << status::g_Party.getPlayerIndex(i);
                    if (flags & bit) {
                        flags ^= bit;
                        *(short*)((char*)mgr + 0x66B8) = flags;
                    }
                }
            }
        }
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

