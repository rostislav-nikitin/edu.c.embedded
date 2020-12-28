#include <stdio.h>
#include <stdint.h>

uint16_t value = 1;

uint16_t *p_value = &value;

// Used for purposes when it is restricted to change value inside a code, but acceptable by the hardware.
uint16_t const volatile *p_value_cv;

// Used when need when value can not be changed isdide a code but can outside and pointer should not be changed.
uint16_t const volatile *const p_c_value_cv;

// Used when pointer should not be changed but value can be change indide & outside of the code.
uint16_t volatile *const p_c_value_v;


int main(void)
{
	printf("Const & volatile examples.\n");
}
