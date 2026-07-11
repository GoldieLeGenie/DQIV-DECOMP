#include "main/profile/Profile.hpp"


ARM void profile::Profile::presetMember()
{
    this->pSYSTEM = &this->profiledata_.system;
    this->pPARTY = &this->profiledata_.party;
    this->pCHAPTER = this->profiledata_.chapter;
    this->pPLAYER = this->profiledata_.player;
    this->pMONSTER = this->profiledata_.monster;
    this->pHISTORY = this->profiledata_.history;
    this->pENVOY = this->profiledata_.envoy;
}
