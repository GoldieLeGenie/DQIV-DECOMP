#pragma once
#include <globaldefs.h>

// Base of the DS application object (main() runs data_020c4fe4, a derived class with vtable 0x020bb958).
// The 6 default virtuals (0x0200885c-0x02008874) and the vtable (0x020bb970) live in the main TU.
struct UnkApplication {
    virtual void vf00();                        // called by unkfunc_02057f8c after the system init
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual int vf10();                         // first task given to GlobalDQ4
    virtual void vf14();

    void unkfunc_02057f8c(int arg);
    void unkfunc_02057fc4();
};

extern UnkApplication data_0210bb78;

extern "C" {
    void func_0207e934(int arg);                /* OS/system init */
    void func_0207e9f4();                       /* GX init */
    void func_0207ecf4();                       /* G3 init */
    void func_0207e7e0();
    void func_02089414();
}
