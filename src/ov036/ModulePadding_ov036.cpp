// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x0218975c..0x02189760
__declspec(module_ctor) extern const unsigned int module_padding_ov036_ctor_0218975c[1] = {0};
// 0x0218977c..0x02189780
__declspec(module_data) extern const unsigned int module_padding_ov036_data_0218977c[1] = {0};
}
