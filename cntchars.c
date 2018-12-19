#include <stdio.h>

int main(void)
{
	char str[26] = "this is only a test.";
	char* test = "xxx";

	int lut[255] = {0};
	int i;
	int passed = 1;

	for(i = 0; i < sizeof(str) - 1; i++)
	{
		lut[str[i]]++;
	}

	while(*test != '\0')
	{
		lut[*test]--;
		if(lut[*test] < 0) passed = 0;
		test++;
	}

	if(passed)
	{
		printf("Test string exists.\n");
	}
	else{
		printf("Test string does NOT exist.\n");
	}
	return 0;
}
