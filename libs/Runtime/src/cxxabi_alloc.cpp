#pragma exceptions on
#pragma unsigned_char on
#include "runtime_internal.h"

typedef void (*ConstructorFunc)(void*);

/* destroys the constructed elements [first, last) in reverse order */
extern "C" void func_020079b0(char* first, char* last, unsigned long element_size, DestructorFunc destructor) {
    try {
        while (last > first) {
            last -= element_size;
            destructor(last);
        }
    } catch (...) {
        std::terminate();
    }
}

extern "C" void __cxa_vec_ctor(void* array_address, unsigned long element_count, unsigned long element_size,
                               ConstructorFunc constructor, DestructorFunc destructor) {
    char* ptr;

    if (constructor != NULL) {
        if (destructor != NULL) {
            ptr = (char*)array_address;
            try {
                for (; element_count > 0; element_count--) {
                    constructor(ptr);
                    ptr += element_size;
                }
            } catch (...) {
                func_020079b0((char*)array_address, ptr, element_size, destructor);
                throw;
            }
        } else {
            for (; element_count > 0; element_count--) {
                constructor(array_address);
                array_address = (char*)array_address + element_size;
            }
        }
    }
}

extern "C" void __cxa_vec_cleanup(void* array_address, unsigned long element_count, unsigned long element_size,
                                  DestructorFunc destructor) {
    char* ptr;

    if (destructor != NULL) {
        ptr = (char*)array_address + element_count * element_size;
        try {
            for (; element_count > 0; element_count--) {
                ptr -= element_size;
                destructor(ptr);
            }
        } catch (...) {
            std::terminate();
        }
    }
}
