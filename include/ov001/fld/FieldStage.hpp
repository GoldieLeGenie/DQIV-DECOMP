#pragma once
#include "globaldefs.h"

namespace fld {
    struct FieldData;
    struct FieldStage;
}

extern "C" {
    fld::FieldStage* func_ov001_0212b948(void);                                     // FieldStage::getSingleton
    void func_ov001_0212c300(fld::FieldStage* stage, int id);                       // FieldStage::eraseSymbol
    void func_ov001_021245dc(fld::FieldData* data, int id, int disp);               // FieldData::setDispSymbol
}

namespace fld {
    struct FieldData {
        char unk_0000[0x20dc];
        int pause_;                                                                 // 0x20DC

        void setDispSymbol(int id, int disp) { func_ov001_021245dc(this, id, disp); }
    };

    struct FieldStage {
        FieldData fieldData;                                                        // 0x0000
    };
}
