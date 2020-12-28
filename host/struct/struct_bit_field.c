#include <stdio.h>
#include <stdint.h>

typedef struct
{
	uint32_t crc		:2;
	uint32_t err		:1;
	uint32_t data		:12;
	uint32_t write		:1;
	uint32_t address_to	:8;
	uint32_t address_from	:8;
} packet_t;


int main(void)
{
	printf("sizeof(packet_t)=%u\n", sizeof(packet_t));
	uint32_t original_packet = 0xe1e8fff0;

	packet_t *p_packet = (packet_t *)&original_packet;

	printf("original=0x%x, address from=0x%x, address to=0x%x, write=%u, data=%u, err=%u, crc=%u\n", original_packet, \
		p_packet->address_from, p_packet->address_to, p_packet->write, p_packet->data, p_packet->err, p_packet->crc);

	return 0;
}
