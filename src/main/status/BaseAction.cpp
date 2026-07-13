#include "main/status/BaseAction.hpp"
#include "main/status/BaseActionStatus.hpp"

// status::BaseActionData status::BaseActionData_; //data_020d07d0
int status::BaseAction::tsukonFlag_;
int status::BaseAction::tsukon2Flag_;
int status::BaseAction::kaishinFlag_;


#pragma profile on
THUMB void status::BaseAction::initialize()
{
    BaseActionData_.actionParam_ = excelParam.actionParam_;
}


THUMB void status::BaseAction::clear()
{
    BaseActionData_.doubleFlag_ = 0;
    BaseActionData_.splitFlag_ = 0;
    BaseActionData_.joukFlag_ = 0;
    BaseActionData_.timeReverseFlag_ = 0;
    BaseActionData_.allKaishinFlag_ = 0;
}




THUMB void status::BaseAction::exec(status::UseActionParam& useActionParam, int flag)
{
    int i;
    this->executeAction_ = 0;
    status::BaseActionData_.splitFlag_ = 0;
    status::BaseActionData_.joukFlag_ = 0;
    status::BaseActionData_.timeReverseFlag_ = 0;
    status::BaseActionData_.multiFlag_ = 0;
    this->rollingKick_ = 0;
    this->sleepTurn_ = 0;
    status::BaseActionData_.tsukonFlag_ = 0;
    status::BaseActionData_.tsukon2Flag_ = 0;
    status::BaseActionData_.flag_ = 0;
    status::BaseActionData_.workParam_ = 0;

    for (int i = 0; i < 4; i++) {
        data_020d0810[i] = 0;
    }
    BaseActionValue_.unk_00 = 0;

    this->actionIndex_ = useActionParam.actionIndex_;
    status::BaseActionData_.useActionParam_ = &useActionParam;
    message_.setup(&useActionParam);

    status::CharacterStatus* actor = useActionParam.actorCharacterStatus_;
    if (actor) {
        actor->haveStatusInfo_.clearHpInBattle();
        actor->haveStatusInfo_.clearMpInBattle();
        actor->haveStatusInfo_.clearStatusChangeInBattle();
    }

    int clearCount = status::BaseActionData_.useActionParam_->targetCount_;
    for (int i = 0; i < clearCount; i++) {
        status::CharacterStatus* target = useActionParam.targetCharacterStatus_[i];
        if (target) {
            target->haveStatusInfo_.clearHpInBattle();
            target->haveStatusInfo_.clearMpInBattle();
            target->haveStatusInfo_.clearStatusChangeInBattle();
        }
    }

    if (status::BaseActionData_.useActionParam_->actorHaveItemSack_) {
        status::CharacterStatus* a = status::BaseActionData_.useActionParam_->actorCharacterStatus_;
        if (a) {
            a->haveStatusInfo_.clearHpInBattle();
            a->haveStatusInfo_.clearMpInBattle();
            a->haveStatusInfo_.clearStatusChangeInBattle();
        }
        int count = status::BaseActionData_.useActionParam_->targetCount_;
        for (i = 0; i < count; i++) {
            func_020170b0(this, 0, status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]);
            status::BaseActionData_.useActionParam_->result_ = resultFlag_;
            status::BaseActionData_.useActionParam_->targetResult_[i] = resultFlag_;
            message_.setExecMessage(&status::BaseActionData_.useActionParam_->message_[i]);
            message_.setResultMessage(status::BaseActionData_.useActionParam_->targetCharacterStatus_[i],
                                      &status::BaseActionData_.useActionParam_->message_[i]);
            message_.setSplitMessage(status::BaseActionData_.useActionParam_->actorCharacterStatus_,
                                     status::BaseActionData_.useActionParam_->targetCharacterStatus_[i],
                                     &status::BaseActionData_.useActionParam_->message_[0],
                                     actionIndex_);
        }
        func_02016768(this, 0);
        return;
    }

    int ok = 1;
    if (flag) {
        func_02017928(this);
    }
    if (!func_02017978(this, status::BaseActionData_.useActionParam_->actorCharacterStatus_)) {
        ok = 0;
    } else if (!func_020179d0(this)) {
        ok = 0;
    } else if (!func_02017a58(this)) {
        ok = 0;
    } else if (!func_02017b38(this)) {
        ok = 0;
    } else if (!func_02017c40(this)) {
        ok = 0;
    } else if (!func_02017e54(this)) {
        ok = 0;
    } else if (!func_02018118(this)) {
        ok = 0;
    } else if (!func_020181dc(this)) {
        ok = 0;
    } else if (!func_02018274(this)) {
        ok = 0;
    }

    if (!ok) {
        status::CharacterStatus* a = status::BaseActionData_.useActionParam_->actorCharacterStatus_;
        if (a) {
            a->haveBattleStatus_.setActionFailed(actionIndex_);
        }
        func_02019d64(this);
        return;
    }

    func_02017ea0(this);
    func_020162c0(this);

    int count = status::BaseActionData_.useActionParam_->targetCount_;
    status::CharacterStatus* a = status::BaseActionData_.useActionParam_->actorCharacterStatus_;

    if (count == 0) {
        if (a) {
            a->haveStatusInfo_.clearHpInBattle();
            a->haveStatusInfo_.clearMpInBattle();
            a->haveStatusInfo_.clearStatusChangeInBattle();
        }
        message_.setExecMessage(&status::BaseActionData_.useActionParam_->message_[0]);
        message_.setResultMessage(status::BaseActionData_.useActionParam_->actorCharacterStatus_,
                                  &status::BaseActionData_.useActionParam_->message_[0]);
        func_020170b0(this, status::BaseActionData_.useActionParam_->actorCharacterStatus_, 0);
        message_.setSplitMessage(status::BaseActionData_.useActionParam_->actorCharacterStatus_, 0,
                                 &status::BaseActionData_.useActionParam_->message_[0],
                                 actionIndex_);
    } else {
        unsigned short savedHp = 0;
        if ((unsigned int)(actionIndex_ - 513) <= 1) {
            savedHp = a->haveStatusInfo_.getHp();
            a->haveStatusInfo_.setHp(0);
        }
        if (a) {
            a->haveStatusInfo_.clearHpInBattle();
            a->haveStatusInfo_.clearMpInBattle();
            a->haveStatusInfo_.clearStatusChangeInBattle();
        }
        if ((unsigned int)(this->actionIndex_ - 513) <= 1) {
            a->haveStatusInfo_.setHp(savedHp);
        }

        for (int i = 0; i < count; i++) {
            status::BaseActionData_.useActionParam_->currentTargetIndex_ = i;
            message_.setExecMessage(&status::BaseActionData_.useActionParam_->message_[i]);
            message_.setExecMessageAdd(actionIndex_,
                                       &status::BaseActionData_.useActionParam_->message_[i]);
            mahokantaFlag_ = 0;

            if (!status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusMahosute)
             && !status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusAstoron)
             && func_02018cc0(this, status::BaseActionData_.useActionParam_->actorCharacterStatus_,
                              status::BaseActionData_.useActionParam_->targetCharacterStatus_[i])) {
                targetType_ = status::BaseActionData_.useActionParam_->actorCharacterStatus_->characterType_;
                {
                    status::UseActionParam* p = status::BaseActionData_.useActionParam_;
                    status::CharacterStatus* act = p->actorCharacterStatus_;
                    p->originalTargetCharacterStatus_[i] = p->targetCharacterStatus_[i];
                    p->targetCharacterStatus_[i] = act;
                }
                status::BaseActionData_.useActionParam_->actorCharacterStatus_->haveStatusInfo_.setMahokantaCounter(true);
            }

            if (func_020170b0(this, status::BaseActionData_.useActionParam_->actorCharacterStatus_,
                              status::BaseActionData_.useActionParam_->targetCharacterStatus_[i])) {
                status::BaseActionData_.useActionParam_->result_ = resultFlag_;
                status::BaseActionData_.useActionParam_->targetResult_[i] = resultFlag_;
                message_.setResultMessage(status::BaseActionData_.useActionParam_->targetCharacterStatus_[i],
                                          &status::BaseActionData_.useActionParam_->message_[i]);

                if (status::BaseActionData_.kaishinFlag_) {
                    status::BaseActionData_.kaishinFlag_ = 0;
                    status::BaseActionData_.useActionParam_->message_[i].spclMessage_[0] = 801052;
                    status::BaseActionData_.useActionParam_->actorCharacterStatus_->damageSound_ = status::CharacterStatus::KaishinSe;
                    if (!status::BaseActionData_.multiFlag_ || i != 1) {
                        status::BaseActionData_.useActionParam_->actorCharacterStatus_->haveStatusInfo_.setFirstKaishin(true);
                    }
                    if (status::BaseActionData_.multiFlag_ && i == 1) {
                        status::BaseActionData_.useActionParam_->actorCharacterStatus_->haveStatusInfo_.setSecondKaishin(true);
                    }
                }

                if ((unsigned int)(actionIndex_ - 231) <= 1) {
                    if (status::BaseActionData_.tsukonFlag_ || status::BaseActionData_.tsukon2Flag_) {
                        if (status::BaseActionData_.useActionParam_->actorCharacterStatus_->characterType_ == PLAYER) {
                            status::BaseActionData_.useActionParam_->message_[0].spclMessage_[0] = 801052;
                            status::BaseActionData_.useActionParam_->actorCharacterStatus_->damageSound_ = status::CharacterStatus::TsukonSe;
                        } else {
                            status::BaseActionData_.useActionParam_->message_[0].spclMessage_[1] = 801055;
                            status::BaseActionData_.useActionParam_->actorCharacterStatus_->damageSound_ = status::CharacterStatus::TsukonSe;
                        }
                    }
                }

                if (status::BaseActionData_.multiFlag_) {
                    status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]->setMultiDamageAnimation();
                    if (i == 0) {
                        status::CharacterStatus* t0 = status::BaseActionData_.useActionParam_->targetCharacterStatus_[i];
                        if (t0) {
                            int v = t0->haveStatusInfo_.effectValue_;
                            t0->haveStatusInfo_.setUseActionEffectValueMulti(0, v);
                            if (v) {
                                status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]->haveStatusInfo_.setMultiAttack(true);
                                if (status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]->haveStatusInfo_.isDeath()) {
                                    status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]->haveStatusInfo_.setMultiFirstDeath(true);
                                }
                                status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]->setMultiDamageAnimation1();
                            }
                        }
                    }
                    if (i == 1) {
                        status::CharacterStatus* t1 = status::BaseActionData_.useActionParam_->targetCharacterStatus_[i];
                        if (t1) {
                            int v = t1->haveStatusInfo_.effectValue_;
                            t1->haveStatusInfo_.setUseActionEffectValueMulti(1, v);
                            if (v) {
                                if (status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]->haveStatusInfo_.isDeath()) {
                                    status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]->setMultiDamageAnimation2nd();
                                }
                                status::BaseActionData_.useActionParam_->targetCharacterStatus_[i]->setMultiDamageAnimation2();
                            }
                        }
                    }
                }

                if (mahokantaFlag_) {
                    mahokantaFlag_ = 0;
                }
                if (actionIndex_ == 475) {
                    status::BaseActionData_.useActionParam_->message_[0].resultMessage_[0] = 700017;
                }
            }

            {
                status::UseActionParam* p = status::BaseActionData_.useActionParam_;
                message_.setSplitMessage(p->actorCharacterStatus_,
                                         p->targetCharacterStatus_[i],
                                         &p->message_[i],
                                         actionIndex_);
            }
            func_020164a8(this, i);

            if (i == 0
             && func_02019398(this, status::BaseActionData_.useActionParam_->actorCharacterStatus_)
             && status::BaseActionData_.useActionParam_->targetCharacterStatus_[0]->haveStatusInfo_.isDeath()) {
                status::BaseActionData_.useActionParam_->targetCharacterStatus_[1] = 0;
                status::BaseActionData_.useActionParam_->targetCount_ = 1;
                break;
            }
        }
    }

    func_02016768(this, 1);
}
#pragma profile off