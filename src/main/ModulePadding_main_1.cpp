// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.

#pragma define_section module_bss ".bss.keep" ".bss.keep" ".bss.keep" RW

extern "C" {
// 0x0210c7d0..0x0210c7e0
__declspec(module_bss) unsigned int module_padding_main_bss_0210c7d0[4];
}
