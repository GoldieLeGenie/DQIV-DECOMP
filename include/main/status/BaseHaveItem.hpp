#pragma once
#include <globaldefs.h>
#include "main/status/ItemData.hpp"


namespace status{
    struct BaseHaveItem {
        status::ItemData* item_;
        int itemMax_;
        BaseHaveItem();
        ~BaseHaveItem();
        virtual void clear();
        virtual int add(int itemIndex);
        virtual int del(int ctrlId);
        int addOne(int itemIndex);
        int addNum(int itemIndex, int count);
        int delOne(int ctrlId);
        bool delNum(int index);
        void sort();
        int getCount();
        int getMaxCount();
        int getItem(int index);
        int getItemSortIndex(int itemIndex);
        status::ItemData* getItemData(int index);
        unsigned short getItemCount(int index);
        int isItem(int itemIndex);
        int getItemMax();
    };
}

extern "C" {
    int func_02013e9c(status::BaseHaveItem*,int ctrlId);
    void func_02007a0c(void*, int, int, void*, void*); //NOT DECOMPILED
    void func_02007abc(void*, int, int, void*);//NOT DECOMPILED
    void func_02013dc8(void*);//NOT DECOMPILED
    void func_02013d9c();//NOT DECOMPILED
    void func_02013da8();//NOT DECOMPILED
}
