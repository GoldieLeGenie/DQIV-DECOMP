#pragma once
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
extern "C" void func_020899a4(void);
extern "C" void func_02089678(void);
extern "C" void func_0200d61c(void);
extern "C" void func_02054364(int a, int b, int c);
extern "C" int func_ov003_021249e4(void);
extern "C" void func_0200d748();
extern "C" void func_0200d6a0(void);
extern "C" void func_0200d738(int message);