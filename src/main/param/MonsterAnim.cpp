#include "main/param/MonsterAnim.hpp"



THUMB unsigned short param::MonsterAnim::getDataIndex(int index)
{
    return data_020bc2f4[index];
}

THUMB int param::MonsterAnim::getAnimData(unsigned int monsterId, unsigned short actionId, unsigned short animId)
{
    unsigned int index = getDataIndex(monsterId);
    param::MonsterAnim* p = &this[index];
    while (index < 0x463)
    {
        if (animId == p->anim && actionId == p->action)
        {
            break;
        }
        p++;
        if (monsterId != p->monster && p->monster != 1000)

        {
            index = -1;
            break;
        }
        index++;
    }
    if (index == 0x463)
    {
        index = -1;
    }
    return index;
}