
#include "main/status/BasePartyStatus.hpp"
#include "main/status/PartyStatus.hpp"
extern int originalPlayerFlag_[26];

THUMB status::BasePartyStatus::BasePartyStatus()
    : basha_(0), bashaEnable_(1), fukuro_(0)
{
}

THUMB bool status::BasePartyStatus::isCarriageEnter()
{
	if (this->basha_ && g_Stage.isBashaEnable() && g_Stage.isBashaEnter()) {
		return 1;
	}
	return 0;
}

THUMB void status::BasePartyStatus::setGold(int gold) {
	this->gold_ = gold;
	this->gold_ = getClampValue(this->gold_, 0, 999999);
	return;
}


THUMB unsigned int status::BasePartyStatus::getClampValue(unsigned int value, unsigned int min, unsigned int max) {
	unsigned int clamped = getMin(value, min);
	return getMax(clamped, max);
}


THUMB unsigned int status::BasePartyStatus::getMin(unsigned int a, unsigned int b) {
	return (a > b) ? a : b;
}

THUMB unsigned int status::BasePartyStatus::getMax(unsigned int a, unsigned int b) {
	return (a < b) ? a : b;
}

THUMB void status::BasePartyStatus::addGold(int gold) {
	this->gold_ = this->gold_ + gold;
	this->gold_ = getClampValue(this->gold_, 0, 999999);
	return;
}

THUMB void status::BasePartyStatus::setBankMoney(unsigned int money) {
	this->bankMoney_ = money;
	this->bankMoney_ = getClampValue(this->bankMoney_, 0, 99999000);
	return;
}

THUMB void status::BasePartyStatus::addBankMoney(unsigned int money) {
	this->bankMoney_ = this->bankMoney_ + money;
	this->bankMoney_ = getClampValue(this->bankMoney_, 0, 99999000);
	return;
}

THUMB void status::BasePartyStatus::setCasinoCoin(unsigned int coins) {
	this->casinoCoin_ = coins;
	this->casinoCoin_ = getClampValue(this->casinoCoin_, 0, 999999);
	return;
}

THUMB void status::BasePartyStatus::addCasinoCoin(int coin) {
	this->casinoCoin_ = this->casinoCoin_ + coin;
	this->casinoCoin_ = getClampValue(this->casinoCoin_, 0, 999999);
	return;
}

THUMB void status::BasePartyStatus::setMedalCoin(unsigned int coin) {
	this->medalCoin_ = coin;
	this->medalCoin_ = getClampValue(this->medalCoin_, 0, 99);
	return;
}

THUMB void status::BasePartyStatus::addMedalCoin(unsigned int coin) {
	this->medalCoin_ = (this->medalCoin_ + coin);
	this->medalCoin_ = getClampValue(this->medalCoin_, 0, 99);
	return;
}

THUMB void status::BasePartyStatus::setPlayerMedalCoin(unsigned int coin) {
	this->playerMedalCoin_ = coin;
	this->playerMedalCoin_ = getClampValue(this->playerMedalCoin_, 0, 0x63);
	return;
}

THUMB void status::BasePartyStatus::addPlayerMedalCoin(unsigned int coin) {
	this->playerMedalCoin_ = (this->playerMedalCoin_ + coin);
	this->playerMedalCoin_ = getClampValue(this->playerMedalCoin_, 0, 0x63);
	return;
}

THUMB int status::BasePartyStatus::isFirstMedalCoin()
{
	return this->medalCoin_ + this->playerMedalCoin_ == 1;
}

THUMB void status::BasePartyStatus::setSaveData(profile::PROFILE_PARTY* data) {
	data->BASHA = this->basha_;
	data->CHAPTER = g_Story.chapter_;
}

THUMB void status::BasePartyStatus::setLoadData(profile::PROFILE_PARTY *data) {
    this->basha_ = data->BASHA;
    g_Story.setChapter(data->CHAPTER);
    return;
}


THUMB int status::BasePartyStatus::getBattleExp()
{
	return this->battleExp_;
}

THUMB int status::BasePartyStatus::getBattleGold()
{
	return this->battleGold_;
}

