#pragma once
#include "main/text/TextAPI.hpp"
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "ov003/btl/AutoActionParam.hpp"
#include "main/status/UseAction.hpp"

namespace btl {
    struct BattleMessage
    {
        static void setMessage(int message1, int message2, int message3, int message4);
        static void setMessageInTown(int message1, int message2, int message3, int message4);
        static int setBeforeMessage(status::UseActionParam* useActionParam);
        static int setExecMessage(status::UseActionParam* useActionParam);
        static int setSpecialMessage(status::UseActionParam* useActionParam, int currentTarget);
        static int setResultMessage(status::UseActionParam* useActionParam, int currentTarget);
        static int setAfterMessage(status::UseActionParam* useActionParam, int index);
        static void setShakeMessage(status::UseActionParam* useActionParam, int currentTarget);
        static void openEncountMessage();
        static void addEncountMessage(int message);

    };
    
}

extern "C" void func_0200d6d0(void);
extern "C" void func_0200d728(int message);
extern "C" void func_020899a4(void);   // BattleAutoFeed::setCursor
extern "C" void func_02089678(void);   // BattleAutoFeed::setMessage
extern "C" void func_02089720(void);
extern "C" int  func_02089738(void);   // BattleAutoFeed::isEndEncountMessage
extern "C" int  func_0200d78c(void);   // MenuAPI::isFinishMessageWindow
extern "C" void func_020896f0(void);   // BattleAutoFeed::setMessageSend
extern "C" void func_02089acc(int flag);   // BattleAutoFeed::setDisableCursor
extern "C" int  func_02089684(void);   // BattleAutoFeed::isEndMessage
extern "C" void func_02089abc(void);   // BattleAutoFeed::disableAutoFeed
extern "C" void func_0200d510(void);   // MenuAPI::closeMenu
extern "C" int  func_0200d528(void);   // MenuAPI::isFinishMenu
extern "C" void func_0200d5a0(void);   // MenuAPI::openBattleMenu
extern "C" void func_0200d61c(void);
extern "C" void func_0200d748();
extern "C" void func_0200d6a0(void);
extern "C" void func_0200d738(int message);