#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"

extern "C" {
    void func_02087110(void* dst, int* src);
    extern int data_020c497c;
    extern int data_020c4980;
    extern int data_020c4984;
}

namespace dss {

ARM Fx32Vector3::Fx32Vector3()
{
    func_02087110(&this->vx, &data_020c4980);
    func_02087110(&this->vy, &data_020c497c);
    func_02087110(&this->vz, &data_020c4984);
}

}
