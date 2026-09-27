#include "main/Commands/CommonCommand.hpp"
#include "main/CommandParameter/CommandParameter.hpp"

ARM int ScriptCommand::exec(CommandParameter* command)
{
    if (command->flag_ == 0) {
        execute();
    }
    if (command->flag_ & 1) {
        if (!(command->flag_ & 0x10)) {
            command->flag_ |= 0x10;
            initialize((char*)command->param_);
        }
        if (!(command->flag_ & 0x40)) {
            execute();
            if (isEnd()) {
                command->flag_ |= 0x40;
                vf08();
            }
        }
    }
    return (command->flag_ & 0x40) != 0;
}
