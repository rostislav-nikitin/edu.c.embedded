#include <stdio.h>

struct Address
{
	char country[32];
	char city[32];
	char street[64];
	unsigned long int house_number;
};


int main(void)
{
	struct Address address;
	printf("Country: ");
	scanf("%s", &address.country);


	printf("Country is \'%s\'\n", address.country);


	
	return 0;
}
