#include "main/cmn/CommonWalkDamage.hpp"

extern "C" signed char data_020ef740[82];//damage_
extern "C" int  data_020ef710[];//partyDamage_

struct CommonWalkDamageData{ 
    int memberDamage_;
    int unk4; 
    int unk8; 
    int unkC; 
};
extern CommonWalkDamageData data_020ef6f4;

ARM void cmn::CommonWalkDamage::setup()
{
    
    signed char *p = data_020ef740;
    for (int i = 0; i < 0x52; i++){
        *p++ = 2;
    }
    
    int j = 0;
    int *q = data_020ef710;
    for (j = 0; j < 4; j++) {
        *q = 2;
        q += 3;
    }

    data_020ef6f4.memberDamage_  = 0;
    data_020ef6f4.unkC = 1;
    data_020ef6f4.unk8 = 1;
    data_020ef6f4.unk4 = 1;

    seCounter_ = -1;
}

ARM void cmn::CommonWalkDamage::clear()
{
    signed char *p = data_020ef740;
    for (int i = 0; i < 0x52; i++)
        *p++ = 2;

    int j = 0;
    int *q = data_020ef710;
    for (; j < 4; j++) {
        *q = 2;
        q += 3;
    }

    data_020ef6f4.memberDamage_ = 0;
    seCounter_ = -1;
}