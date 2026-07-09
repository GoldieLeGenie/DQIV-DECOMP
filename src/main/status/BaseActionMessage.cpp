#include "main/status/BaseActionMessage.hpp"
#include "main/status/ActionExec.hpp"

status::BaseActionMessageData status::messageData_;

THUMB void status::BaseActionMessage::initialize() {
    messageData_.actionParam_ = excelParam.actionParam_;
    messageData_.splitMsg_ = excelParam.splitMsg_;
}


THUMB void status::BaseActionMessage::setup(status::UseActionParam* useActionParam) {
    messageData_.useActionParam_ = useActionParam;
    this->actionIndex_ = useActionParam->actionIndex_;
}


THUMB void status::BaseActionMessage::setExecMessage(status::UseActionMessage* message) {
    message->execMessage_[0] = getExecMessage(0);
    message->execMessage_[1] = getExecMessage(1);
    message->execMessage_[2] = getExecMessage(2);
    message->execMessage_[3] = getExecMessage(3);
}

THUMB void status::BaseActionMessage::setExecMessageAdd(int actionIndex, status::UseActionMessage* message) {
    if (actionIndex == 0x229) {
        message->execMessage_[1] = 0xC3AC4;
    }
}



THUMB void status::BaseActionMessage::setResultMessage(status::CharacterStatus* target, status::UseActionMessage* message) {
    message->resultMessage_[0] = getResultMessage();
    if (target->characterType_ == MONSTER
        && func_02058114(&data_0210bb94, 0xD) != 0
        && target->haveStatusInfo_.isDeath() != 0
        && target->haveStatusInfo_.isEscapeFlag() == 0
        && target->haveStatusInfo_.isDisappearFlag() == 0) {
        int i = 0;
        if (func_ov003_0212e37c(&data_ov003_0216639c) > 0) {
            do {
                 if (func_ov003_0212e5c0(&data_ov003_0216639c, i) == target) {
                    func_ov003_0212eab0(&data_ov003_0216639c, i);
                }
                i++;
            } while (i < func_ov003_0212e37c(&data_ov003_0216639c));
        }
    }
    if (this->instantDeath_ != 0) {
        int deathMes = 0;
        if (target->haveStatusInfo_.isDeath() != 0) {
            if (target->characterType_ == 0) {
                deathMes = 0xC3928;
            }
            if (target->characterType_ == 1) {
                deathMes = 0xC3924;
                if (target->isDeathDisable() != 0) {
                    deathMes = 0;
                }
            }
        }
        if (deathMes != 0) {
            message->resultMessage_[0] = deathMes;
        }
    }
}


THUMB void status::BaseActionMessage::setExecMessage(UseActionMessage *useActionMessage,int mes0,int mes1,int mes2,int mes3)
{
  if (mes0 != 0) {
    useActionMessage->execMessage_[0] = mes0;
  }
  if (mes1 != 0) {
    useActionMessage->execMessage_[1] = mes1;
  }
  if (mes2 != 0) {
    useActionMessage->execMessage_[2] = mes2;
  }
  if (mes3 != 0) {
    useActionMessage->execMessage_[3] = mes3;
  }
  return;
}





THUMB void status::BaseActionMessage::setResultMessage(status::UseActionMessage* message, int result0, int result1) {
    message->resultMessage_[0] = result0;
    message->resultMessage_[1] = result1;
}

THUMB void status::BaseActionMessage::setAddMessage(status::UseActionMessage* message, int msg0, int msg1) {
    message->addMessage_[0] = msg0;
    if (msg1 != 0) {
        message->addMessage_[1] = msg1;
    }
}

THUMB void status::BaseActionMessage::setMessageNotEnoughMp(status::UseActionMessage* message) {
    message->execMessage_[0] = getExecMessage(0);
    message->execMessage_[1] = getExecMessage(1);
    message->execMessage_[2] = getExecMessage(2);
    message->execMessage_[3] = getExecMessage(3);
    message->resultMessage_[0] = 0xC3C72;
    message->resultMessage_[1] = 0;
}

THUMB int status::BaseActionMessage::getExecMessage(int index) {
    if (index == 0) {
        return messageData_.actionParam_[this->actionIndex_].actionMes;
    }
    else if (index == 1) {
        return 0;
    }
    else if (index == 2) {
        return 0;
    }
    else if (index == 2) {
        return 0;
    }
    return 0;
}


THUMB int status::BaseActionMessage::getResultMessage() {
    if (messageData_.useActionParam_->result_) {
        return getResultSuccessMessage();
    }
    return getResultFailedMessage();
}

THUMB int status::BaseActionMessage::getResultSuccessMessage() {
    int message = 0;
    status::CharacterStatus* target = messageData_.useActionParam_->targetCharacterStatus_[messageData_.useActionParam_->currentTargetIndex_];
    if (target != 0) {
        if (target->characterType_ == PLAYER) {
            message = messageData_.actionParam_[this->actionIndex_].playerSuccessMes;
        } else {
            message = messageData_.actionParam_[this->actionIndex_].monsterSuccessMes;
        }
    }
    return message;
}

THUMB int status::BaseActionMessage::getResultFailedMessage() {
    status::CharacterStatus* target = messageData_.useActionParam_->targetCharacterStatus_[0];
    if (target != 0) {
        if (target->characterType_ == PLAYER) {
            return messageData_.actionParam_[this->actionIndex_].playerFailedMes;
        }
        return messageData_.actionParam_[this->actionIndex_].monsterFailedMes;
    }
    return messageData_.actionParam_[this->actionIndex_].playerFailedMes;
}

 
THUMB int status::BaseActionMessage::setSplitMessage(status::CharacterStatus* actor, status::CharacterStatus* target, status::UseActionMessage* message, int actionIndex) {
    int execMes = message->execMessage_[0];
    this->actionIndex_ = actionIndex;
    if (execMes == 0xAAE6B) {
        message->execMessage_[0] = 0xC3A5F;
        return 1;
    }
    this->splitFlag_ = 0;
    message->execMessage_[0] = setSplitMessage(actor, target, message->execMessage_[0]);
    message->execMessage_[1] = setSplitMessage(actor, target, message->execMessage_[1]);
    message->resultMessage_[0] = setSplitMessage(actor, target, message->resultMessage_[0]);
    return this->splitFlag_;
}

THUMB int status::BaseActionMessage::setSplitMessage(status::CharacterStatus* actor, status::CharacterStatus* target, int message) {
    int index = -1;
    if (message == 0) {
        return 0;
    }
    if (message == 0xAAE6B) {
        return 0xC3A5F;
    }
    if (message > 0xC3500) {
        return message;
    }
    unsigned int i = 0;
    if (i < splitMsgInfo_.count_) {
        param::SplitMsg* p = messageData_.splitMsg_;
        do {
            if (message == (int)p->branch) {
                index = i;
                break;
            }
            i++;
            p++;
        } while (i < splitMsgInfo_.count_);
    }
    if (index == -1) {
        return message;
    }
    int result = func_0202d51c(this, target, index);
    if (result == 0) result = func_0202d570(this, target, index);
    if (result == 0) result = func_0202d5c4(this, target, index);
    if (result == 0) result = func_0202d604(this, target, index);
    if (result == 0) result = func_0202d644(this, target, index);
    if (result == 0) result = func_0202d684(this, target, index);
    if (result == 0) result = func_0202d6d4(this, target, index);
    if (result == 0) result = func_0202d720(this, target, index);
    if (result == 0) result = func_0202d754(this, target, index);
    if (result == 0) result = func_0202d788(this, target, index);
    if (result == 0) result = func_0202d7c0(this, target, index);
    if (result == 0) result = func_0202d7f8(this, target, index);
    if (result == 0) result = func_0202d840(this, target, index);
    if (result == 0) result = func_0202d87c(this, target, index);
    if (result == 0) result = func_0202d8b8(this, actor, index);
    if (result == 0) result = func_0202d8fc(this, actor, index);
    if (result == 0) result = func_0202d940(this, actor, index);
    if (result == 0) result = func_0202d970(this, actor, index);
    if (result == 0) result = func_0202da50(this, index);
    if (result == 0) result = func_0202dadc(this, index);
    if (result == 0) result = func_0202d9a0(this, actor, index);
    if (result == 0) result = func_0202db20(this, index);
    if (result == 0) result = func_0202db8c(this, index);
    if (result == 0) result = func_0202dbf0(this, index);
    if (result == 0) result = func_0202dc54(this, index);
    if (result == 0) result = func_0202dcb8(this, index);
    if (result == 0) result = func_0202dd1c(this, index);
    if (result == 0) result = func_0202dd80(this, index);
    if (result == 0) result = func_0202dde4(this, index);
    if (result == 0) result = func_0202de48(this, index);
    if (result == 0) result = func_0202deac(this, index);
    if (result == 0) result = func_0202e078(this, index);
    if (result == 0) result = func_0202df18(this, index);
    if (result == 0) result = func_0202df70(this, index);
    if (result == 0) result = func_0202dfc8(this, index);
    if (result == 0) result = func_0202e020(this, index);
    return result;
}