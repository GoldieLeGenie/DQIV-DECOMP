#include "main/global/Global.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/Status.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/OptionStatus.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/cmn/PlayerManager.hpp"

Global g_Global; //data_020c768c

THUMB Global::Global()
{
    dss::DssUtils::strcpy_s(nextMapName_, 32, mlb1a);
    dss::DssUtils::strcpy_s(battleMapName, 32, data_020bc268);
    fightingarenaFlag_ = 0;
    partChangeFlag_ = 0;
}

THUMB Global::~Global(){

}

THUMB void Global::initialize()
{
    status::excelParam.setup();
    func_0200a6c8();
    func_0200a734();
    status::Status::initialize();
    status::Status::initialize_character();
    cmn::PlayerManager::initLock();
    g_Stage.playerFlagClear();
    g_Option.initialize();
}


THUMB void Global::startGame()
{
    func_0200bdb8(data_020c7658, 3);
    func_02058294(data_0210bc18, data_020c7658);
    func_0200bcc4(this, 30);
}

THUMB void Global::startFirstTown()
{
    setMapName(mlb1a);
    func_0200bdb8(data_020c7658, 12);
    func_02058294(data_0210bc18, data_020c7658);
    func_0200bcc4(this, 30);
}

THUMB void Global::startDebugTown()
{
    setMapName(za1f1);
    func_0200bdb8(data_020c7658, 12);
    func_02058294(data_0210bc18, data_020c7658);
    func_0200bcc4(this, 30);
}

THUMB void Global::startTown(char* name)
{
    setMapName(name);
    func_0200bdb8(data_020c7658, 12);
    func_02058294(data_0210bc18, data_020c7658);
    func_0200bcc4(this, 30);
    partChangeFlag_ = 1;
}


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

THUMB void Global::setMapName(const char *name) {
    char temp[32];
    dss::DssUtils::strcpy_s(temp, 0x20, (char*)name);
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