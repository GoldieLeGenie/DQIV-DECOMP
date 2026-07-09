#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/BaseHaveItem.hpp"
#include "main/status/ItemData.hpp"

namespace status{
    struct HaveItem : BaseHaveItem {
        ItemData itemArray_[12];
        HaveItem();
        ~HaveItem();
        void setup(int index);
        virtual void clear();
        virtual int add(int index);
        virtual int del(int ctrlId);
        void sort(int index);
        void setEquipmentForTest(int index);
        void sortEquipmentForTest(int index);
        void resetEquipmentWithItemIndex(int itemIndex);
        int isEquipment(int index);
        void sortEquipment();
        int isSpace();

    };
}

extern "C" {
    void func_02010688(status::HaveItem*,int index);
    void func_02010714(status::HaveItem* self);
    void func_02007a0c(void*, int, int, void*, void*);
    void func_02007abc(void*, int, int, void*);
    int func_0201a47c(int);
}
