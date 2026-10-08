#pragma exceptions on
#pragma unsigned_char on
#include "runtime_internal.h"

// Both runtime handler slots are part of the original library image.
#pragma define_section runtime_handlers ".data.keep" ".bss" ".rodata" RW

/* default terminate handler */
extern "C" void func_02007b18(void) {
    abort();
}

/* default unexpected handler */
extern "C" void func_02007b24(void) {
    std::terminate();
}

/* current terminate handler */
__declspec(runtime_handlers) std::terminate_handler data_020bb8f4 = func_02007b18;

/* current unexpected handler (its only user, std::unexpected, is not linked) */
__declspec(runtime_handlers) std::unexpected_handler data_020bb8f8 = func_02007b24;

namespace std {

    void terminate() {
        data_020bb8f4();
    }

} // namespace std
