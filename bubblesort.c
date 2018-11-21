#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ARR_SIZE 10

int swap(int *a, int *b)
{
	int temp;
	int swapped = 0;
	if(*a > *b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
		swapped = 1;
	}
	return swapped;
}

int main(void)
{
	srand(time(NULL));
	int arr[ARR_SIZE];
	int *a_ptr;
	a_ptr = arr;
	
	for(int i = 0; i < ARR_SIZE; i++)
	{
		*a_ptr = rand()%10;
		a_ptr++;
	}

	a_ptr = arr; 
	
	printf("BEFORE SORT: [ ");
	for(int i = 0; i < ARR_SIZE; i++)
	{
		printf("%d, ", *a_ptr);
		a_ptr++;
	}
	printf(" ]\n");

	
	for(int i = 0; i < ARR_SIZE; i++)
	{
		a_ptr = arr;
		for(int j = 0; j < (ARR_SIZE - 1) - i; j++)
		{
			swap(a_ptr, a_ptr+1);
			a_ptr++;
		}
	}

	a_ptr = arr;

	printf("AFTER SORT: [ ");
	for(int i = 0; i < ARR_SIZE; i++)
	{
		printf("%d, ", *a_ptr);
		a_ptr++;
	}
	printf(" ]\n");

	return 0;
}
