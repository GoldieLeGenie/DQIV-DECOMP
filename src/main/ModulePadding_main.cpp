// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

#pragma define_section module_bss ".bss.keep" ".bss.keep" ".bss.keep" RW

extern "C" {
// 0x020bb4cc..0x020bb4d0
__declspec(module_ctor) extern const unsigned int module_padding_main_ctor_020bb4cc[1] = {0};
// 0x020c4a08..0x020c4a20
__declspec(module_data) extern const unsigned int data_020c4a08[6] = {0};
// 0x021210dc..0x021210e0
__declspec(module_bss) unsigned int module_padding_main_bss_021210dc[1];
}
