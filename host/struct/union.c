#include <stdio.h>
#include <stdint.h>

typedef union
{
	uint16_t short_address;
	uint32_t long_address;
} union_t;


int main(void)
{
	union_t union_value;
	union_value.long_address = 0xffffcaca;

	printf("short_address is: 0x%x, long_address is: 0x%x\n", union_value.short_address, union_value.long_address);
	
	return 0;
}
