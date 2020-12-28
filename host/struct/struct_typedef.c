#include <stdio.h>

typedef struct
{
	struct
	{
		char country[32];
		char city[32];
		char street[64];
	} address;
	unsigned long int house_number;
} address_t;


int main(void)
{
	address_t address;

	printf("Country: ");
	scanf("%s", &address.address.country);

	printf("Country is \'%s\'\n", address.address.country);


	
	return 0;
}
