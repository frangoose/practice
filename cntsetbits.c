#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	uint32_t x = 0xC0FFEE;
	int cnt = 0;

	if(argc > 1) x = strtol(argv[1], NULL, 16);
	while(x > 0)
	{
		x = x >> 1;
		if(x & 1) cnt++;
	}
	printf("Number of set bits: %d\n", cnt);

	return 0;
}
