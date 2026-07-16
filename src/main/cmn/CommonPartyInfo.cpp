#include "main/cmn/CommonPartyInfo.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/ActionExec.hpp"
#include "main/status/GameFlag.hpp"
#include "main/global/Global.hpp"

char s_srout_map[8] = "srout";
cmn::CommonPartyInfo g_cmnPartyInfo;



cmn::CommonPartyInfo::CommonPartyInfo()
{
    this->prevLocation_ = 0;
    this->mapNameAtIkada_[0] = 0;
    this->mapNameAtShip_[0] = 0;
}

ARM dss::Fx32Vector3 *cmn::CommonPartyInfo::getPositionArrayPointer()
{
  return this->positionArray_;
}


ARM short* cmn::CommonPartyInfo::getDirectionArrayPointer()
{
  return this->directionArray_;
}


ARM void cmn::CommonPartyInfo::setPartyInfo(dss::Fx32Vector3* partyPosition, short partyDirIdx)
{
    this->position_ = *partyPosition;
    this->dirIdx_ = partyDirIdx;
}


ARM void cmn::CommonPartyInfo::getPartyInfo(dss::Fx32Vector3* partyPos, short* partyDirIdx)
{
    *partyPos = this->position_;
    *partyDirIdx = this->dirIdx_;
}

ARM void cmn::CommonPartyInfo::setBashaInfo(dss::Fx32Vector3* bashaLPos, dss::Fx32Vector3* bashaRPos,
                                        short bashaLIdx, short bashaRIdx,
                                        int countParty, int countLFix, int countRFix)
{
    this->bashaLPos_ = *bashaLPos;
    this->bashaRPos_ = *bashaRPos;
    this->bashaLIdx_ = bashaLIdx;
    this->bashaRIdx_ = bashaRIdx;
    this->countPartyArray_ = countParty;
    this->countLFix_ = countLFix;
    this->countRFix_ = countRFix;
}


ARM void cmn::CommonPartyInfo::getBashaInfo(dss::Fx32Vector3* bashaLPos, dss::Fx32Vector3* bashaRPos,
                                        short* bashaLIdx, short* bashaRIdx,
                                        int* countParty, int* countLFix, int* countRFix)
{
    *bashaLPos = this->bashaLPos_;
    *bashaRPos = this->bashaRPos_;
    *bashaLIdx = this->bashaLIdx_;
    *bashaRIdx = this->bashaRIdx_;
    *countParty = this->countPartyArray_;
    *countLFix = this->countLFix_;
    *countRFix = this->countRFix_;
}

ARM void cmn::CommonPartyInfo::setDirIdx(short dirIdx)
{
  this->dirIdx_ = dirIdx;
  return;
}


ARM void cmn::CommonPartyInfo::setStartPosition()
{
  this->position_ = this->startPos_;
  return;
}

ARM void cmn::CommonPartyInfo::setShipInfo(char* name, dss::Fx32Vector3* pos, short idx)
{
    dss::DssUtils::strcpy_s(this->mapNameAtShip_, 10, name);
    this->townShipPos_ = *pos;
    this->shipDirection_ = idx;
}

ARM char * cmn::CommonPartyInfo::getShipMapName()
{
  return this->mapNameAtShip_;
}


ARM void cmn::CommonPartyInfo::getShipInfo(dss::Fx32Vector3* pos, short* idx)
{
    *pos = this->townShipPos_;
    *idx = this->shipDirection_;
}

ARM void cmn::CommonPartyInfo::setIkadaInfo(char *name,dss::Fx32Vector3 *pos)
{
  dss::DssUtils::strcpy_s(this->mapNameAtIkada_,10,name);
  this->townIkadaPos_ = *pos;
  return;
}

ARM void cmn::CommonPartyInfo::setIkadaMapName(char *name)
{
  dss::DssUtils::strcpy_s(this->mapNameAtIkada_,10,name);
  return;
}


ARM char * cmn::CommonPartyInfo::getIkadaMapName()
{
  return this->mapNameAtIkada_;
}


ARM dss::Fx32Vector3 cmn::CommonPartyInfo::getIkadaPos()
{
    return this->townIkadaPos_;
}

ARM void cmn::CommonPartyInfo::resetShipIkadaMapName()
{
  this->mapNameAtIkada_[0] = '\0';
  this->mapNameAtShip_[0] = '\0';
  return;
}


ARM int cmn::CommonPartyInfo::isBalloonEnable()
{
    if (status::g_Party.balloon_  == 1) {
        int fieldType = g_Stage.balloonFieldType_;
        if (fieldType == g_Global.getFieldType()) {
            return 1;
        }
    }
    return 0;
}

ARM int cmn::CommonPartyInfo::isShipEnable()
{
    if (status::g_Party.ship_ == 1 && g_Global.getFieldType() == 0) {
        return 1;
    }
    return 0;
}


ARM void cmn::CommonPartyInfo::setBalloonFieldTypeByTownId(int townId)
{
    switch (townId) {
    case 22:
    case 23:
    case 24:
    case 25:
        ::g_Stage.balloonFieldType_ = 1;
        break;
    default:
        ::g_Stage.balloonFieldType_ = 0;
        break;
    }
}


ARM void cmn::CommonPartyInfo::callCarriage()
{
    status::g_Party.basha_ = 1;
    g_Stage.setBashaEnable(1);
    g_Stage.setBashaEnter(1);
    this->barron_ = 1;
    if (func_02058114(&data_0210bb94, 0xE) != 0) {
        ((FieldPlayerManager*)func_ov001_02127b28())->vf0C();
        return;
    }
    ((FieldPlayerManager*)func_ov000_02132a90())->vf0C();
}


ARM int cmn::CommonPartyInfo::isBarronArea(dss::Fx32Vector3* pos)
{
    if (func_02058114(&data_0210bb94, 0xE) != 0) {
        return func_ov001_0212a460(func_ov001_02127b28(), pos);
    }
    if (func_020882b0(s_srout_map, g_Global.getMapName()) == 0) {
        return 1;
    }
    this->barron_ = 0;
    return 0;
}

ARM int cmn::CommonPartyInfo::isUsedBarron()
{
  return this->barron_;
}


ARM void cmn::CommonPartyInfo::checkBallon(dss::Fx32Vector3* pos)
{
    if (isBarronArea(pos) == 1) {
        if (this->barron_ == 1) {
            g_Stage.setBashaEnable(1);
            g_Stage.setBashaEnter(1);
            status::g_Party.basha_ = 1;
            return;
        }
        if (func_02058114(&data_0210bb94, 0xE) != 0) {
            status::g_Party.basha_ = 0;
            return;
        }
        status::g_Party.basha_ = 1;
        ::g_Stage.setBashaEnter(0);
        return;
    }
    if (g_AreaFlag.check(310) != 1
     && g_AreaFlag.check(388) != 1) {
        return;
    }
    status::g_Party.basha_ = 1;
}

ARM void cmn::CommonPartyInfo::setMenuAction(MENU_ACTION mode)
{
    if (mode != MENU_ACTION_NONE) {
        if (func_02058114(&data_0210bb94, 0xE) != MENU_ACTION_NONE) {
            func_ov001_02127b28();
            func_02030fe0(1);
        } else {
            func_ov000_021341ec(func_ov000_02132a90(), 1);
        }
    } else {
        if (func_02058114(&data_0210bb94, 0xE) != MENU_ACTION_NONE) {
            func_ov001_02127b28();
            func_02030fe0(0);
        } else {
            func_ov000_021341ec(func_ov000_02132a90(), 0);
        }
    }
    if (mode == MENU_RURA_FAILED) {
        ((TownSystem*)func_ov000_02132228())->scriptLock_ = 1;
    }
    this->menuAction_ = mode;
}

ARM void cmn::CommonPartyInfo::setBalloonPosByExtraSave()
{
    this->tempBalloonPos_ = dss::Fx32Vector3(g_Stage.balloonPosition_.vx,
                                             g_Stage.balloonPosition_.vy,
                                             g_Stage.balloonPosition_.vz);
    this->tempBalloonFieldType_ = g_Stage.balloonFieldType_;

    dss::Fx32Vector3 townPos = func_020335ec(func_020332cc(), 1);
    g_Stage.balloonPosition_ = dss::Fx32Vector3(townPos.vx, townPos.vy, townPos.vz);
    g_Stage.balloonFieldType_ = 0;

    this->tempShipPos_ = dss::Fx32Vector3(g_Stage.shipPosition_.vx,
                                          g_Stage.shipPosition_.vy,
                                          g_Stage.shipPosition_.vz);
}


ARM void cmn::CommonPartyInfo::resetBalloonPosByExtraSave()
{
    g_Stage.balloonPosition_ = dss::Fx32Vector3(this->tempBalloonPos_.vx,
                                                        this->tempBalloonPos_.vy,
                                                        this->tempBalloonPos_.vz);
    g_Stage.balloonFieldType_ = this->tempBalloonFieldType_;
    g_Stage.shipPosition_ = dss::Fx32Vector3(this->tempShipPos_.vx,
                                                     this->tempShipPos_.vy,
                                                     this->tempShipPos_.vz);
}