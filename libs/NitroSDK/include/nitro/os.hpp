#pragma once

extern "C" {
    void OS_Wait(void);
    void OS_Terminate(void);
    void DC_CleanAll(void);
    void DC_CleanRange(const void* addr, unsigned int count);
}
