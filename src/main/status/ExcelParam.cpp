#include "main/status/ExcelParam.hpp"


status::ExcelParam status::excelParam;

THUMB void status::ExcelParam::setup()
{
	this->surechigai_ = (param::SurechigaiObjectData*)&data_0208cc08;
	this->charaInitData_ = (param::CharInitData*)&charInitDataTable;
	this->heroData_ = (param::HeroData*)&heroDataTable;
	this->warriorData_ = (param::WarriorData*)&warriorDataTable;
	this->princessData_ = (param::PrincessData*)&princessDataTable;
	this->priestData_ = (param::PriestData*)&priestDataTable;
	this->mageData_ = &data_020919dc;
	this->traderData_ = &data_02092340;
	this->warlockData_ = &data_02092ca4;
	this->dancerData_ = &data_02093608;
	this->pissaroData_ = &data_02093f6c;
	this->itemData_ = &data_020978dc;
	this->charaVoice_ = &data_0208d9b0;
	this->actionParam_ = &data_020aa604;
	this->abreactTurn_ = &data_0208e3ac;
	this->monsterData_ = &data_020a02e8;
	this->bookData_ = &data_0208dd18;
	this->splitMsg_ = &data_02098d20;
	this->encountData_ = &data_0209dae4;
	this->encountFormationID_ = &data_0208cdc8;
	this->encountFormNum_ = &data_0208cab8;
	this->encountSpecial_ = &data_02095c64;
	this->monsterMap_ = &data_020948d0;
	this->encountSeaTile_.tile_ = data_0208d0d0;
	this->encountTile1_.tile_ = &data_0208cfcc;
	this->encountTile2_.tile_ = &data_0208d1d4;
	this->encountTile3_.tile_ = &data_0208cec8;
	this->encountGotTile_.tile_ = &data_0208ca78;
	this->encountYamiTile_.tile_ = data_0208ca68;
	this->colorCorrect_ = &data_0209a44c;
	this->floorFog_ = &data_0208ca8c;
	this->clutCode_ = &data_0208ccd4;
	this->floorBackColor_ = &data_0208d2d8;
	this->floorParam_ = &data_020a4cc0;
	this->shopDataFirst_ = &data_02096968;
	this->shopDataSecond_ = &data_0209bda0;
	this->vehicle_ = &data_0208d6f4;
	this->mapChurch_ = &data_0208d480;
	this->effectColor_ = (param::EffectColorParam*)&data_02095240;
	this->surechigaiTenant_ = (param::SurechigaiTenant*)&data_0208cb4c;
	return;
}

THUMB param::CharInitData* status::ExcelParam::getCharaInitData()
{
  return this->charaInitData_;
}

THUMB param::HeroData* status::ExcelParam::getHeroData()
{
  return this->heroData_;
}

THUMB param::WarriorData* status::ExcelParam::getWarriorData()
{
  return this->warriorData_;
}

THUMB param::PrincessData* status::ExcelParam::getPrincessData()
{
  return this->princessData_;
}

THUMB param::PriestData* status::ExcelParam::getPriestData()
{
  return this->priestData_;
}

THUMB param::MageData* status::ExcelParam::getMageData()
{
  return this->mageData_;
}

THUMB param::TraderData* status::ExcelParam::getTraderData()
{
  return this->traderData_;
}

THUMB param::WarlockData* status::ExcelParam::getWarlockData()
{
  return this->warlockData_;
}

THUMB param::DancerData* status::ExcelParam::getDancerData()
{
  return this->dancerData_;
}

THUMB param::PissaroData* status::ExcelParam::getPissaroData()
{
  return this->pissaroData_;
}

THUMB param::ItemData* status::ExcelParam::getItemData()
{
  return this->itemData_;
}

THUMB param::AppriseItem* status::ExcelParam::getAppriseItem()
{
	return this->appriseItem_;
}

THUMB param::AlterMessage* status::ExcelParam::getAlterMessage()
{
	return this->alterMessage_;
}

THUMB param::CharaVoice* status::ExcelParam::getCharaVoice()
{
  return this->charaVoice_;
}