#include "main/cmn/CommonWalkDamage.hpp"
#include "main/status/PartyStatus.hpp"



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



ARM bool cmn::CommonWalkDamage::checkWalkStride()
{
    bool result = false;
    int count;
    int total;
    int i;
    int j;
    int damage;
    CommonWalkDamageEntry* entry;
    int stride;
    int top;
    char prev;

    if (data_020ef6f4.topCount_ % data_020ef6f4.topStride_ == 0) {
        result = true;
    }

    damage = data_020ef6f4.topDamage_;
    data_020ef740[0] = damage;
    if (damage != 2) {
        data_020ef6f4.topCount_++;
    }

    status::g_Party.setBattleMode();
    count = status::g_Party.getCarriageOutCount();

    i = 1;
    if (count > 1) {
        entry = data_020ef71c;
        stride = data_020ef6f4.partyStride_;
        top = data_020ef6f4.topStride_;
        do {
            entry->count_++;
            prev = data_020ef740[stride * i - 1];
            entry->damage_ = prev;
            if ((prev != 2 && data_020ef740[stride * i] == 2) || entry->count_ >= top) {
                entry->unk4_ = 0;
                entry->count_ = 0;
            }
            entry++;
            i++;
        } while (i < count);
    }

    total = data_020ef6f4.partyStride_ * status::g_Party.getCarriageOutCount();
    for (j = 0; j < total; j++) {
        data_020ef740[total - j] = data_020ef740[total - j - 1];
    }

    data_020ef6f4.walkCount_++;
    return result;
}