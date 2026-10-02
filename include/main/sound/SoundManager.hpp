#pragma once
#include "nitro/os.hpp"
#include <globaldefs.h>

namespace param {
    struct FloorParam;
}

extern "C" void func_0205590c(int bgm);             // 
extern "C" void func_0205594c(int fade);            // 
extern "C" void func_02055a04(int se);              // Sound::sePlayDirect
extern "C" void func_020866d8(void * arg);
extern "C" int func_020559b0(int seId);           // Sound::sePlay
extern "C" void func_020559cc(int seId, int index);

extern "C" char data_0211fc7c[]; //g_SoundSystem 
extern "C" char data_0210bd4c[];
extern "C" int func_02055968();                     // current bgm still playing
extern "C" void func_02055a34(int volume);          // Sound::setBgmVolume
extern "C" int func_02055a4c();                     // Sound::getBgmVolume
extern "C" void func_0205caa0(void* sound);
extern "C" void func_0205c948(void* sound, int a, int se);

struct SoundManager {
    SoundManager();
    ~SoundManager();
    static void initialize();
    static void update();
    static void play(int bgm, int param);
    static void playStart(int bgm, int param);
    static void stop(int fade);
    static void playRestart(int bgm, int param);
    static void townPlay();
    static void setTownPlayDisable();
    static void setTownPlayEnable();
    static void fieldPlay();
    static void battlePlay();
    static void lastBossPlay();
    static void resetLastBossPlay();
    static void crusingPlay();
    static void battleStop();
    static void playBgm(int bgm, int param);
    static void stopBgm(int fade);
    static int playSe(int seId, int param);
    static void stopSeWithIndex(int seId, int index);
    static int getFloorBgmIndex();

    static int finalFormBGM_;               //data_020ed268 set when the final boss reaches its last form (bgm 0x21)
    static param::FloorParam * g_floor_param; //data_020ed26c
    static int bgmIndex_;       //data_020ed270
    static int nextBgmIndex_;   //data_020ed274
    static int prevBgmIndex_;   //data_020ed278
    static int nextBgmParam_;   //data_020ed27c
    static int townBgmEnable_;  //data_020be6f4
};
