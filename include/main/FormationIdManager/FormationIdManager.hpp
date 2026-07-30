#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/FormationId/FormationId.hpp"
#include "main/dss/Random.hpp"

struct EncountGroup {
    EncountType type;
    int count;
};

struct FormationIdManager {
    int id_;
    int chapter_;
    int partyCount_;
    TIME_ZONE timeZone_;
    FormationId formationId_;
    EncountGroup group_[4];
    int none_group_[14];
    FormationIdManager();
    ~FormationIdManager();
    void clear();
    void select();
    void selectA_E();
    void selectF_J(EncountType type);
    void selectK();
    void selectL();
    void selectM_N();
    void setFormationId(int id);
    void setChapter(int chp);
    void setPartyCount(int cnt);
    void setTimeZone(TIME_ZONE time);
    void setMonsterNone(EncountType type);
};


extern "C"
{
    /* FormationId */
    void        func_0200b33c(FormationId*, int chapter);        // setChapter
    void        func_0200b340(FormationId*, int partyCount);     // setPartyCount
    void        func_0200af28(FormationId*, int id);             // setup
    void        func_0200b2f4(FormationId*, TIME_ZONE timeZone); // setTimeZone
    void        func_0200b330(FormationId*, int index);          // setClear
    EncountType func_0200b044(FormationId*);                     // select

    int         func_0200b158(FormationId*, EncountType type);   // getMonsterCount
    int         func_0200b258(FormationId*, int count);          // setMonsterCountLimit
    EncountType func_0200b0e8(FormationId*);                     // selectA_E
    int         func_0200b2a4(FormationId*);                     // isThirdGroup
    int         func_0200b2cc(FormationId*);                     // isForthGroup


    /* FormationIdManager */
    void func_0200b444(FormationIdManager*);   // selectA_E
    void func_0200b4e0(FormationIdManager*, EncountType type);   // selectF_J
    void func_0200b4f0(FormationIdManager*, EncountType type);   // selectK
    void func_0200b518(FormationIdManager*, EncountType type);   // selectL
    void func_0200b520(FormationIdManager*, EncountType type);   // selectM_N
}
