#include "ctrdg_internal.h"

UnkCtrdgThread* data_0210c9a8;        /* task thread */
UnkCtrdgTask    data_0210c9ac;
static u8       data_0210c9d0[0x400]; /* task thread stack */

/* Starts the cartridge task thread. */
void func_0205efac(UnkCtrdgThread* thread) {
    ENTER_CRITICAL_SECTION();
    if (data_0210c9a8 == NULL) {
        data_0210c9a8 = thread;
        func_0205f038(&thread->unk_c4);
        func_0205f038(&data_0210c9ac);
        thread->unk_c0 = NULL;
        func_020787c4(&thread->unk_00, func_0205f04c, thread, data_0210c9d0 + sizeof(data_0210c9d0), sizeof(data_0210c9d0), 20);
        OS_WakeupThreadDirect(&thread->unk_00);
    }
    LEAVE_CRITICAL_SECTION();
}

void func_0205f038(UnkCtrdgTask* task) {
    MI_CpuSet(task, 0, sizeof(UnkCtrdgTask));
}

/* Cartridge task thread main loop. */
void func_0205f04c(void* arg) {
    UnkCtrdgThread* const thread = (UnkCtrdgThread*)arg;
    UnkCtrdgTask          task;

    for (;;) {
        u32 prevIRQState;

        MI_CpuSet(&task, 0, sizeof(task));

        prevIRQState = OS_DisableIRQ();
        while (thread->unk_c0 == NULL) {
            OS_PauseThread(NULL);
        }
        task = *thread->unk_c0;
        OS_RestoreIRQ(prevIRQState);

        if (task.unk_00 != NULL) {
            task.unk_08 = task.unk_00(&task);
        }

        prevIRQState = OS_DisableIRQ();
        {
            const UnkCtrdgTaskCallback callback = task.unk_04;
            data_0210c9ac.unk_22         = 0;
            if (callback != NULL) {
                callback(&task);
            }
        }
        if (data_0210c9a8 == NULL) {
            break;
        }
        thread->unk_c0 = NULL;
        OS_RestoreIRQ(prevIRQState);
    }
    func_020788c0();
}
