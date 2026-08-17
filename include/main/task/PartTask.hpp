#pragma once
#include <globaldefs.h>

namespace task {

    struct PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

}  