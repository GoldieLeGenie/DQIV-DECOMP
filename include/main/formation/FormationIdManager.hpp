#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/formation/FormationId.hpp"
#include "main/dss/Random.hpp"

namespace formation {

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

}  // namespace formation


extern "C"
{
    /* FormationId */
    void        func_0200b33c(formation::FormationId*, int chapter);        // setChapter
    void        func_0200b340(formation::FormationId*, int partyCount);     // setPartyCount
    void        func_0200af28(formation::FormationId*, int id);             // setup
    void        func_0200b2f4(formation::FormationId*, TIME_ZONE timeZone); // setTimeZone
    void        func_0200b330(formation::FormationId*, int index);          // setClear
    EncountType func_0200b044(formation::FormationId*);                     // select

    int         func_0200b158(formation::FormationId*, EncountType type);   // getMonsterCount
    int         func_0200b258(formation::FormationId*, int count);          // setMonsterCountLimit
    EncountType func_0200b0e8(formation::FormationId*);                     // selectA_E
    int         func_0200b2a4(formation::FormationId*);                     // isThirdGroup
    int         func_0200b2cc(formation::FormationId*);                     // isForthGroup


    /* FormationIdManager */
    void func_0200b444(formation::FormationIdManager*);   // selectA_E
    void func_0200b4e0(formation::FormationIdManager*, EncountType type);   // selectF_J
    void func_0200b4f0(formation::FormationIdManager*, EncountType type);   // selectK
    void func_0200b518(formation::FormationIdManager*, EncountType type);   // selectL
    void func_0200b520(formation::FormationIdManager*, EncountType type);   // selectM_N
}
