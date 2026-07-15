#include "main/global/Global.hpp"

Global g_Global; //data_020c768c

THUMB void Global::startCasino() {
    setMapName(data_020bc270);
    func_0200bdb8(data_020c7658, 0xF);
    func_02058294(data_0210bc18, data_020c7658);
    func_0200bcc4(this, 0x1E);
}


THUMB void Global::startBook()
{
    setMapName(data_020bc258);
    func_0200bdb8(data_020c7658, 0x10);
    func_02058294(data_0210bc18, data_020c7658);
    func_0200bcc4(this, 0x1E);
}


THUMB void Global::startSurechigai()
{
    setMapName(data_020bc278);
    func_0200bdb8(data_020c7658, 0x13);
    func_02058294(data_0210bc18, data_020c7658);
    func_0200bcc4(this, 0x1E);
}



THUMB void Global::setMinigame(int type) {
    this->minigameType_ = type;
}

THUMB int Global::getMinigame() {
    return this->minigameType_;
}

THUMB void Global::setGameStatus(int minigameStatus) {
    this->minigameStatus_ = minigameStatus;
}

THUMB int Global::getGameStatus() {
    return this->minigameStatus_;
}

THUMB void Global::setRanarutaFlag(bool flag) {
    this->ranarutaFlag_ = flag;
}

THUMB int Global::getRanarutaFlag() {
    return this->ranarutaFlag_;
}

THUMB char* Global::getMapName() {
    return this->nextMapName_;
}

THUMB char* Global::getPrevMapName() {
    return this->prevMapName_;
}

THUMB void Global::setMapName(char *name) {
    char temp[32];
    dss::DssUtils::strcpy_s(temp, 0x20, name);
    dss::DssUtils::strcpy_s(this->prevMapName_, 0x20, this->nextMapName_);
    dss::DssUtils::strcpy_s(this->nextMapName_, 0x20, temp);
}

THUMB bool Global::isAreaChange() {
    if (this->prevMapName_[0] == this->nextMapName_[0] &&
        this->prevMapName_[1] == this->nextMapName_[1]) {
        return false;
    }
    return true;
}

THUMB int Global::getFieldType() {
    return this->fieldType_;
}