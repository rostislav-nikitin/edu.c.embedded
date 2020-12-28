#include <stdio.h>
#include <stdint.h>

typedef struct
{
	uint8_t		value1;
	uint32_t	value2;
	uint8_t		value3;
	uint16_t	value4;
} aligned_t;

typedef struct __attribute__((packed))
{
	uint8_t		value1;
	uint32_t	value2;
	uint8_t		value3;
	uint16_t	value4;
} unaligned_t;


int main()
{
	printf("sizeof(aligned_t)=%u\n", sizeof(aligned_t));
	printf("sizeof(unaligned_t)=%u\n", sizeof(unaligned_t));

	return 0;
}
