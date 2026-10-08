#pragma exceptions on
#pragma unsigned_char on
// Linker generated symbols (empty exception table, at the .init start)
#define __exception_table_start__ ARM9_EXCEPTIX_START
#define __exception_table_end__ ARM9_EXCEPTIX_END
#include "runtime_internal.h"

#define CONST_CHAR 'K'

/* compares a thrown type with a catch type; returns true and the base class offset when they match */
extern "C" char func_02007b68(const char* throwtype, const char* catchtype, long* offset_result) {
    const char *cptr1, *cptr2;

    *offset_result = 0;
    if ((cptr2 = catchtype) == 0) {
        return true;
    }
    cptr1 = throwtype;

    if (*cptr2 == 'P') {
        cptr2++;

        if (*cptr2 == 'V')
            cptr2++;
        if (*cptr2 == CONST_CHAR)
            cptr2++;

        if (*cptr2 == 'v') {
            if (*cptr1 == 'P' || *cptr1 == '*') {
                return true;
            }
        }
        cptr2 = catchtype;
    }

    switch (*cptr1) {
        case '*':
        case '!':
            if (*cptr1++ != *cptr2++)
                return false;
            for (;;) {
                if (*cptr1 == *cptr2++) {
                    if (*cptr1++ == '!') {
                        long offset;

                        for (offset = 0; *cptr1 != '!';)
                            offset = offset * 10 + *cptr1++ - '0';
                        *offset_result = offset;
                        return true;
                    }
                } else {
                    while (*cptr1++ != '!')
                        ;
                    while (*cptr1++ != '!')
                        ;
                    if (*cptr1 == 0)
                        return false;
                    cptr2 = catchtype + 1;
                }
            }
            return false;
    }

    while ((*cptr1 == 'P' || *cptr1 == 'R') && *cptr1 == *cptr2) {
        cptr1++;
        cptr2++;
        if (*cptr2 == CONST_CHAR) {
            if (*cptr1 == CONST_CHAR)
                cptr1++;
            cptr2++;
        }
        if (*cptr1 == CONST_CHAR)
            return false;

        if (*cptr2 == 'V') {
            if (*cptr1 == 'V')
                cptr1++;
            cptr2++;
        }
        if (*cptr1 == 'V')
            return false;
    }

    for (; *cptr1 == *cptr2; cptr1++, cptr2++)
        if (*cptr1 == 0)
            return true;
    return false;
}

char* __PopStackFrame(ThrowContext* context, ExceptionInfo* info) {
    unsigned long frame_size, flushback_area_size, *GPRs;
    int           i;

    frame_size          = context->target.frame_size;
    flushback_area_size = context->target.has_flushback ? 16 : 0;

    GPRs = (unsigned long*)(context->FP + frame_size - flushback_area_size);
    for (i = 15; i >= 0; i--) {
        if (context->target.saved_GPRs & (1 << i))
            context->target.GPR[i] = *--GPRs;
    }

    context->SP = context->FP + frame_size;

    return (char*)context->target.GPR[14];
}

/* reads the unwind info of the current exception record */
extern "C" void func_02007d74(ThrowContext* context, ExceptionInfo* info) {
    char* p     = info->exception_record;
    char  flags = *p++;

    context->target.has_frame_ptr = flags & UNWIND_FRAME_IS_DYNAMIC;
    context->target.has_flushback = flags & UNWIND_FRAME_HAS_FLUSHBACK;
    context->target.is_Thumb      = flags & UNWIND_FRAME_IS_THUMB;

    context->target.saved_GPRs = ((unsigned char)*p++) << 4;
    context->target.saved_GPRs |= (1 << 14);

    p = __DecodeUnsignedNumber(p, &context->target.frame_size);

    if (flags & UNWIND_FRAME_IS_DYNAMIC)
        p = __DecodeUnsignedNumber(p, &context->target.argument_size);

    if (flags & UNWIND_FRAME_IS_DYNAMIC) {
        if (flags & UNWIND_FRAME_IS_THUMB)
            context->FP = (char*)context->target.GPR[7];
        else
            context->FP = (char*)context->target.GPR[11];
    } else
        context->FP = context->SP;
}

int __FindExceptionTable(ExceptionInfo* info, char* retaddr) {
    /* linker generated */
    extern ExceptionTableIndex __exception_table_start__[];
    extern ExceptionTableIndex __exception_table_end__[];

    info->exception_table_start = __exception_table_start__;
    info->exception_table_end   = __exception_table_end__;

    return 1;
}

char* __SkipUnwindInfo(char* p) {
    unsigned char flags = *p++;
    unsigned long dummy;

    p += 1;
    p = __DecodeUnsignedNumber(p, &dummy);
    if (flags & UNWIND_FRAME_IS_DYNAMIC)
        p = __DecodeUnsignedNumber(p, &dummy);

    return (p);
}

// clang-format off
/* restores the callee-saved registers and the stack of the catching frame and jumps to the handler */
extern "C" asm void func_02007e64(register ThrowContext *context, register ExceptionInfo *info, register char *address) {
    ldr     v1, [context, #ThrowContext.target.GPR+16]
    ldr     v2, [context, #ThrowContext.target.GPR+20]
    ldr     v3, [context, #ThrowContext.target.GPR+24]
    ldr     v4, [context, #ThrowContext.target.GPR+28]
    ldr     v5, [context, #ThrowContext.target.GPR+32]
    ldr     v6, [context, #ThrowContext.target.GPR+36]
    ldr     v7, [context, #ThrowContext.target.GPR+40]
    ldr     v8, [context, #ThrowContext.target.GPR+44]
    ldr     sp, [context, #ThrowContext.target.throwSP]
    ldr     ip, [context, #ThrowContext.target.argument_size]
    sub     sp, sp, ip
    mov     pc, address
}

extern "C" asm void __rethrow(void) {
    mov     ip, sp
    sub     sp, sp, #sizeof(ThrowContext)
    str     v1, [sp, #ThrowContext.target.GPR+16]
    str     v2, [sp, #ThrowContext.target.GPR+20]
    str     v3, [sp, #ThrowContext.target.GPR+24]
    str     v4, [sp, #ThrowContext.target.GPR+28]
    str     v5, [sp, #ThrowContext.target.GPR+32]
    str     v6, [sp, #ThrowContext.target.GPR+36]
    str     v7, [sp, #ThrowContext.target.GPR+40]
    str     v8, [sp, #ThrowContext.target.GPR+44]
    str     ip, [sp, #ThrowContext.SP]
    str     ip, [sp, #ThrowContext.target.throwSP]
    str     lr, [sp, #ThrowContext.returnaddr]
    mov     ip, #0
    str     ip, [sp, #ThrowContext.throwtype]
    str     ip, [sp, #ThrowContext.location]
    str     ip, [sp, #ThrowContext.dtor]
    mov     a1, sp
    b       func_0200782c
}
// clang-format on
