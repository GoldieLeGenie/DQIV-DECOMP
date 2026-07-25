#include "main/cmn/PlayerManager.hpp"

PlayerManagerData playerManagerData_;

ARM void cmn::PlayerManager::initLock() {
    playerManagerData_.locked_ = 0;
}

ARM void cmn::PlayerManager::setLock(int flag)
{
    if (flag != 0) {
        ++playerManagerData_.locked_;
        return;
    }
    --playerManagerData_.locked_;
}

ARM bool cmn::PlayerManager::isLock()
{
  return playerManagerData_.locked_ != 0;
}

ARM int cmn::PlayerManager::getLockCount()
{
  return playerManagerData_.locked_;
}

ARM void cmn::PlayerManager::setPlayerCommand(PLAYER_COMMAND command)
{
    playerManagerData_.command_ = command;
    switch (command)
    {
        case START_SEARCH_COMMAND:
        case START_TALK_COMMAND:
        case START_RIDE_BALLOON_COMMAND:
            playerManagerData_.checkCommand_ = command;
            break;
        default:
            playerManagerData_.checkCommand_ = PUSH_NONE;
            break;
    }
}

ARM PLAYER_COMMAND cmn::PlayerManager::getPlayerCommand()
{
  return playerManagerData_.command_;
}

ARM void cmn::PlayerManager::checkCommandEnd() {
    switch (playerManagerData_.checkCommand_) { 
        case 4:
            playerManagerData_.command_ = END_SEARCH_COMMAND;   
            break;
        case 6:
            playerManagerData_.command_ = END_TALK_COMMAND;    
            break;
        case 8:
            playerManagerData_.command_ = END_RIDE_BALLOON_COMMAND;    
            break;
    }
    
    playerManagerData_.checkCommand_ = PUSH_NONE; 
}