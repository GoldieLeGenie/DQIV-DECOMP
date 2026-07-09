#pragma once

class profile {
public:
    enum SAVETYPE {
        SAVETYPE_NONE = 0,
        SAVETYPE_CHURCH = 1,
        SAVETYPE_INTERVAL = 2,
        SAVETYPE_RESUME = 3,
        SAVETYPE_NEW = 4,
        SAVETYPE_INVALID = 255
    };
    struct PROFILE_PLAYER {
        unsigned int EXP;
        unsigned short HP;
        unsigned short MP;
        unsigned short HPMAX;
        unsigned short MPMAX;
        unsigned short ITEMEQUIP;
        unsigned char EQUIP_WEAPON;
        unsigned char EQUIP_ARMOR;
        unsigned char EQUIP_SHIELD;
        unsigned char EQUIP_HELMET;
        unsigned char EQUIP_ACCESSORY;
        unsigned char EQUIP_MEDICINE;
        unsigned char POISON;
        unsigned char LEVEL;
        unsigned char STRENGTH;
        unsigned char AGILITY;
        unsigned char WISDAM;
        unsigned char LUCK;
        unsigned char PROTECTION;
        unsigned char TACTICS;
        unsigned char HAVEITEM[12];
        unsigned char HAVEACTION_BATTLE[24];
        unsigned char HAVEACTION_USUALLY[24];
        unsigned char HAVEACTION_LEVEL[24];
        unsigned char HAVEACTION_FLAG[24];
        unsigned int __reserve[16];
    };
    struct PROFILE_PARTY {
        unsigned char RESTART[16];
        unsigned char CHURCH[16];
        unsigned char CHAPTER;
        unsigned char BASHA;
        unsigned short PARTY_D;
        unsigned int PARTY_X;
        unsigned int PARTY_Y;
        unsigned int PARTY_Z;
        unsigned int SHIP_X;
        unsigned int SHIP_Y;
        unsigned int SHIP_Z;
        unsigned int BALLOON_X;
        unsigned int BALLOON_Y;
        unsigned int BALLOON_Z;
        unsigned int RAFT_X;
        unsigned int RAFT_Y;
        unsigned int RAFT_Z;
        unsigned int OVERVIEW_X;
        unsigned int OVERVIEW_Y;
        unsigned int OVERVIEW_Z;
        unsigned int PLAYERFLAG[25];
        unsigned int OUTSIDE[4];
        unsigned int BACKSIDE[2];
        unsigned char GLOBALFLAG[64];
        unsigned char AREAFLAG[64];
        unsigned char LOCALFLAG[64];
        unsigned short MAPVEIL[16];
        unsigned char FURNFLAG[128];
        unsigned char PARTY[14];
        unsigned int PLAYTIME;
        unsigned int BANKMONEY;
        unsigned short WORLDTIME;
        unsigned char TIMEZONE;
        unsigned char TIMESTOP;
        unsigned char MEDALCOIN;
        unsigned char STATINFO[8];
        unsigned char STATTIME[8];
        unsigned char DAY_COUNTER[16];
        unsigned char FREE_COUNTER[4];
        unsigned short NENECOUNT[162];
        unsigned char NENEITEM[162];
        unsigned char BONMOL[2];
        unsigned char NAME[32];
        unsigned char SEX;
        unsigned char LANGUAGE;
        unsigned char BGM_VOLUME;
        unsigned char SE_VOLUME;
        unsigned char BATTLE_SPEED;
        unsigned char SHIP;
        unsigned char BALLOON;
        unsigned char ENCOUNT;
        unsigned char SYMBOLID;
        unsigned char FIELDTYPE;
        unsigned char TAROT;
        unsigned char USE_BANK;
        unsigned char COMP_PICTUREBOOK;
        unsigned char RIDEON;
        unsigned char BALLOON_FIELD;
        unsigned char RANALUTA_MAP[10];
        short RANALUTA_SURFACE;
        unsigned char DARTS_ITEM[6];
        int SPEAKTO_MESSAGE[10];
        int SPEAKTO_OBJECT;
        int SPEAKTO_EXITNO;
        int SPEAKTO_ITEMNO;
        unsigned int CHAPTERBATTLE_COUNT;
        unsigned int CHAPTERWIPEOUT_COUNT;
        unsigned int CHAPTERESCAPE_COUNT;
        short HENGE_CHARANO;
        short HENGE_COUNTER;
        char HENGE_CHANGE;
        char HENGE_ENDLESS;
        unsigned char HENGE_INDEX;
        unsigned int PLAYERMEDAL;
        unsigned char IKADAMAP[16];
        unsigned int BALONFLAG;
        unsigned int UNIQUEID;
        unsigned char NEW_SYMBOLFLAG[16];
        unsigned char BREAKFLAG[8];
        unsigned char SELECTTAISHI_FLAG[64];
        unsigned char CampaignFlag[1024];
    };
    struct PROFILE_HISTORY {
        unsigned int ADVENTURE_TIME;
        unsigned int BATTLE_COUNT;
        unsigned int MONSTER_COUNT;
        unsigned int TOTALGOLD;
        unsigned int VICTORY_GOLD;
        unsigned int WIPEOUT_COUNT;
        unsigned int ESCAPE_COUNT;
        unsigned short MAX_DAMAGE;
        unsigned short HERO_TITLE;
        unsigned char HERO_LEVEL;
        unsigned char __padding;
    };
};