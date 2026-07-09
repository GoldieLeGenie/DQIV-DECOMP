#pragma once
#include <globaldefs.h>
#include "main/status/CharacterStatus.hpp"
#include "GameInfo.hpp"

namespace status{
    struct PlayerStatus : CharacterStatus {
        short index_;
        short walkCount_;
        short walkCountBarrier_;
        short walkCountPoison_;
        short walkCountPoisonCondition_;
        short walkCountZombieMail_;
        short walkCountLuckShoes_;
        short walkCountLuckHat_;
        short walkCountGoddessRing_;
        short walkCountLifeRing_;
        PlayerStatus();
        ~PlayerStatus();
        void setup(int index);
        void levelup(int level);
        void setBestCondition();
        bool walkDamage(StageDamage damage);
        bool walkNormal();
        bool setWalkEffectPoison();
        bool setWalkEffectZombiMail();
        void setWalkEffectLuckShoes();
        void setWalkEffectLuckHat();
        void setWalkEffectGoddessRing();
        void setWalkEffectLifeRing();
        void clearWalkDamage();
        void setNearDeath(int damage);
        void execStartOfRound();
        void execOfRound();
        virtual void print();
        virtual void printAction();
        virtual bool isDeathDisable();
        virtual void setMosyasRelease();
        virtual void setMosyasChange();
        void setSaveDataForPlayer(profile::PROFILE_PLAYER* dat);
        void setLoadDataForPlayer(profile::PROFILE_PLAYER* dat);
        
        
        
        

    };
}

extern "C" unsigned char func_02013fb4(status::BaseHaveItem*, int index);
extern "C" void func_02011348(status::HaveAction*);
extern "C" void func_020106a4(status::HaveItem*, int index);

extern status::PlayerStatus data_020c7e48;
extern status::PlayerStatus data_020c8860[16];