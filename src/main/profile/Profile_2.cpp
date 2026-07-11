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


// status::HaveItemSack g_NeneItemSack;
char s_field[8] = "field"; // data_020c1398


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

    func_02030df8(this, this->pPARTY->GLOBALFLAG, &g_GlobalFlag);
    func_02030df8(this, this->pPARTY->AREAFLAG, &g_AreaFlag);
    func_02030df8(this, this->pPARTY->LOCALFLAG, &g_LocalFlag);
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
        this->pPARTY->SPEAKTO_MESSAGE[i] = func_02037494()->preMessage_[i];
    }
    this->pPARTY->SPEAKTO_OBJECT = func_02037494()->objectNo_;
    this->pPARTY->SPEAKTO_EXITNO = func_02037494()->lastExit_;
    this->pPARTY->SPEAKTO_ITEMNO = func_02037494()->prevItem_;

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




