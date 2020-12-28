#include <stdio.h>
#include <stdint.h>

typedef union
{
	uint32_t packed;
	struct
	{
		uint32_t crc		:2;
		uint32_t err		:1;
		uint32_t data		:12;
		uint32_t write		:1;
		uint32_t address_to	:8;
		uint32_t address_from	:8;
	} unpacked;
} packet_t;


int main(void)
{
	uint32_t original_packet = 0xe1e8fff0;

	packet_t packet;
	packet.packed = original_packet;

	printf("original=0x%x, address from=0x%x, address to=0x%x, write=%u, data=%u, err=%u, crc=%u\n", original_packet, \
		packet.unpacked.address_from, packet.unpacked.address_to, packet.unpacked.write, \
		packet.unpacked.data, packet.unpacked.err, packet.unpacked.crc);

	return 0;
}
