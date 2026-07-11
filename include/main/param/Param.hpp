#pragma once
#include "main/dss/DssUtils.hpp"
#include <globaldefs.h>

namespace param{
    struct PartyTalk
    {
        unsigned int messageID;
        unsigned int value1;
        unsigned int value2;
        unsigned int value3;
        unsigned int pick1;
        unsigned short start;
        unsigned short end;
        unsigned short floor;
        unsigned short document1;
        unsigned char object1;
        unsigned char object2;
        unsigned char condition1;
        unsigned char condition2;
        unsigned char condition3;
        unsigned char horse;
        char byte_1;
        char byte_2;
        char byte_3;
        char byte_4;
        char byte_5;
        char byte_6;
        char byte_7;
        unsigned char dmmy0;
        unsigned char dmmy1;
        unsigned char dmmy2;
    };
    struct AppriseItem {
        unsigned int message1;
        unsigned int message2;
        unsigned int message3;
        unsigned int message4;
        unsigned int message5;
        unsigned int message6;
        unsigned int message7;
    };

    struct AlterMessage {
        unsigned int message;
        unsigned short obj;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };

    struct CharaVoice {
        unsigned short index;
        unsigned short voice;
    };

    struct ActionParam {
        unsigned int actionMes;
        unsigned int playerSuccessMes;
        unsigned int playerSuccessMesDie;
        unsigned int monsterSuccessMes;
        unsigned int monsterSuccessMesDie;
        unsigned int playerFailedMes;
        unsigned int monsterFailedMes;
        unsigned int endMes;
        unsigned int menuMes;
        unsigned short action;
        unsigned short effectFriend;
        unsigned short effectEnemy;
        unsigned short effectLap;
        unsigned short MonsterMin;
        unsigned short MonsterMax;
        unsigned short PlayerMin;
        unsigned short PlayerMax;
        unsigned short menuIndex;
        unsigned char type;
        unsigned char magictype;
        unsigned char canceltype;
        unsigned char kouka;
        unsigned char useMP;
        unsigned char fool;
        unsigned char human;
        unsigned char god;
        char byte_1;
        char byte_2;
        char byte_3;
        char byte_4;
        char byte_5;
        char byte_6;
        char byte_7;
        unsigned char dmmy0;
        unsigned char dmmy1;
        unsigned char dmmy2;
    };

    struct AbreactTurn {
        unsigned int msg1;
        unsigned int msg2;
        unsigned int msg3;
        unsigned int msg4;
        unsigned int msg5;
        unsigned int msg6;
        unsigned int msg7;
        unsigned short action;
        unsigned char turn;
        unsigned char pattern;
        char byte_1;
        char byte_2;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };

    struct MonsterData {
        unsigned short name;
        unsigned short level;
        unsigned short exp;
        unsigned short MP;
        unsigned short HP;
        unsigned short attack;
        unsigned short defence;
        unsigned short money;
        unsigned short item;
        unsigned short action1;
        unsigned short action2;
        unsigned short action3;
        unsigned short action4;
        unsigned short action5;
        unsigned short action6;
        unsigned char agility;
        unsigned char itemRatio;
        unsigned char integer;
        unsigned char focus;
        unsigned char times;
        unsigned char heal;
        unsigned char avoid;
        unsigned char init;
        unsigned char initRatio;
        unsigned char pattern;
        unsigned char animation1;
        unsigned char animation2;
        unsigned char animation3;
        unsigned char animation4;
        unsigned char animation5;
        unsigned char animation6;
        unsigned char animationMuliti;
        char byte_1;
        char byte_2;
        char byte_3;
        char byte_4;
        char byte_5;
        char byte_6;
        char byte_7;
        char byte_8;
        char byte_9;
        char byte_10;
        unsigned char dmmy0;
        unsigned char dmmy1;
        unsigned char dmmy2;
    };

    struct BookData {
        unsigned short name;
        unsigned char ID;
        unsigned char type;
        char byte_1;
        unsigned char dmmy0;
        unsigned char dmmy1;
        unsigned char dmmy2;
    };

    struct MonsterAnim {
        dss::fx32 scale;
        unsigned short monster;
        unsigned short action;
        unsigned short sound;
        unsigned short hitframe;
        unsigned short startframe;
        unsigned short wait;
        unsigned char anim;
        unsigned char effect;
        unsigned char animfile;
        unsigned char camera;
        unsigned char camera2;
        char byte_1;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };

    struct SplitMsg {
        unsigned int branch;
        unsigned int aliveOne;
        unsigned int aliveTwo;
        unsigned int monsterOne;
        unsigned int monsterTwo;
        unsigned int monsterMore;
        unsigned int activate;
        unsigned int deactivate;
        unsigned int alive;
        unsigned int dead;
        unsigned int astoron;
        unsigned int mosyasu;
        unsigned int splitAvoid;
        unsigned int split;
        unsigned int avoid;
        unsigned int equip;
        unsigned int notEquit;
        unsigned int male;
        unsigned int female;
        unsigned int wastePlace;
        unsigned int rura;
        unsigned int riremito;
        unsigned int wasteTime;
        unsigned int cofferItem;
        unsigned int cofferMonster;
        unsigned int cofferGold;
        unsigned int cofferNothing;
        unsigned int tuboItem;
        unsigned int tuboMonster;
        unsigned int tuboGold;
        unsigned int tuboNothing;
        unsigned int noTarget;
        unsigned int northEast;
        unsigned int southEast;
        unsigned int northWest;
        unsigned int southWest;
        unsigned int nothing;
        unsigned int special;
    };

    struct EncountData {
        unsigned short sound;
        unsigned short monsterA;
        unsigned short monsterB;
        unsigned short monsterC;
        unsigned short monsterD;
        unsigned short monsterE;
        unsigned short monsterF;
        unsigned short monsterG;
        unsigned short monsterH;
        unsigned short monsterI;
        unsigned short monsterJ;
        unsigned short monsterK;
        unsigned short monsterL;
        unsigned short specialM;
        unsigned short specialN;
        unsigned char tileLevel;
        unsigned char ratio;
        unsigned char formation;
        unsigned char firstattack;
        unsigned char invite;
        unsigned char escape;
        unsigned char event;
        unsigned char dmmy0;
        unsigned char dmmy1;
        unsigned char dmmy2;
    };

    struct EncountFormationID {
        unsigned char next2;
        unsigned char next3;
        unsigned char typeA;
        unsigned char typeB;
        unsigned char typeC;
        unsigned char typeD;
        unsigned char typeE;
        unsigned char typeF_rand;
        unsigned char typeF_min;
        unsigned char typeF_max;
        unsigned char typeG_rand;
        unsigned char typeG_min;
        unsigned char typeG_max;
        unsigned char typeH_rand;
        unsigned char typeH_min;
        unsigned char typeH_max;
        unsigned char typeI_rand;
        unsigned char typeI_min;
        unsigned char typeI_max;
        unsigned char typeJ_rand;
        unsigned char typeJ_min;
        unsigned char typeJ_max;
        unsigned char typeK;
        unsigned char typeL;
        unsigned char typeM;
        unsigned char typeN;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct EncountFormNum {
        unsigned short groupraito;
        unsigned short ratio;
        unsigned char section;
        unsigned char party;
        unsigned char groupmax;
        unsigned char dmmy0;
    };

    struct EncountSpecial {
        unsigned short name;
        unsigned short monsterID1;
        unsigned short group1_min;
        unsigned short group1_max;
        unsigned short monsterID2;
        unsigned short group2_min;
        unsigned short group2_max;
        unsigned short monsterID3;
        unsigned short group3_min;
        unsigned short group3_max;
        unsigned short monsterID4;
        unsigned short group4_min;
        unsigned short group4_max;
        unsigned char daytile1;
        unsigned char daytile2;
        unsigned char daytile3;
        unsigned char daytile4;
        unsigned char nighttile;
        unsigned char dmmy0;
    };

    struct MonsterMap {
        unsigned short tileID;
        unsigned char section;
        char floorID[8];
        unsigned char dmmy0;
    };

    struct EffectParam {
        dss::fx32 scale;
        unsigned short index;
        unsigned short frame;
        unsigned short homing;
        unsigned short sound;
        unsigned char interval;
        unsigned char camera;
        unsigned char color;
        unsigned char hold;
        unsigned char camera2;
        unsigned char wait;
        char byte_1;
        char byte_2;
    };

    struct EffectColorParam {
        dss::fx32 rPoint;
        dss::fx32 gPoint;
        dss::fx32 bPoint;
        unsigned short frame;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };

    struct ColorCorrect {
        unsigned char backcolor;
        char floor[8];
        char byte_1;
        char byte_2;
        unsigned char dmmy0;
    };


    struct FloorFog {
        dss::fx32 side00_rate;
        dss::fx32 side01_rate;
        unsigned char side00_R;
        unsigned char side00_G;
        unsigned char side00_B;
        unsigned char side00_offset;
        unsigned char side01_R;
        unsigned char side01_G;
        unsigned char side01_B;
        unsigned char side01_offset;
        char byte_1;
        unsigned char dmmy0;
        unsigned char dmmy1;
        unsigned char dmmy2;
    };

    struct CLUTCode {
        dss::fx32 rPoint;
        dss::fx32 gPoint;
        dss::fx32 bPoint;
        unsigned char code;
        unsigned char dmmy0;
        unsigned char dmmy1;
        unsigned char dmmy2;
    };

    struct FloorBackColor {
        unsigned char backcolor;
        unsigned char topUpLeftR;
        unsigned char topUpLeftG;
        unsigned char topUpLeftB;
        unsigned char topUpRightR;
        unsigned char topUpRightG;
        unsigned char topUpRightB;
        unsigned char topDownLeftR;
        unsigned char topDownLeftG;
        unsigned char topDownLeftB;
        unsigned char topDownRightR;
        unsigned char topDownRightG;
        unsigned char topDownRightB;
        unsigned char bottomUpLeftR;
        unsigned char bottomUpLeftG;
        unsigned char bottomUpLeftB;
        unsigned char bottomUpRightR;
        unsigned char bottomUpRightG;
        unsigned char bottomUpRightB;
        unsigned char bottomDownLeftR;
        unsigned char bottomDownLeftG;
        unsigned char bottomDownLeftB;
        unsigned char bottomDownRightR;
        unsigned char bottomDownRightG;
        unsigned char bottomDownRightB;
        unsigned char dmmy0;
        unsigned char dmmy1;
        unsigned char dmmy2;
    };


    struct SurechigaiObjectData {
        unsigned char index;
        unsigned char level;
        char byte_1;
        unsigned char dmmy0;
    };

    struct FloorParam {
        unsigned char bgmDaytime;
        unsigned char bgmNight;
        char floor[8];
        char battlefloor[11];
        char eventfloor[12];
        char byte_1;
        char byte_2;
        char byte_3;
        char byte_4;
        char byte_5;
        char byte_6;
        unsigned char dmmy0;
        unsigned char dmmy1;
        unsigned char dmmy2;
    };

    struct ShopDataFirst {
        unsigned short item;
        unsigned short price;
    };

    struct ShopDataSecond {
        unsigned short item;
        unsigned short price;
    };

    struct CommonParam {
        unsigned int checkMsg;
        unsigned int normalMsg;
        unsigned int NothingMsg;
        unsigned int MonsterMsg;
        unsigned int BackMsg;
        unsigned short sound;
        unsigned char type;
        char byte_1;
    };

    struct FieldSymbol {
        unsigned int message;
        unsigned char uid;
        unsigned char world;
        unsigned char type;
        unsigned char dispX;
        unsigned char dispY;
        unsigned char color;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };

    struct EncountSeaTile {
        unsigned char* tile_;
    };

    struct EncountTile1 {
        unsigned char* tile_;
    };

    struct EncountTile2 {
        unsigned char* tile_;
    };

    struct EncountTile3 {
        unsigned char* tile_;
    };

    struct EncountGotTile {
        unsigned char* tile_;
    };

    struct EncountYamiTile {
        unsigned char* tile_;
    };

    struct BattleMap {
        unsigned char R;
        unsigned char G;
        unsigned char B;
        char map[13];
    };

    struct MapCamera {
        dss::fx32 distance;
        dss::fx32 angleX;
        dss::fx32 angleY;
        dss::fx32 angleZ;
        dss::fx32 targetX;
        dss::fx32 targetY;
        dss::fx32 targetZ;
        char floor[8];
        char file[16];
    };

    struct VehicleData {
        unsigned int shipX;
        unsigned int shipY;
        unsigned int balloonX;
        unsigned int balloonY;
        unsigned char world;
        unsigned char id;
        char mapname[4];
        unsigned char dmmy0;
        unsigned char dmmy1;
    };

    struct MirrorMessage {
        unsigned int message;
        unsigned char leader;
        unsigned char dmmy0;
        unsigned char dmmy1;
        unsigned char dmmy2;
    };

    struct MapChurch {
        dss::fx32 playerX;
        dss::fx32 playerY;
        dss::fx32 playerZ;
        unsigned short direction;
        char floor[8];
        char byte_1;
        unsigned char dmmy0;
    };
    struct SurechigaiTenant {
        unsigned char index;
        unsigned char icon;
        unsigned char name;
        unsigned char tokugi;
        unsigned char from;
        char byte_1;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct CharInitData {
        unsigned short monsterID;
        unsigned short strength;
        unsigned short agility;
        unsigned short vitality;
        unsigned short intelligence;
        unsigned short luck;
        unsigned short HP;
        unsigned short MP;
        unsigned short attack;
        unsigned short defence;
        unsigned short gold;
        unsigned short weapon;
        unsigned short armor;
        unsigned short shield;
        unsigned short hat;
        unsigned short battle1;
        unsigned short battle2;
        unsigned short battle3;
        unsigned short battle4;
        unsigned short battle5;
        unsigned short battle6;
        unsigned short battle7;
        unsigned short battle8;
        unsigned short battle9;
        unsigned short battle10;
        unsigned short battle11;
        unsigned short battle12;
        unsigned short battle13;
        unsigned short magic1;
        unsigned short magic2;
        unsigned short magic3;
        unsigned short magic4;
        unsigned short magic5;
        unsigned short magic6;
        unsigned short magic7;
        unsigned short magic8;
        unsigned short magic9;
        unsigned short magic10;
        unsigned short magic11;
        unsigned short magic12;
        unsigned short magic13;
        unsigned char character;
        unsigned char icon;
        unsigned char job;
        unsigned char level;
        char byte_1;
        unsigned char dmmy0;

    };
    struct HeroData {
        unsigned int exp;
        unsigned short strength;
        unsigned short agility;
        unsigned short intelligence;
        unsigned short luck;
        unsigned short HP;
        unsigned short MP;
        unsigned short battleAction;
        unsigned short action;
        unsigned char level;
        unsigned char learn;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct WarriorData {
        unsigned int exp;
        unsigned short strength;
        unsigned short agility;
        unsigned short intelligence;
        unsigned short luck;
        unsigned short HP;
        unsigned short MP;
        unsigned short battleAction;
        unsigned short action;
        unsigned char level;
        unsigned char learn;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct PrincessData {
        unsigned int exp;
        unsigned short strength;
        unsigned short agility;
        unsigned short intelligence;
        unsigned short luck;
        unsigned short HP;
        unsigned short MP;
        unsigned short battleAction;
        unsigned short action;
        unsigned char level;
        unsigned char learn;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct PriestData {
        unsigned int exp;
        unsigned short strength;
        unsigned short agility;
        unsigned short intelligence;
        unsigned short luck;
        unsigned short HP;
        unsigned short MP;
        unsigned short battleAction;
        unsigned short action;
        unsigned char level;
        unsigned char learn;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct MageData {
        unsigned int exp;
        unsigned short strength;
        unsigned short agility;
        unsigned short intelligence;
        unsigned short luck;
        unsigned short HP;
        unsigned short MP;
        unsigned short battleAction;
        unsigned short action;
        unsigned char level;
        unsigned char learn;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct TraderData {
        unsigned int exp;
        unsigned short strength;
        unsigned short agility;
        unsigned short intelligence;
        unsigned short luck;
        unsigned short HP;
        unsigned short MP;
        unsigned short battleAction;
        unsigned short action;
        unsigned char level;
        unsigned char learn;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct WarlockData {
        unsigned int exp;
        unsigned short strength;
        unsigned short agility;
        unsigned short intelligence;
        unsigned short luck;
        unsigned short HP;
        unsigned short MP;
        unsigned short battleAction;
        unsigned short action;
        unsigned char level;
        unsigned char learn;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct DancerData {
        unsigned int exp;
        unsigned short strength;
        unsigned short agility;
        unsigned short intelligence;
        unsigned short luck;
        unsigned short HP;
        unsigned short MP;
        unsigned short battleAction;
        unsigned short action;
        unsigned char level;
        unsigned char learn;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct PissaroData {
        unsigned int exp;
        unsigned short strength;
        unsigned short agility;
        unsigned short intelligence;
        unsigned short luck;
        unsigned short HP;
        unsigned short MP;
        unsigned short battleAction;
        unsigned short action;
        unsigned char level;
        unsigned char learn;
        unsigned char dmmy0;
        unsigned char dmmy1;
    };
    struct ItemData {
        unsigned int casino;
        unsigned int menuMes;
        unsigned short BuyPrice;
        unsigned short SellPrice;
        unsigned short samall;
        unsigned short effect;
        unsigned short action;
        unsigned short battleAction;
        unsigned short typeSort;
        unsigned short nameSort;
        unsigned char display;
        unsigned char type;
        unsigned char change;
        unsigned char raiseUP;
        char byte_1;
        char byte_2;
        char byte_3;
        unsigned char dmmy0;
    };
}

extern const unsigned char charInitDataTable[0x521];  
extern const unsigned char charInitDataTable2[0x42b];
extern const unsigned char heroDataTable[0x964];
extern const unsigned char warriorDataTable[0x250];
extern const unsigned char unk_data_02090000[0xf];
extern const unsigned char unk_data_0209000f[0x186];
extern const unsigned char unk_data_02090195[0x57f];
extern const unsigned char princessDataTable[0x964];
extern const unsigned char priestDataTable[];


extern param::MageData data_020919dc;
extern param::TraderData data_02092340;
extern param::WarlockData data_02092ca4;
extern param::DancerData data_02093608;
extern param::PissaroData data_02093f6c;
extern param::ItemData data_020978dc;
extern param::CharaVoice data_0208d9b0;
extern param::ActionParam data_020aa604;
extern param::AbreactTurn data_0208e3ac;
extern param::MonsterData data_020a02e8;
extern param::BookData data_0208dd18;
extern param::SplitMsg data_02098d20;

extern param::EncountData data_0209dae4;
extern param::EncountFormationID data_0208cdc8;
extern param::EncountFormNum data_0208cab8;
extern param::EncountSpecial data_02095c64;
extern param::MonsterMap data_020948d0;
extern param::ColorCorrect data_0209a44c;
extern param::FloorFog data_0208ca8c;
extern param::CLUTCode data_0208ccd4;
extern param::FloorBackColor data_0208d2d8;
extern param::FloorParam data_020a4cc0;
extern param::ShopDataFirst data_02096968;
extern param::ShopDataSecond data_0209bda0;
extern param::VehicleData data_0208d6f4;
extern param::MapChurch data_0208d480;
extern param::EffectColorParam data_02095240;
extern param::SurechigaiTenant data_0208cb4c;
extern param::SurechigaiObjectData data_0208cc08;


