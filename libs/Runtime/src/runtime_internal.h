#ifndef RUNTIME_INTERNAL_H
#define RUNTIME_INTERNAL_H

#include <stddef.h>
#include <CompressedNumbers.h>
#include <ExceptionTables.h>
#include <MWException.h>

typedef struct TargetContext {
    /* 0x00 */ unsigned long  GPR[16];
    /* 0x40 */ char*          throwSP;
    /* 0x44 */ unsigned long  frame_size;
    /* 0x48 */ unsigned long  argument_size;
    /* 0x4c */ unsigned short saved_GPRs;
    /* 0x4e */ bool           has_flushback;
    /* 0x4f */ bool           has_frame_ptr;
    /* 0x50 */ bool           is_Thumb;
} TargetContext;

typedef struct ThrowContext {
    /* 0x00 */ unsigned char* throwtype;
    /* 0x04 */ void*          location;
    /* 0x08 */ void*          dtor;
    /* 0x0c */ CatchInfo*     catchinfo;
    /* 0x10 */ char*          returnaddr;
    /* 0x14 */ char*          SP;
    /* 0x18 */ char*          FP;
    /* 0x1c */ TargetContext  target;
} ThrowContext;

typedef struct TargetExceptionInfo {
    int dummy;
} TargetExceptionInfo;

typedef struct ExceptionInfo {
    char*                current_function;
    char*                exception_record;
    char*                action_pointer;
    ExceptionTableIndex* exception_table_start;
    ExceptionTableIndex* exception_table_end;
    TargetExceptionInfo  target;
} ExceptionInfo;

#define UNWIND_FRAME_IS_THUMB      0x80
#define UNWIND_FRAME_IS_DYNAMIC    0x40
#define UNWIND_FRAME_HAS_FLUSHBACK 0x20

#define __FunctionPointer(info, context, fp)          (fp)
#define __AdjustReturnAddress(info, context, retaddr) (retaddr)
#define __LocalVariable(context, offset)              ((context)->FP + (offset))
#define __Register(context, regno)                    ((context)->target.GPR[regno])

namespace std {
    typedef void (*terminate_handler)();
    typedef void (*unexpected_handler)();
    void terminate();
}

extern "C" void abort(void);

/* exception unwinding (ExceptionHandler.cpp) */
extern "C" void func_0200782c(ThrowContext* context); /* throw handler */
extern "C" void __end__catch(CatchInfo* catchinfo);  /* end of catch */

/* target-specific part */
extern "C" char  func_02007b68(const char* throwtype, const char* catchtype, long* offset_result); /* throw/catch type compare */
extern char*     __PopStackFrame(ThrowContext* context, ExceptionInfo* info);
extern "C" void  func_02007d74(ThrowContext* context, ExceptionInfo* info); /* setup frame info */
extern int       __FindExceptionTable(ExceptionInfo* info, char* retaddr);
extern char*     __SkipUnwindInfo(char* exceptionrecord);
extern "C" void  func_02007e64(ThrowContext* context, ExceptionInfo* info, char* address); /* transfer control */

#endif
