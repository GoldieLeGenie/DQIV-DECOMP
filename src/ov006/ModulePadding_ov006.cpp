// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R

extern "C" {
// 0x02129adc..0x02129ae0
__declspec(module_ctor) extern const unsigned int module_padding_ov006_ctor_02129adc[1] = {0};
}
