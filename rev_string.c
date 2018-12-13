#include <stdio.h>

int main(void)
{

	char *mystring = "Hello, World!";
	char *reset = mystring;
	char temp;

	while(*mystring != '\0')
	{
		printf("%c\n", mystring[0]);
		mystring++;
	}
	mystring = reset;


	return 0;
}
