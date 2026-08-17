#include "ov034/MaterielMenuExtraChapterTitle/MaterielMenuExtraChapterTitle.hpp"
#include "main/cmn/PartyTalk.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/global/Global.hpp"

extern int data_020c7678[];         /* object fade black */
extern "C" void func_ov016_0216b020(void);
extern "C" int  func_0200bef8(void*);          /* IsFadeEnd(FadeObj*) */

THUMB void MaterielMenuExtraChapterTitle::menuSetup()
{
    if (m_chapter_end == 1) {
        cmn::PartyTalk::getSingleton()->initialize();
        if (m_chapter == 2 || m_chapter == 4) {
            func_ov001_0212aaac();
            func_ov001_0212abc8();
        }
    }

    m_fade = 0;
    m_mode = 1;
    m_draw_count = 0;

    if (status::g_Story.chapter_ != 0 && m_chapter_end != 0) {
        func_020351c8(func_02035180());
        func_020351dc(func_02035180(), m_chapter + 9);
    }

    func_0200bd30(&g_Global, 0x3C);
}

THUMB void MaterielMenuExtraChapterTitle::menuDraw()
{
    if (m_mode != 0) {
        if (m_chapter == 0 && m_chapter_end == 1) {
            func_ov016_0216fe50(m_chapter, m_chapter_end);
        } else {
            func_020848a8();
            func_ov016_0216fe50(m_chapter, m_chapter_end);
            
        }

        switch (m_fade) {
        case 0:
            if (func_0200bef8(data_020c7678) != 0) {
                m_fade = 1;
            }
            break;
        case 1:
        if (m_chapter_end == 1 && m_chapter != 0) {
            func_02035180();
            if (func_020352d0() != 0) {
                break;
            }
        } else if (m_draw_count < 0x78) {
            m_draw_count++;
            break;
        }
        m_fade = 2;
        func_0200bcc4(&g_Global, 0x2D);
        break;
        case 2:
            if (func_0200bef8(data_020c7678) != 0) {
                m_fade = 0;
                m_mode = 0;
            }
            break;
        }
    } else {
        switch (m_fade) {
        case 0:
            func_0200bd30(&g_Global, 0x1E);
            func_ov016_0216aca4()->chapterEnd_ = 1;
            m_fade = 3;
            break;
        case 3:
            if (func_0200bef8(data_020c7678) != 0) {
                func_ov016_0216aca4();
                func_ov016_0216b020();
                
            }
            break;
        }
    }
}

THUMB void MaterielMenuExtraChapterTitle::menuUpdate()
{
    if (m_mode == 0 && m_fade == 0) {
        redraw_ = 1;
    }
}


THUMB void MaterielMenuExtraChapterTitle::setChapterTitleInfo(int chapter,int flag)
{
  this->m_chapter = chapter;
  this->m_chapter_end = flag;
}

ARM void MaterielMenuExtraChapterTitle::menuExecute()
{
  return;
}