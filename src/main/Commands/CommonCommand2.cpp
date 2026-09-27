#include "main/Commands/CommonCommand.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/cmn/CommonCounterInfo.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/global/Global.hpp"
#include "main/sound/SoundManager.hpp"
#include "ov000/town/TownPlayerManager.hpp"

THUMB int cmd_set_party_mark(int* param)
{
    func_ov000_021359ec(func_ov000_02132a90(), param[0], param[1]);
    return 1;
}
