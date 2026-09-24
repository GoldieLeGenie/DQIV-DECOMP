#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"

namespace cmn
{
    struct CommonWalkDamage
    {
        void* unk;
        int seCounter_;
        bool nextSe_;
        int nextSeType_;
        void setup();
        void clear();
        bool checkWalkStride();
    };
    
}

extern "C" signed char data_020ef740[82];//damage_
extern "C" int  data_020ef710[];//partyDamage_
extern "C" int data_020ef704; // walkCount_
extern "C" int data_020ef708; // partyStride_
extern "C" int data_020ef70c; // topStride_

struct CommonWalkDamageEntry {
    int damage_;
    int unk4_;
    int count_;
};

struct CommonWalkDamageData {
    int memberDamage_;   // 0x00
    int unk4;            // 0x04
    int unk8;            // 0x08
    int unkC;            // 0x0c
    int walkCount_;      // 0x10
    int partyStride_;    // 0x14
    int topStride_;      // 0x18
    int topDamage_;      // 0x1c  (partyDamage_ sur mobile)
    int unk20;           // 0x20
    int topCount_;       // 0x24  (dword_295BB8 sur mobile)
};
extern CommonWalkDamageData data_020ef6f4;
extern CommonWalkDamageEntry data_020ef71c[3];