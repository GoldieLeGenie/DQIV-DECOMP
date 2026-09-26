#include "main/global/Global.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/Status.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/OptionStatus.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/status/HaveStatus.hpp"
#include "main/cmn/NonBattleActionManager.hpp"
#include "main/sound/SoundManager.hpp"
#include "main/cmn/ExtraMapLink.hpp"
#include "main/status/GameFlag.hpp"
#include "main/status/BattleHistory.hpp"
#include "main/status/BattleResult.hpp"

extern char data_0210bb94[];
extern "C" int func_0205810c(void* global);
extern "C" int func_02058104(void* global);
extern "C" void func_020580fc(void* global, int part);

Global g_Global; //data_020c768c
GlobalChangePart g_GlobalChangePart;
GlobalFade g_GlobalFade;
GlobalWaitPart g_GlobalWaitPart;
char s_mapCasino[] = "casino\0";
char s_mapBtlda1[] = "btlda1\0";
char s_mapBook[] = "book\0\0\0";
char s_mapField[] = "field\0\0";
char s_mapSurechigai[] = "surechigai\0";

THUMB Global::Global()
{
    dss::DssUtils::strcpy_s(nextMapName_, 32, mlb1a);
    dss::DssUtils::strcpy_s(battleMapName, 32, s_mapBtlda1);
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
    g_GlobalChangePart.setNextPart(3);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    fadeOutBlack(30);
}

THUMB void Global::startFirstTown()
{
    setMapName(mlb1a);
    g_GlobalChangePart.setNextPart(12);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    fadeOutBlack(30);
}

THUMB void Global::startDebugTown()
{
    setMapName(za1f1);
    g_GlobalChangePart.setNextPart(12);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    fadeOutBlack(30);
}

THUMB void Global::startTown(char* name)
{
    setMapName(name);
    g_GlobalChangePart.setNextPart(12);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    fadeOutBlack(30);
    partChangeFlag_ = 1;
}


THUMB void Global::startCasino() {
    setMapName(s_mapCasino);
    g_GlobalChangePart.setNextPart(0xF);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    fadeOutBlack(0x1E);
}


THUMB void Global::startBook()
{
    setMapName(s_mapBook);
    g_GlobalChangePart.setNextPart(0x10);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    fadeOutBlack(0x1E);
}


THUMB void Global::startSurechigai()
{
    setMapName(s_mapSurechigai);
    g_GlobalChangePart.setNextPart(0x13);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    fadeOutBlack(0x1E);
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


THUMB void Global::startField()
{
    setMapName(s_mapField);
    g_GlobalChangePart.setNextPart(0xE);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    fadeOutBlack(0x1E);
    partChangeFlag_ = 1;
}

THUMB void Global::startBattle()
{
    if (func_0200a6c8()->battleMode_ == encount::Encount::Normal) {
        SoundManager::battlePlay();
    } else {
        SoundManager::crusingPlay();
    }
    cmn::NonBattleActionManager::getSingleton()->setAction(cmn::ACTION_BATTLE);
    setRanarutaFlag(true);
}

THUMB void Global::acceptBattle()
{
    cmn::PlayerManager::setLock(1);
    currentGamePart_ = func_0205810c(data_0210bb94);
    g_GlobalChangePart.setNextPart(0xD);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    partChangeFlag_ = 1;
    fadeOutBlack(0xF);
}

THUMB void Global::directStartBattle()
{
    cmn::PlayerManager::setLock(1);
    if (func_0200a6c8()->battleMode_ == encount::Encount::Normal) {
        SoundManager::battlePlay();
    } else {
        SoundManager::crusingPlay();
    }
    currentGamePart_ = func_0205810c(data_0210bb94);
    g_GlobalChangePart.setNextPart(0xD);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    partChangeFlag_ = 1;
    fadeOutBlack(0xF);
}

THUMB void Global::endBattle(bool wipeout)
{
    cmn::PlayerManager::setLock(0);
    if (fightingarenaFlag_ != 0) {
        g_GlobalFlag.clear();
        fightingarenaFlag_ = 0;
        ((cmn::ExtraMapLink*)&data_020ed28c)->setExtraLinkTown(fightingarenaMapName_, fightingarenaPosition_, 0);
    } else if (!wipeout) {
        g_GlobalChangePart.setNextPart(currentGamePart_);
        func_02058294(data_0210bc18, &g_GlobalChangePart);
    } else {
        g_GlobalFlag.clear();
        g_LocalFlag.clear();
        g_Stage.restartChurch();
        status::g_BattleHistory.historyType_ = status::BattleHistory::RightNow;
        status::g_BattleHistory.regenesisChapterWipeoutCount();
        status::g_BattleResult.playerDemolition_ = 0;
        status::g_BattleResult.playerDemolitionMessage_ = 0;
        g_Stage.playerClearFlag();
        unsigned int gold = status::g_Party.gold_;
        if (!status::g_Party.isHaveItem(0x89)) {
            gold = (gold + 1) / 2;
        }
        status::g_Party.setGold(gold);
        status::g_Party.battleExp_ = 0;
        status::g_Party.battleGold_ = 0;
        status::g_Party.battleMonsterCount_ = 0;
        status::g_Party.recoveryDemolition();
    }
    SoundManager::battleStop();
    fadeOutBlack(0x1E);
}

THUMB void Global::setFightingArenaMapName(const char* name, dss::Fx32Vector3& pos)
{
    dss::DssUtils::strcpy_s(fightingarenaMapName_, 32, (char*)name);
    fightingarenaPosition_ = pos;
    fightingarenaFlag_ = 1;
}

THUMB void Global::startTitle()
{
    status::g_Story.setChapter(0);
    setMapName(s_mapEv01);
    g_GlobalChangePart.setNextPart(0xC);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    fadeOutBlack(0x1E);
    func_020559ec(0xA);
    partChangeFlag_ = 1;
}

THUMB void Global::startLogo()
{
    g_GlobalChangePart.setNextPart(0);
    func_02058294(data_0210bc18, &g_GlobalChangePart);
    fadeOutBlack(0x1E);
}

THUMB bool Global::isNextPart(int part)
{
    if (part == func_02058104(data_0210bb94)) {
        return true;
    }
    return false;
}

THUMB void Global::fadeOutBlack(int frames)
{
    if (g_GlobalFade.isFadeOutBlack() == 0 && g_GlobalFade.isFadeOutWhite() == 0) {
        if (g_GlobalFade.isFadeInBlack() != 0) {
            func_020582b8(data_0210bc18, &g_GlobalFade);
        }
        g_GlobalFade.fadeOutBlack(frames);
        func_02058294(data_0210bc18, &g_GlobalFade);
    }
}

THUMB void Global::fadeOutWhite(int frames)
{
    if (g_GlobalFade.isFadeOutWhite() == 0) {
        g_GlobalFade.fadeOutWhite(frames);
        func_02058294(data_0210bc18, &g_GlobalFade);
    }
}

THUMB void Global::fadeInBlack(int frames)
{
    g_GlobalFade.fadeInBlack(frames);
    func_02058294(data_0210bc18, &g_GlobalFade);
}

THUMB void Global::fadeInWhite(int frames)
{
    g_GlobalFade.fadeInWhite(frames);
    func_02058294(data_0210bc18, &g_GlobalFade);
}

THUMB void Global::fadeIn(int frames)
{
    g_GlobalFade.fadeIn(frames);
    func_02058294(data_0210bc18, &g_GlobalFade);
}

THUMB void GlobalChangePart::update()
{
    if (g_GlobalFade.isFadeEnd()) {
        func_020580fc(data_0210bb94, nextPart_);
        nextPart_ = 0x1A;
    }
}

THUMB bool GlobalChangePart::isEnd()
{
    if (nextPart_ == 0x1A) {
        return true;
    }
    return false;
}

THUMB void GlobalChangePart::setNextPart(int part)
{
    nextPart_ = part;
}

THUMB GlobalFade::GlobalFade()
{
    state_ = FADE_NONE;
    brightness_ = 0;
    count_ = 0;
    frames_ = 0;
}

THUMB void GlobalFade::update()
{
}

THUMB void GlobalFade::draw()
{
    count_++;
    count_ = func_02008ea0(count_, 0, frames_);
    brightness_ = (count_ << 4) / frames_;
    switch (state_) {
        case FADE_NONE:
            break;
        case FADE_OUT_BLACK:
            brightness_ = -brightness_;
            brightness_ = func_02008ea0(brightness_, -16, 0);
            break;
        case FADE_IN_BLACK:
            brightness_ -= 16;
            brightness_ = func_02008ea0(brightness_, -16, 0);
            break;
        case FADE_OUT_WHITE:
            break;
        case FADE_IN_WHITE:
            brightness_ = 16 - brightness_;
            break;
    }
    func_0207ed24(brightness_);
    func_0207ed3c(brightness_);
}

THUMB bool GlobalFade::isEnd()
{
    if (isFadeEnd()) {
        return true;
    }
    return false;
}

THUMB void GlobalFade::fadeOutBlack(int frames)
{
    state_ = FADE_OUT_BLACK;
    count_ = 0;
    frames_ = frames;
    count_ = (-brightness_ * frames) / 16;
    count_ = func_02008ea0(count_, 0, frames_);
}

THUMB void GlobalFade::fadeOutWhite(int frames)
{
    state_ = FADE_OUT_WHITE;
    count_ = 0;
    frames_ = frames;
}

THUMB void GlobalFade::fadeInBlack(int frames)
{
    if (state_ == FADE_OUT_BLACK) {
        state_ = FADE_IN_BLACK;
    } else if (state_ == FADE_OUT_WHITE) {
        state_ = FADE_IN_WHITE;
    } else {
        state_ = FADE_IN_BLACK;
    }
    count_ = 0;
    frames_ = frames;
}

THUMB void GlobalFade::fadeInWhite(int frames)
{
    state_ = (state_ == FADE_OUT_BLACK) ? FADE_IN_BLACK : FADE_IN_WHITE;
    count_ = 0;
    frames_ = frames;
}

THUMB void GlobalFade::fadeIn(int frames)
{
    switch (state_) {
        case FADE_OUT_BLACK:
            state_ = FADE_IN_BLACK;
            break;
        case FADE_OUT_WHITE:
            state_ = FADE_IN_WHITE;
            break;
        default:
            state_ = FADE_IN_BLACK;
            break;
    }
    count_ = 0;
    frames_ = frames;
}

THUMB int GlobalFade::isFadeEnd()
{
    return count_ == frames_;
}

THUMB int GlobalFade::isFadeOutBlack()
{
    if (state_ == FADE_OUT_BLACK && brightness_ < 0) {
        return 1;
    }
    return 0;
}

THUMB int GlobalFade::isFadeInBlack()
{
    if (state_ == FADE_IN_BLACK && brightness_ < 0) {
        return 1;
    }
    return 0;
}

THUMB int GlobalFade::isFadeOutWhite()
{
    if (state_ == FADE_OUT_WHITE && brightness_ > 0) {
        return 1;
    }
    return 0;
}

THUMB void GlobalWaitPart::update()
{
}

THUMB void GlobalWaitPart::draw()
{
    count_++;
    count_ = func_02008ea0(count_, 0, frames_);
}

THUMB bool GlobalWaitPart::isEnd()
{
    if (isRunning() == 0) {
        return true;
    }
    return false;
}

THUMB int GlobalWaitPart::isRunning()
{
    if (count_ == frames_) {
        func_0208214c(data_0211c4f0, 8, 8);
        return 0;
    }
    return 1;
}

THUMB void GlobalGamePart::draw()
{
}
