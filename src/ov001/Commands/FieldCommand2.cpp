#include "ov001/Commands/FieldCommand.hpp"
#include "main/Commands/CommonCommand.hpp"
#include "main/cmn/CommonPartyInfo.hpp"

THUMB int cmd_field_symbol_disp(int* param)
{
    func_ov001_0212b948()->fieldData.setDispSymbol(param[0], param[1]);
    return 1;
}
