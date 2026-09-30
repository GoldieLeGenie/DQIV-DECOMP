#pragma once
#include "globaldefs.h"
#include "main/status/PartyStatus.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/global/Global.hpp"
#include "main/menu/MenuBase.hpp"
#include "main/menu/MaterielMenuWindowManager.hpp"
#include "main/sound/MenuSoundManager.hpp"


struct MaterielMenuExtraChapterTitle : menu::MenuBase
{                                       
    int m_fade;
    int m_mode;
    int m_draw_count;
    int m_chapter;
    int m_chapter_end;
    virtual void menuSetup();
    virtual void menuDraw();
    virtual void menuUpdate();
    void setChapterTitleInfo(int chapter,int flag);
    virtual void menuExecute();
};


extern "C" {
    void func_ov016_0216fe50(int chapter, int chapterEnd);  
    void func_020848a8(void);                               
    void* func_ov001_0212aaac(void);
    void func_ov001_0212abc8(void);      
}

extern MaterielMenuExtraChapterTitle data_ov016_02185a90;   /* gMaterielMenu_EXTRA_CHAPTER_TITLE */
