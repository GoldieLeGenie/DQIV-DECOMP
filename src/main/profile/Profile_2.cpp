#include "main/profile/Profile.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/GameFlag.hpp"
#include "main/status/GameStatus.hpp"
#include "main/status/OptionStatus.hpp"
#include "main/status/BattleHistory.hpp"
#include "main/cmn/CommonCounterInfo.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/cmn/PartyTalk.hpp"
#include "main/encount/Encount.hpp"


// status::HaveItemSack g_NeneItemSack;
char s_field[8] = "field"; // data_020c1398


THUMB int profile::Profile::collectDATA(int bookNo, int saveType)
{
    presetMember();
    func_020882d4(&this->profiledata_, 0xFF, 0x3300);
    func_020882d4(this->profiledummy_, 0xFF, 0x900);
    this->pSYSTEM->MAGIC = 0x65747261;      // 'arte'
    this->pSYSTEM->VER = 0x0BF7FF5C;
    this->pSYSTEM->CHECKSUM = 0;
    if (bookNo != 3) {
        g_Stage.profileBank_ = bookNo;
        this->pSYSTEM->BOOKNO = bookNo;
    } else {
        this->pSYSTEM->BOOKNO = g_Stage.profileBank_;
    }
    this->pSYSTEM->SAVETYPE = saveType;
    collectDATA_PARTY();
    collectDATA_CHAPTER();
    collectDATA_PLAYER();
    collectDATA_MONSTER();
    collectDATA_ENVOY();
    func_02030eb0(this);
    return 1;
}

THUMB void profile::Profile::collectDATA_PARTY()
{
    func_020882d4(this->pPARTY->RESTART, 0, 0x10);
    func_020882d4(this->pPARTY->CHURCH, 0, 0x10);

    char* church = ::g_Stage.getChurchMapName();
    char* map = g_Global.getMapName();
    int fieldType = 0;
    if (church == 0) {
        church = map;
    }
    if (*church == 0) {
        church = map;
    }
    if (this->pSYSTEM->SAVETYPE == profile::SAVETYPE_CHURCH) {
        map = church;
    }
    if (func_02003528(map, s_field) == 0) {
        fieldType = g_Global.getFieldType();
    }
    dss::DssUtils::strcpy_s((char*)this->pPARTY->CHURCH, 0x10, church);
    dss::DssUtils::strcpy_s((char*)this->pPARTY->RESTART, 0x10, map);
    this->pPARTY->FIELDTYPE = fieldType;

    dss::Fx32Vector3 pos;
    short dir;
    g_cmnPartyInfo.getPartyInfo(&pos, &dir);
    this->pPARTY->PARTY_X = pos.vx.value;
    this->pPARTY->PARTY_Y = pos.vy.value;
    this->pPARTY->PARTY_Z = pos.vz.value;
    this->pPARTY->PARTY_D = dir;

    dss::Fx32Vector3 ship(::g_Stage.shipPosition_.vx, ::g_Stage.shipPosition_.vy, ::g_Stage.shipPosition_.vz);
    this->pPARTY->SHIP_X = ship.vx.value;
    this->pPARTY->SHIP_Y = ship.vy.value;
    this->pPARTY->SHIP_Z = ship.vz.value;

    dss::Fx32Vector3 balloon(::g_Stage.balloonPosition_.vx, ::g_Stage.balloonPosition_.vy, ::g_Stage.balloonPosition_.vz);
    this->pPARTY->BALLOON_X = balloon.vx.value;
    this->pPARTY->BALLOON_Y = balloon.vy.value;
    this->pPARTY->BALLOON_Z = balloon.vz.value;

    dss::Fx32Vector3 ikada = g_cmnPartyInfo.getIkadaPos();
    this->pPARTY->RAFT_X = ikada.vx.value;
    this->pPARTY->RAFT_Y = ikada.vy.value;
    this->pPARTY->RAFT_Z = ikada.vz.value;

    dss::Fx32Vector3 overview(::g_Stage.overviewTempPosition_.vx, ::g_Stage.overviewTempPosition_.vy, ::g_Stage.overviewTempPosition_.vz);
    this->pPARTY->OVERVIEW_X = overview.vx.value;
    this->pPARTY->OVERVIEW_Y = overview.vy.value;
    this->pPARTY->OVERVIEW_Z = overview.vz.value;

    this->pPARTY->RIDEON = g_cmnPartyInfo.rideOnType_;
    this->pPARTY->BALLOON_FIELD = ::g_Stage.balloonFieldType_;
    
    dss::DssUtils::strcpy_s((char*)this->pPARTY->RANALUTA_MAP, 0xA, ::g_Stage.lastRanaStageName_);
    this->pPARTY->RANALUTA_SURFACE = ::g_Stage.lastFldSurface_;
    this->pPARTY->CHAPTER = status::g_Story.chapter_;

    collectGameFlag(this->pPARTY->GLOBALFLAG, &g_GlobalFlag);
    collectGameFlag(this->pPARTY->AREAFLAG, &g_AreaFlag);
    collectGameFlag(this->pPARTY->LOCALFLAG, &g_LocalFlag);
    for (int i = 0; i < 0x40; i++) {
        this->pPARTY->LOCALFLAG[i] = 0;
    }

    ::g_Stage.collectMapFlag((profile::SAVETYPE)this->pSYSTEM->SAVETYPE, this->pPARTY);
    status::g_Party.setSaveData(this->pPARTY);
    this->pPARTY->WORLDTIME = ::g_Stage.getWorldTime();
    this->pPARTY->TIMEZONE = ::g_Stage.getTimeZone();
    this->pPARTY->TIMESTOP = ::g_Stage.timestop_;
    this->pPARTY->SEX = status::g_Story.sex_;

    func_020882d4(this->pPARTY->NAME, 0, 0x20);
    dss::DssUtils::strcpy_s((char*)this->pPARTY->NAME, 0x20, status::g_Story.heroName);

    for (int i = 0; i < 0x10; i++) {
        this->pPARTY->DAY_COUNTER[i] = cmn::g_CommonCounterInfo.dayCounter_[i];
    }
    for (int i = 0; i < 4; i++) {
        this->pPARTY->FREE_COUNTER[i] = cmn::g_CommonCounterInfo.freeCounter_[i];
    }
    this->pPARTY->BONMOL[0] = status::g_Story.getEndorEventItemCount(status::StoryStatus::EVENT_HAGANENOTURUGI);
    this->pPARTY->BONMOL[1] = status::g_Story.getEndorEventItemCount(status::StoryStatus::EVENT_TETUNOYOROI);
    this->pPARTY->PLAYTIME = status::g_Game.getPlayTime();
    this->pPARTY->LANGUAGE = status::g_Game.language;
    this->pPARTY->BGM_VOLUME = ::g_Option.getBgmVolume();
    this->pPARTY->SE_VOLUME = ::g_Option.getSeVolume();
    this->pPARTY->BATTLE_SPEED = ::g_Option.getBattleSpeed();
    this->pPARTY->ENCOUNT = func_0200a6c8()->enable_;
    this->pPARTY->SYMBOLID = ::g_Stage.symbolID_;

    for (int k = 0; k < 0xA2; k++) {
        this->pPARTY->NENEITEM[k] = g_NeneItemSack.getItem(k);
        this->pPARTY->NENECOUNT[k] = g_NeneItemSack.getItemCount(k);
    }
    for (int i = 0; i < 6; i++) {
        this->pPARTY->DARTS_ITEM[i] = darts[i];
    }
    for (int i = 0; i < 0xA; i++) {
        this->pPARTY->SPEAKTO_MESSAGE[i] = cmn::PartyTalk::getSingleton()->preMessage_[i];
    }
    this->pPARTY->SPEAKTO_OBJECT = cmn::PartyTalk::getSingleton()->objectNo_;
    this->pPARTY->SPEAKTO_EXITNO = cmn::PartyTalk::getSingleton()->lastExit_;
    this->pPARTY->SPEAKTO_ITEMNO = cmn::PartyTalk::getSingleton()->prevItem_;

    status::g_BattleHistory.setSaveData(this->pPARTY, this->pHISTORY);
    this->pPARTY->BANKMONEY = status::g_Party.bankMoney_;
    this->pPARTY->MEDALCOIN = status::g_Party.medalCoin_;
    this->pPARTY->TAROT = status::g_Story.isTarot();
    this->pPARTY->USE_BANK = status::g_Story.isUseBank();
    this->pPARTY->COMP_PICTUREBOOK = status::g_Story.isCompleteCoin();

    this->pPARTY->HENGE_CHARANO = g_HengeNoTsue.charNo_;
    this->pPARTY->HENGE_COUNTER = g_HengeNoTsue.counter_;
    this->pPARTY->HENGE_CHANGE = g_HengeNoTsue.change_;
    this->pPARTY->HENGE_ENDLESS = g_HengeNoTsue.endLess_;
    this->pPARTY->HENGE_INDEX = g_HengeNoTsue.index_;
    this->pPARTY->PLAYERMEDAL = status::g_Party.playerMedalCoin_;

    func_020882d4(this->pPARTY->IKADAMAP, 0, 0x10);
    dss::DssUtils::strcpy_s((char*)this->pPARTY->IKADAMAP, 0x10, g_cmnPartyInfo.getIkadaMapName());
    this->pPARTY->BALONFLAG = g_cmnPartyInfo.barron_;
    this->pPARTY->UNIQUEID = status::g_Game.getUniqueID();

    for (int i = 0; i < 0x32; i++) {
        this->pPARTY->SELECTTAISHI_FLAG[i] = func_0203ab30(&data_020f0078, i);
    }
}

THUMB void profile::Profile::collectDATA_CHAPTER()
{
    profile::PROFILE_CHAPTER* pc = this->pCHAPTER;
    status::HaveItemSack* sack = status::g_Story.fukuro_;

    for (int i = 0; i < 4; i++) {
        for (int k = 0; k < 162; k++) {
            pc->SACKITEM[k] = sack->getItem(k);
            int maxItem = sack->getItemCount(k);
            if (maxItem > 99) {
                maxItem = 99;
            }
            pc->SACKCOUNT[k] = maxItem;
        }
        pc->GOLD = status::g_Story.gold_[i];
        pc->CASINOCOIN = status::g_Story.coin_[i];
        pc++;
        sack++;
    }

    for (int k = 0; k < 162; k++) {
        pc->SACKITEM[k] = status::g_Party.haveItemSack_.getItem(k);
        int maxItem = status::g_Party.haveItemSack_.getItemCount(k);
        if (maxItem > 99) {
            maxItem = 99;
        }
        pc->SACKCOUNT[k] = maxItem;
    }
    pc->GOLD = status::g_Party.gold_;
    pc->CASINOCOIN = status::g_Party.casinoCoin_;
}


THUMB void profile::Profile::collectDATA_PLAYER()
{

    func_020882d4(this->pPARTY->PARTY, 0, 14);
    this->pPARTY->PARTY[0] = 1;
    this->pPARTY->PARTY[1] = 2;
    this->pPARTY->PARTY[2] = 3;
    this->pPARTY->PARTY[3] = 4;
    this->pPARTY->PARTY[4] = 5;
    this->pPARTY->PARTY[5] = 6;
    this->pPARTY->PARTY[6] = 7;
    this->pPARTY->PARTY[7] = 8;
    this->pPARTY->PARTY[8] = 9;
    this->pPARTY->PARTY[9] = 25;

    for (int i = 0; i < 25; i++) {
        int k = i + 1;
        if (originalPlayerFlag_[k] != 0) {
            status::PlayerStatus* op = &originalPlayer_[k];
            int j = 0;
            int pi = op->haveStatusInfo_.haveStatus_.playerIndex_;
            for (; j < 14; j++) {
                if (pi == this->pPARTY->PARTY[j]) {
                    break;
                }
                if (this->pPARTY->PARTY[j] == 0) {
                    this->pPARTY->PARTY[j] = pi;
                    break;
                }
            }
        }
    }
    for (int j = 0; j < 14; j++) {
        int pi = this->pPARTY->PARTY[j];
        if (pi != 0) {
            status::PlayerStatus* p = status::PartyStatus::getPlayerStatusForPlayerIndex(pi);
            p->setSaveDataForPlayer(&this->pPLAYER[j]);
            p->haveStatusInfo_.haveEquipment_.setSaveDataForPlayer(&this->pPLAYER[j]);
        }
    }
}

THUMB void profile::Profile::collectDATA_MONSTER()
{
    for (unsigned int i = 0; i < 0xD2; i++) {
        this->pMONSTER->KILL = status::g_BattleResult.getMonsterCount(i);
        this->pMONSTER->ITEMCOUNT = status::g_BattleResult.getItemCount(i);
        this->pMONSTER->LEVEL = status::g_BattleResult.getLevel(i);
        this->pMONSTER->ENCOUNT = status::g_BattleResult.isEncount(i);
        this->pMONSTER++;
    }
}

THUMB void profile::Profile::collectDATA_ENVOY()
{
    for (int i = 0; i < 0x18; i++) {
        if (func_0203a358(&data_020f0078, i) != 0) {
            func_0203a34c(&data_020f0078, i);
            this->pENVOY->UNIQUE = func_0203a5a4(&data_020f0078);
            this->pENVOY->TYPE = func_0203a5ec(&data_020f0078);
            this->pENVOY->SEX = func_0203a714(&data_020f0078);
            this->pENVOY->AGE = func_0203a750(&data_020f0078);
            this->pENVOY->SKILL = func_0203a78c(&data_020f0078);
            func_020882ec(this->pENVOY->NAME, func_0203a65c(&data_020f0078), 0x1A);
            func_020882ec(this->pENVOY->HERONAME, func_0203a6d8(&data_020f0078), 0x1A);
            func_020882ec(this->pENVOY->TOWNNAME, func_0203a820(&data_020f0078), 0x2A);
            func_020882ec(this->pENVOY->COMMENT, func_0203a938(&data_020f0078), 0x5C);
        } else {
            this->pENVOY->TYPE = 0xFF;
        }
        this->pENVOY++;
    }
    if (func_0203a354(&data_020f0078) != 0) {
        data_020f0078 = 1;
        this->pENVOY->UNIQUE = func_0203a5a4(&data_020f0078);
        this->pENVOY->TYPE = func_0203a5ec(&data_020f0078);
        this->pENVOY->SEX = func_0203a714(&data_020f0078);
        this->pENVOY->AGE = func_0203a750(&data_020f0078);
        this->pENVOY->SKILL = func_0203a78c(&data_020f0078);
        func_020882ec(this->pENVOY->NAME, func_0203a65c(&data_020f0078), 0x1A);
        func_020882ec(this->pENVOY->HERONAME, func_0203a6d8(&data_020f0078), 0x1A);
        func_020882ec(this->pENVOY->TOWNNAME, func_0203a820(&data_020f0078), 0x2A);
        func_020882ec(this->pENVOY->COMMENT, func_0203a938(&data_020f0078), 0x5C);
    } else {
        this->pENVOY->TYPE = 0xFF;
    }
}

THUMB int profile::Profile::deliverDATA()
{
    presetMember();
    if (isValidData() == 0) {
        return 0;
    }
    if (calcCheckSum() == 0) {
        return 0;
    }
    deliverDATA_PARTY();
    deliverDATA_CHAPTER();
    deliverDATA_PLAYER();
    deliverDATA_MONSTER();
    deliverDATA_ENVOY();
    return 1;
}

extern "C" {
    void func_0200b864(void*);
    void func_0205594c(int);
    void func_0203ab20(void*, int, int);
}

THUMB void profile::Profile::deliverDATA_PARTY()
{
    func_0200b864(&g_Global);
    func_0205594c(0xF);

    g_Stage.profileBank_ = this->pSYSTEM->BOOKNO;
    g_Stage.loadType_ = (profile::SAVETYPE)this->pSYSTEM->SAVETYPE;

    g_Stage.initialize();
    g_Stage.setup((char*)this->pPARTY->RESTART);
    g_Stage.setChurchMapName((char*)this->pPARTY->CHURCH);

    dss::Fx32Vector3 pos;
    pos.vx.value = (dss::fx32)this->pPARTY->PARTY_X;
    pos.vy.value = (dss::fx32)this->pPARTY->PARTY_Y;
    pos.vz.value = (dss::fx32)this->pPARTY->PARTY_Z;
    deliverRESTART_MAP(&pos, this->pPARTY->PARTY_D);

    {
        dss::Fx32Vector3 tmp;
        tmp.vx.value = (dss::fx32)this->pPARTY->SHIP_X;
        tmp.vy.value = (dss::fx32)this->pPARTY->SHIP_Y;
        tmp.vz.value = (dss::fx32)this->pPARTY->SHIP_Z;
        dss::Fx32 x(tmp.vx);
        dss::Fx32 y(tmp.vy);
        dss::Fx32 z(tmp.vz);
        g_Stage.shipPosition_ = *(dss::Fx32Vector3*)&x;
    }
    {
        dss::Fx32Vector3 tmp;
        tmp.vx.value = (dss::fx32)this->pPARTY->BALLOON_X;
        tmp.vy.value = (dss::fx32)this->pPARTY->BALLOON_Y;
        tmp.vz.value = (dss::fx32)this->pPARTY->BALLOON_Z;
        dss::Fx32 x(tmp.vx);
        dss::Fx32 y(tmp.vy);
        dss::Fx32 z(tmp.vz);
        g_Stage.balloonPosition_ = *(dss::Fx32Vector3*)&x;
    }
    {
        dss::Fx32Vector3 tmp;
        tmp.vx.value = (dss::fx32)this->pPARTY->RAFT_X;
        tmp.vy.value = (dss::fx32)this->pPARTY->RAFT_Y;
        tmp.vz.value = (dss::fx32)this->pPARTY->RAFT_Z;
        g_cmnPartyInfo.townIkadaPos_ = tmp;
    }
    {
        dss::Fx32Vector3 tmp;
        tmp.vx.value = (dss::fx32)this->pPARTY->OVERVIEW_X;
        tmp.vy.value = (dss::fx32)this->pPARTY->OVERVIEW_Y;
        tmp.vz.value = (dss::fx32)this->pPARTY->OVERVIEW_Z;
        g_Stage.overviewTempPosition_ = tmp;
        g_Stage.overviewPosition_ = tmp;
    }

    g_cmnPartyInfo.rideOnType_ = (cmn::PARTY_RIDE_ON_TYPE)this->pPARTY->RIDEON;
    g_Stage.balloonFieldType_ = this->pPARTY->BALLOON_FIELD;
    g_Stage.setRanaMapName((char*)this->pPARTY->RANALUTA_MAP);
    g_Stage.lastFldSurface_ = this->pPARTY->RANALUTA_SURFACE;
    status::g_Story.setChapter(this->pPARTY->CHAPTER);

    deliverGameFlag(&g_GlobalFlag, this->pPARTY->GLOBALFLAG);
    deliverGameFlag(&g_AreaFlag, this->pPARTY->AREAFLAG);
    deliverGameFlag(&g_LocalFlag, this->pPARTY->LOCALFLAG);

    g_Stage.deliverMapFlag((profile::SAVETYPE)this->pSYSTEM->SAVETYPE, this->pPARTY);
    status::g_Party.setLoadData(this->pPARTY, this->pHISTORY);

    g_Stage.setTimeZone((TIME_ZONE)this->pPARTY->TIMEZONE);
    g_Stage.setWorldTime(this->pPARTY->WORLDTIME);
    g_Stage.timestop_ = this->pPARTY->TIMESTOP;
    status::g_Story.sex_ = (Sex)this->pPARTY->SEX;
    status::g_Story.setHeroName((char*)this->pPARTY->NAME);

    for (int i = 0; i < 0x10; i++) {
        cmn::g_CommonCounterInfo.dayCounter_[i] = this->pPARTY->DAY_COUNTER[i];
    }
    for (int i = 0; i < 4; i++) {
        cmn::g_CommonCounterInfo.freeCounter_[i] = this->pPARTY->FREE_COUNTER[i];
    }

    status::g_Story.setEndorEventItemCount(status::StoryStatus::EVENT_HAGANENOTURUGI, this->pPARTY->BONMOL[0]);
    status::g_Story.setEndorEventItemCount(status::StoryStatus::EVENT_TETUNOYOROI, this->pPARTY->BONMOL[1]);
    status::g_Game.setPlayTime(this->pPARTY->PLAYTIME);
    status::g_Game.language = (Language)this->pPARTY->LANGUAGE;
    ::g_Option.setBgmVolume(this->pPARTY->BGM_VOLUME);
    ::g_Option.setSeVolume(this->pPARTY->SE_VOLUME);
    ::g_Option.setBattleSpeed(this->pPARTY->BATTLE_SPEED);

    func_0200a6c8()->enable_ = this->pPARTY->ENCOUNT;
    g_Stage.symbolID_ = this->pPARTY->SYMBOLID;

    for (int k = 0; k < 0xA2; k++) {
        g_NeneItemSack.adds(this->pPARTY->NENEITEM[k], this->pPARTY->NENECOUNT[k]);
    }
    for (int i = 0; i < 6; i++) {
        darts[i] = this->pPARTY->DARTS_ITEM[i];
    }
    cmn::PartyTalk* talk = cmn::PartyTalk::getSingleton();
    for (int i = 0; i < 0xA; i++) {
        talk->setPreMessage(i, this->pPARTY->SPEAKTO_MESSAGE[i]);
    }
    talk = cmn::PartyTalk::getSingleton();
    talk->objectNo_ = this->pPARTY->SPEAKTO_OBJECT;
    talk = cmn::PartyTalk::getSingleton();
    talk->lastExit_ = this->pPARTY->SPEAKTO_EXITNO;
    talk = cmn::PartyTalk::getSingleton();
    talk->prevItem_ = this->pPARTY->SPEAKTO_ITEMNO;

    status::g_BattleHistory.setLoadData(this->pPARTY, this->pHISTORY);
    status::g_Party.setBankMoney(this->pPARTY->BANKMONEY);
    status::g_Party.setMedalCoin(this->pPARTY->MEDALCOIN);
    status::g_Story.setTarot(this->pPARTY->TAROT);
    status::g_Story.setUseBank(this->pPARTY->USE_BANK);
    status::g_Story.setCompleteCoin(this->pPARTY->COMP_PICTUREBOOK);

    g_HengeNoTsue.charNo_ = this->pPARTY->HENGE_CHARANO;
    g_HengeNoTsue.counter_ = this->pPARTY->HENGE_COUNTER;
    g_HengeNoTsue.change_ = this->pPARTY->HENGE_CHANGE;
    g_HengeNoTsue.endLess_ = this->pPARTY->HENGE_ENDLESS;
    g_HengeNoTsue.index_ = this->pPARTY->HENGE_INDEX;
    status::g_Party.setPlayerMedalCoin(this->pPARTY->PLAYERMEDAL);

    g_cmnPartyInfo.setIkadaMapName((char*)this->pPARTY->IKADAMAP);
    g_cmnPartyInfo.barron_ = this->pPARTY->BALONFLAG;
    status::g_Game.setUniqueID(this->pPARTY->UNIQUEID);

    for (int i = 0; i < 0x32; i++) {
        func_0203ab20(&data_020f0078, i, this->pPARTY->SELECTTAISHI_FLAG[i]);
    }
}

THUMB void profile::Profile::deliverDATA_CHAPTER()
{
    profile::PROFILE_CHAPTER* pc = this->pCHAPTER;
    status::HaveItemSack* sack = status::g_Story.fukuro_;

    for (int i = 0; i < 4; i++) {
        for (int k = 0; k < 0xA2; k++) {
            sack->adds(pc->SACKITEM[k], pc->SACKCOUNT[k]);
        }
        status::g_Story.gold_[i] = pc->GOLD;
        status::g_Story.coin_[i] = pc->CASINOCOIN;
        pc++;
        sack++;
    }

    for (int k = 0; k < 0xA2; k++) {
        status::g_Party.haveItemSack_.adds(pc->SACKITEM[k], pc->SACKCOUNT[k]);
    }
    status::g_Party.setGold(pc->GOLD);
    status::g_Party.setCasinoCoin(pc->CASINOCOIN);
}

THUMB void profile::Profile::deliverDATA_PLAYER()
{
    for (int j = 0; j < 14; j++) {
        int pi = this->pPARTY->PARTY[j];
        if (pi != 0) {
            status::PlayerStatus* p = status::PartyStatus::getPlayerStatusForPlayerIndex(pi);
            p->setLoadDataForPlayer(&this->pPLAYER[j]);
            p->haveStatusInfo_.haveEquipment_.setLoadDataForPlayer(&this->pPLAYER[j]);
        }
    }
}

THUMB void profile::Profile::deliverDATA_MONSTER()
{
    for (unsigned int i = 0; i < 0xD2; i++) {
        status::g_BattleResult.setMonsterCount(i, this->pMONSTER->KILL);
        status::g_BattleResult.setItemCount(i, this->pMONSTER->ITEMCOUNT);
        status::g_BattleResult.setLevel(i, this->pMONSTER->LEVEL);
        status::g_BattleResult.setEncount(i, this->pMONSTER->ENCOUNT);
        this->pMONSTER++;
    }
}

THUMB void profile::Profile::deliverDATA_ENVOY()
{
    for (int i = 0; i < 0x18; i++) {
        func_0203a34c(&data_020f0078, i);
        if (this->pENVOY->TYPE != 0xFF) {
            func_0203a574(&data_020f0078, 1);
            func_0203a58c(&data_020f0078, this->pENVOY->UNIQUE);
            func_0203a5bc(&data_020f0078, this->pENVOY->TYPE);
            func_0203a6f4(&data_020f0078, this->pENVOY->SEX);
            func_0203a730(&data_020f0078, this->pENVOY->AGE);
            func_0203a76c(&data_020f0078, this->pENVOY->SKILL);
            func_020882ec(func_0203a65c(&data_020f0078), this->pENVOY->NAME, 0x1A);
            func_020882ec(func_0203a6d8(&data_020f0078), this->pENVOY->HERONAME, 0x1A);
            func_020882ec(func_0203a820(&data_020f0078), this->pENVOY->TOWNNAME, 0x2A);
            func_020882ec(func_0203a938(&data_020f0078), this->pENVOY->COMMENT, 0x5C);
        } else {
            func_0203a574(&data_020f0078, 0);
        }
        this->pENVOY++;
    }
    func_02037da4();
    func_02037ca4();
    data_020f0078 = 1;
    if (this->pENVOY->TYPE != 0xFF) {
        func_0203a574(&data_020f0078, 1);
        func_0203a58c(&data_020f0078, this->pENVOY->UNIQUE);
        func_0203a5bc(&data_020f0078, this->pENVOY->TYPE);
        func_0203a6f4(&data_020f0078, this->pENVOY->SEX);
        func_0203a730(&data_020f0078, this->pENVOY->AGE);
        func_0203a76c(&data_020f0078, this->pENVOY->SKILL);
        func_020882ec(func_0203a65c(&data_020f0078), this->pENVOY->NAME, 0x1A);
        func_020882ec(func_0203a6d8(&data_020f0078), this->pENVOY->HERONAME, 0x1A);
        func_020882ec(func_0203a820(&data_020f0078), this->pENVOY->TOWNNAME, 0x2A);
        func_020882ec(func_0203a938(&data_020f0078), this->pENVOY->COMMENT, 0x5C);
    } else {
        func_0203a574(&data_020f0078, 0);
    }
}


THUMB void profile::Profile::deliverRESTART_MAP(dss::Fx32Vector3* pos, short dir)
{
    if (this->pSYSTEM->SAVETYPE == profile::SAVETYPE_CHURCH && g_Stage.restartChurch() == 1) {
        g_Stage.load_ = 1;
        return;
    }
    if (func_020882b0((const char*)this->pPARTY->RESTART, data_020c13a0) == 0) {
        func_02028e8c(&data_020ed28c, this->pPARTY->FIELDTYPE, pos, 4);
        return;
    }
    func_02028494(&data_020ed28c, this->pPARTY->RESTART, pos, dir);
}