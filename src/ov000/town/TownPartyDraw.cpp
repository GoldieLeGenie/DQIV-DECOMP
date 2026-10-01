#include "ov000/town/TownPartyDraw.hpp"
#include "ov000/town/TownCamera.hpp"
#include "ov000/town/TownStageManager.hpp"
#include "ov000/town/TownSystem.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/script/ScriptSystem.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "nitro/os.hpp"

static dss::Fix32Vector3 defaultPosition(0, 0, 0);
const unsigned short TownPartyDraw::colorDoku = 0x48f2;
const unsigned short TownPartyDraw::colorBarrier = 0x1e52;

ARM TownPartyDraw::TownPartyDraw()
{
    for (int i = 0; i < 8; i++) {
        partyDispAlpha_[i] = 31;
        partyCharacter_[i].setBoxTestOff(true);
    }
}

ARM TownPartyDraw::~TownPartyDraw()
{
}

ARM void TownPartyDraw::setup()
{
    char path[128];
    int chara;
    status::g_Party.setDisplayMode();
    countReal_ = count_ = status::g_Party.getCount();
    int skip = 0;
    if (g_Stage.isBashaEnter() && status::g_Party.basha_ != 0) {
        count_ += 2;
        countReal_ = count_;
        for (int i = 0; i < count_; i++) {
            switch (i) {
            case 0: {
                status::PlayerStatus* player = status::g_Party.getPlayerStatus(i);
                chara = player->haveStatusInfo_.haveStatus_.charaIndex_;
                if (g_HengeNoTsue.change_ == 1 && chara != 0x87) {
                    chara = g_HengeNoTsue.charNo_;
                }
                if (player->haveStatusInfo_.isDeath()) {
                    chara = 0x53;
                }
                break;
            }
            case 1:
                chara = 0x88;
                break;
            case 2:
                status::g_Party.getPlayerStatus(i);
                chara = 0x89;
                break;
            default: {
                status::PlayerStatus* player = status::g_Party.getPlayerStatus(i - 2);
                chara = player->haveStatusInfo_.haveStatus_.charaIndex_;
                if (g_HengeNoTsue.change_ == 1 && chara != 0x87) {
                    chara = g_HengeNoTsue.charNo_;
                }
                if (player->haveStatusInfo_.isDeath()) {
                    chara = 0x53;
                }
                break;
            }
            }
            if (chara == 0x87) {
                if (!TownStageManager::getSingleton()->isRozariStage()) {
                    skip = 1;
                    continue;
                }
                if (g_HengeNoTsue.change_ == 1) {
                    chara = g_HengeNoTsue.charNo_;
                }
            }
            func_02088308(path, sizeof(path), "data/chr/h%03d.pack", chara);
            partyCharacter_[i].setRender(&TownSystem::getSingleton()->render_);
            func_02049984(&TownCamera::getSingleton()->camera_.unk_004);
            partyCharacter_[i].setup(path, 0);
            partyCharacter_[i].setPosition(defaultPosition);
            func_0204948c(&partyCharacter_[i], 0);
            partyCharacter_[i].enable_ = 0;
            func_0204977c(&partyCharacter_[i], 0);
            partyCharacter_[i].exec();
        }
        count_ = func_02008ea0(count_, 0, 7);
        for (int i = 0; i < count_; i++) {
            partyCharacter_[i].enable_ = 1;
        }
    } else {
        for (int i = 0; i < count_; i++) {
            status::PlayerStatus* player = status::g_Party.getPlayerStatus(i);
            chara = player->haveStatusInfo_.haveStatus_.charaIndex_;
            if (g_HengeNoTsue.change_ == 1 && chara != 0x87) {
                chara = g_HengeNoTsue.charNo_;
            }
            if (player->haveStatusInfo_.isDeath()) {
                chara = 0x53;
            }
            if (chara == 0x87) {
                if (!TownStageManager::getSingleton()->isRozariStage()) {
                    skip = 1;
                    continue;
                }
                if (g_HengeNoTsue.change_ == 1) {
                    chara = g_HengeNoTsue.charNo_;
                }
            }
            func_02088308(path, sizeof(path), "data/chr/h%03d.pack", chara);
            partyCharacter_[i].setRender(&TownSystem::getSingleton()->render_);
            func_02049984(&TownCamera::getSingleton()->camera_.unk_004);
            partyCharacter_[i].setup(path, 0);
            partyCharacter_[i].setPosition(defaultPosition);
            func_0204948c(&partyCharacter_[i], 0);
            func_0204977c(&partyCharacter_[i], 0);
            partyCharacter_[i].exec();
        }
    }
    if (skip == 1) {
        count_--;
        countReal_--;
    }
}

ARM void TownPartyDraw::cleanup()
{
    for (int i = 0; i < countReal_; i++) {
        partyCharacter_[i].cleanup();
    }
    if (dataObject_.getAddr()) {
        dataObject_.cleanup();
    }
}

ARM void TownPartyDraw::setPosition(int index, const dss::Fix32Vector3& pos)
{
    dss::Fix32Vector3 position = pos;
    position.vy.value += 0xc0;
    partyCharacter_[index].setPosition(position);
}

ARM void TownPartyDraw::setRotate(int index, int dirIdx)
{
    func_0204948c(&partyCharacter_[index], dirIdx);
}

ARM void TownPartyDraw::resetAlpha()
{
    for (int i = 0; i < count_; i++) {
        setAlpha(i, 31);
    }
}

ARM void TownPartyDraw::resetDrawPartyCount()
{
    for (int i = 0; i < count_; i++) {
        func_020497a4(&partyCharacter_[i], 1);
    }
}

ARM void TownPartyDraw::setDrawPartyOne()
{
    for (int i = 1; i < count_; i++) {
        func_020497a4(&partyCharacter_[i], 0);
        setAlpha(i, 0);
    }
}

ARM void TownPartyDraw::setDrawPartyNone()
{
    for (int i = 0; i < count_; i++) {
        func_020497a4(&partyCharacter_[i], 0);
        setAlpha(i, 0);
    }
}

ARM void TownPartyDraw::setAnimationOne(int anim)
{
    func_02049814(&partyCharacter_[0], anim);
}

ARM void TownPartyDraw::setAnimation(int anim)
{
    for (int i = 0; i < 8; i++) {
        if (func_020499d4() == 0) {
            func_02049814(&partyCharacter_[i], anim);
        } else if (anim == 1) {
            func_02049814(&partyCharacter_[i], 2);
        } else {
            func_02049814(&partyCharacter_[i], anim);
        }
    }
}

ARM void TownPartyDraw::setWriggleCharacter(int flag)
{
    func_020498d0(&partyCharacter_[0], flag);
}

ARM void TownPartyDraw::setWriggleCharaAll(int flag)
{
    for (int i = 0; i < countReal_; i++) {
        func_020498d0(&partyCharacter_[i], flag);
    }
}

ARM void TownPartyDraw::setAlpha(int index, char alpha)
{
    partyDispAlpha_[index] = alpha;
    partyCharacter_[index].setAlpha((unsigned char)alpha);
}

ARM void TownPartyDraw::setPlayerAlpha(unsigned char alpha)
{
    status::g_Party.setDisplayMode();
    if (g_Stage.isBashaEnter() && status::g_Party.basha_ != 0) {
        for (int i = 0; i < count_; i++) {
            int idx = i;
            if (i == 1 || i == 2) {
                continue;
            }
            if (i > 2) {
                idx = i - 2;
            }
            bool alive = !status::g_Party.getPlayerStatus(idx)->haveStatusInfo_.isDeath();
            if (alive) {
                partyDispAlpha_[i] = alpha;
                partyCharacter_[i].setAlpha(alpha);
            }
        }
    } else {
        for (int i = 0; i < count_; i++) {
            bool alive = !status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath();
            if (alive) {
                partyDispAlpha_[i] = alpha;
                partyCharacter_[i].setAlpha(alpha);
            }
        }
    }
}

ARM void TownPartyDraw::addAlpha(int index, char alpha)
{
    partyDispAlpha_[index] += alpha;
    partyDispAlpha_[index] = getMax(0, partyDispAlpha_[index]);
    partyDispAlpha_[index] = getMin(31, partyDispAlpha_[index]);
    partyCharacter_[index].setAlpha((unsigned char)partyDispAlpha_[index]);
}

ARM int TownPartyDraw::getMin(int a, int b)
{
    return a < b ? a : b;
}

ARM int TownPartyDraw::getMax(int a, int b)
{
    return a > b ? a : b;
}

ARM void TownPartyDraw::execute()
{
    if (exe_ == 0) {
        return;
    }
    if (func_02081254() & 1) {
        for (int i = 0; i < 8; i++) {
            func_020497bc(&partyCharacter_[i], 1);
            partyCharacter_[i].setBoxTestOff(true);
        }
    } else {
        for (int i = 0; i < 8; i++) {
            func_020497bc(&partyCharacter_[i], 0);
            func_02049374(&partyCharacter_[i]);
        }
    }
}

ARM void TownPartyDraw::setExcute(int flag)
{
    exe_ = flag;
    if (flag == 0) {
        for (int i = 0; i < 8; i++) {
            func_020497bc(&partyCharacter_[i], 1);
            partyCharacter_[i].setBoxTestOff(true);
        }
    }
}

ARM void TownPartyDraw::changePose(int pose)
{
    char path[128];
    func_02049190(&partyCharacter_[0]);
    if (dataObject_.getAddr()) {
        dataObject_.cleanup();
    }
    func_02088308(path, sizeof(path), "data/chr/h%03d.pack", pose);
    OS_Wait();
    dataObject_.setup(path, 0, 0);
    partyCharacter_[0].setTexture(dataObject_.getAddr());
}

ARM void TownPartyDraw::restorePose()
{
    func_02049190(&partyCharacter_[0]);
    if (dataObject_.getAddr()) {
        dataObject_.cleanup();
    }
    partyCharacter_[0].resetTexture();
}

ARM void TownPartyDraw::setSleep(int sleep)
{
    for (int i = 0; i < count_; i++) {
        partyCharacter_[i].setSleep(sleep);
    }
}

ARM void TownPartyDraw::requestCharacterReload()
{
    for (int i = 0; i < count_; i++) {
        func_02049a18(&partyCharacter_[i]);
    }
}

ARM void TownPartyDraw::setVanAndBasha()
{
    char path[128];
    int chara;
    cleanup();
    status::g_Party.setDisplayMode();
    countReal_ = count_ = 3;
    for (int i = 0; i < count_; i++) {
        switch (i) {
        case 0: {
            status::PlayerStatus* player = status::g_Party.getPlayerStatus(i);
            if (g_HengeNoTsue.change_ == 0) {
                chara = player->haveStatusInfo_.haveStatus_.charaIndex_;
            } else {
                chara = g_HengeNoTsue.charNo_;
            }
            break;
        }
        case 1:
            chara = 0x88;
            break;
        case 2:
            status::g_Party.getPlayerStatus(i);
            chara = 0x89;
            break;
        default: {
            status::PlayerStatus* player = status::g_Party.getPlayerStatus(i - 2);
            if (g_HengeNoTsue.change_ == 0) {
                chara = player->haveStatusInfo_.haveStatus_.charaIndex_;
            } else {
                chara = g_HengeNoTsue.charNo_;
            }
            if (player->haveStatusInfo_.isDeath()) {
                chara = 0x53;
            }
            break;
        }
        }
        func_02088308(path, sizeof(path), "data/chr/h%03d.pack", chara);
        partyCharacter_[i].setRender(&TownSystem::getSingleton()->render_);
        func_02049984(&TownCamera::getSingleton()->camera_.unk_004);
        partyCharacter_[i].setup(path, 0);
        partyCharacter_[i].setPosition(defaultPosition);
        func_0204948c(&partyCharacter_[i], 0);
        partyCharacter_[i].enable_ = 0;
        func_0204977c(&partyCharacter_[i], 0);
    }
    count_ = func_02008ea0(count_, 0, 6);
    for (int i = 0; i < count_; i++) {
        partyCharacter_[i].enable_ = 1;
    }
}
