#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint32_t x = 0x12345678;
	uint8_t b0 = (x & 0x000000FF);
	uint8_t b1 = (x & 0x0000FF00) >> 8;
	uint8_t b2 = (x & 0x00FF0000) >> 16;
	uint8_t b3 = (x & 0xFF000000) >> 24;

	x = b3 | (b2 << 8) | (b1 << 16) | (b0 << 24);

	printf("%x\n", x);

	return 0;
}
