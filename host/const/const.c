#include <stdio.h>
#include <stdint.h>

// Const value. Should be used when value should not be changed through the assignment statements.
double const pi_const = 3.14159;

// Non-const value
double pi = pi_const;

// Non-const pointer to non-const value
double *p_pi = &pi;

// Non-const pointer to the const value. Should be used when value should not be changed through the assignment statements.
double const *p_pi_const = &pi;

// Const pointer to the non-const value. Should be used when pointer to the value should not be changed through the assignment statements.
double *const p_const_pi = &pi;

// Const pointer to the const value. Should be used when pointer to the value and the value should not be changed through the assignment statements.
double const *const p_const_pi_const = &pi;

/*
 * How to read this?
 * p_const_pi is a [*const] const pointer to the [double const] const value of type double
 *
 * How to use this examples?
 * Try to compile, then comment all the error lines
 */

#define BEFORE	0
#define AFTER	1

// Print value and it's address before or after the change
void print_value(char const *const p_name, double const *const p_value, uint8_t change_time);

int main()
{
	print_value("pi_const", &pi_const, BEFORE);
	// Try to change pi_const - should be compilation error because value is const
	//pi_const = 3.0;
	
	// Try to change p_pi - should be OK, because value is not a const
	print_value("p_pi", p_pi, BEFORE);
	*p_pi = 2.0;
	print_value("p_pi", p_pi, AFTER);

	// Try to change *p_pi_const - should be compilation error, because a pointer->value is const
	//*p_pi_const = 3.0;
	// Try to change *p_const_pi - should be OK, because pointer is a const, but value is not
	print_value("*p_const_pi", p_const_pi, BEFORE);
	*p_const_pi = 1.0;
	print_value("*p_const_pi", p_const_pi, AFTER);

	// Try to change p_const_pi - should be compilation error because of pointer is a const
	//p_const_pi = &pi_const;

	// Try to change *p_const_pi_const - should be compilation error, because a pointer->value is a const
	//*p_const_pi_const = 0.0;
	// Try to change p_const_pi_const - should be compilation error, because a pointer is a const
	//p_const_pi_const = &pi;
	

	return 0;
}

void print_value(char const *const p_name, double const *const p_value, uint8_t change_time)
{
	#define PREFIX_MAX_LENGTH	7

	char* prefix = "[BEFORE]\t";

	if(change_time == AFTER)
	{
		prefix = "[AFTER]\t\t";
	}

	printf("%s%16s\t=%lf\t[0x%x]\r\n", prefix, p_name, *p_value, p_value);
}
