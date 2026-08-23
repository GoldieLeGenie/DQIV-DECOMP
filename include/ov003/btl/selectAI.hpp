#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"

namespace btl {
    static void selectAI(status::UseActionParam* useActionParam);
    
}

extern char data_ov003_02149350[];   // taille inconnue — manager IA
extern "C" void func_ov003_0212c384(void* aiMgr);
extern "C" void func_ov003_0212c400(void* aiMgr, status::CharacterStatus* chara);