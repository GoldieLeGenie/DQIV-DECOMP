#include "main/FormationId/FormationId.hpp"

const EncountFormNumHeader encountFormNumHeader = { 18, 1670, 16 }; //data_0208ca04

THUMB void FormationId::setup(int id)
{
    param::EncountFormationID* tbl = status::excelParam.encountFormationID_;

    formationId_ = id;

    thirdGroup_ = tbl[id].next2;
    forthGroup_ = tbl[id].next3;
    forthGroup_ = tbl[id].next3;

    typeRate_[0]  = tbl[id].typeA;      countMin_[0]  = 0;                countMax_[0]  = 0;
    typeRate_[1]  = tbl[id].typeB;      countMin_[1]  = 0;                countMax_[1]  = 0;
    typeRate_[2]  = tbl[id].typeC;      countMin_[2]  = 0;                countMax_[2]  = 0;
    typeRate_[3]  = tbl[id].typeD;      countMin_[3]  = 0;                countMax_[3]  = 0;
    typeRate_[4]  = tbl[id].typeE;      countMin_[4]  = 0;                countMax_[4]  = 0;

    typeRate_[5]  = tbl[id].typeF_rand; countMin_[5]  = tbl[id].typeF_min; countMax_[5] = tbl[id].typeF_max;
    typeRate_[6]  = tbl[id].typeG_rand; countMin_[6]  = tbl[id].typeG_min; countMax_[6] = tbl[id].typeG_max;
    typeRate_[7]  = tbl[id].typeH_rand; countMin_[7]  = tbl[id].typeH_min; countMax_[7] = tbl[id].typeH_max;
    typeRate_[8]  = tbl[id].typeI_rand; countMin_[8]  = tbl[id].typeI_min; countMax_[8] = tbl[id].typeI_max;
    typeRate_[9]  = tbl[id].typeJ_rand; countMin_[9]  = tbl[id].typeJ_min; countMax_[9] = tbl[id].typeJ_max;

    typeRate_[10] = tbl[id].typeK;      countMin_[10] = 0;                countMax_[10] = 0;
    typeRate_[11] = tbl[id].typeL;      countMin_[11] = 0;                countMax_[11] = 0;
    typeRate_[12] = tbl[id].typeM;      countMin_[12] = 0;                countMax_[12] = 0;
    typeRate_[13] = tbl[id].typeN;      countMin_[13] = 0;                countMax_[13] = 0;
}

THUMB EncountType FormationId::select()
{
    EncountType type;
    int total[14];
    int rnd;
    int i;
    int j;
    int v;

    rnd = dssrand::rand(getMaxValue(typeRate_, 14));

    type     = TYPE_NONE;
    total[0] = typeRate_[0];

    for (i = 1; i < 14; i++) {
        total[i] = typeRate_[i] + total[i - 1];
    }

    for (j = 0; j < 14; j++) {
        if (j == 0) {
            v = 0;
        } else {
            v = total[j - 1];
        }

        if (v != total[j] && isRange(rnd, v, total[j]) != 0) {
            type = (EncountType)j;
            break;
        }
    }

    return type;
}

THUMB int FormationId::isRange(int value, int min, int max)
{
    if (value >= min && value <= max) {
        return 1;
    }

    return 0;
}

THUMB short FormationId::getMaxValue(short* rates, int count)
{
    short sum;
    int   i;

    sum = 0;

    for (i = 0; i < count; i++) {
        sum += *rates;
        rates++;
    }

    return sum;
}

THUMB EncountType FormationId::selectA_E()
{
    EncountType type;
    int total[14];
    int rnd;
    int i;
    int j;
    int v;

    rnd = dssrand::rand(getMaxValue(typeRate_, 5));

    type     = TYPE_NONE;
    total[0] = typeRate_[0];

    for (i = 1; i < 14; i++) {
        total[i] = typeRate_[i] + total[i - 1];
    }

    for (j = 0; j < 5; j++) {
        if (j == 0) {
            v = 0;
        } else {
            v = total[j - 1];
        }

        if (v != total[j] && isRange(rnd, v, total[j]) != 0) {
            type = (EncountType)j;
            break;
        }
    }

    return type;
}


THUMB int FormationId::getMonsterCount(EncountType type)
{
    int count;

    count = 0;

    if (isRange(type, 0, 4)) {
        count = getMonsterCountA_E();
    }

    if (isRange(type, 5, 9)) {
        count = func_0200b228(this, type);
    }

    if (type == TYPE_K || type == TYPE_L) {
        count = func_0200b250(this);
    }

    if (type == TYPE_M || type == TYPE_N) {
        count = func_0200b254(this);
    }

    return count;
}




THUMB int FormationId::getMonsterCountA_E()
{
    unsigned int i;
    unsigned int num;
    int count;
    int j;
    param::EncountFormNum* tbl;

    count = 1;
    tbl   = status::excelParam.encountFormNum_;
    i     = 0;
    num   = encountFormNumHeader.count;

    for (; i < num; i++) {
        if (chapter_ == tbl[i].section && partyCount_ == tbl[i].party) {
            for (j = 0; j < 3; j++) {
                if (isRange(dssrand::rand(tbl[i].ratio), 0, tbl[i].groupraito - 1) == 0) {
                    break;
                }
                count++;
            }
        }
    }

    return count;
}

THUMB unsigned int FormationId::getEncountFormNumCount()
{
    return encountFormNumHeader.count;
}