#include <stdio.h>
#include <stdint.h>


// Non-volatile value
uint8_t value_nv = 10;

// Volatile value
uint8_t volatile value_v = 20;

// Non-volatile pointer to the non-volatile value.
uint8_t *p_nv_value_nv = &value_nv;

// Non-volatile pointer to the volatile value. Should be used when the value can be changed outside of the code.
uint8_t volatile *p_nv_value_v = &value_v;

// Volatile pointer to the non-volatile value. Should be used when the pointer to the value can be changed outside of the code.
uint8_t *volatile p_v_value_nv = &value_nv;

// Volatile pointer to the volatile value. Should be used when the pointer to the value and the value can be changed outside of the code.
uint8_t volatile *volatile p_v_value_v = &value_v;

/*
 * Hot to read it?
 * p_value_v is a [*volatile] pointer to the [uint8_t volatile] volatile value of the type [uint8_t]
 *
 * When to use it?
 * When pointer or/and variable could be changed of the current code. For example by the hardware at embedded device.
 */

int main()
{
	printf("Volatile examples\n");

	return 0;
}
