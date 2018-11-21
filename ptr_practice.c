#include <stdio.h>

int main(void){
	int x = 10;
	int *ptr1 = &x;
	
	printf("ptr1 = %p\n", ptr1); //%p is used to represent a pointer address
	printf("*ptr1 = %d\n", *ptr1);

return 0;
}	
