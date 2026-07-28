#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/param/Param.hpp"
#include "main/status/excelParam.hpp"
#include "main/dss/Random.hpp"

struct FormationId {
    int formationId_;
    int chapter_;
    int partyCount_;
    unsigned char thirdGroup_;
    unsigned char forthGroup_;
    short typeRate_[14];
    unsigned char countMin_[14];
    unsigned char countMax_[14];
    void setup(int id);
    EncountType select();
    static int isRange(int value, int min, int max);
    static short getMaxValue(short* rates, int count);
    EncountType selectA_E();
    int getMonsterCount(EncountType type);
    int getMonsterCountA_E();
    unsigned int getEncountFormNumCount();
};

struct EncountFormNumHeader {
    unsigned int count;                     // 0x00
    unsigned int unk_4;                      // 0x04
    unsigned int unk_8;                      // 0x08
};
extern const EncountFormNumHeader encountFormNumHeader; //data_0208ca04


extern "C"
{
    int func_0200b1b0(FormationId*);                     // getMonsterCountA_E
    int func_0200b228(FormationId*, EncountType type);   // getMonsterCountF_J
    int func_0200b250(FormationId*);                     // getMonsterCountK_L
    int func_0200b254(FormationId*);                     // getMonsterCountM_N
}




