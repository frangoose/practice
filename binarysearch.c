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
	int key = 5;
	int min, max, match;
	int arr[ARR_SIZE];
	int *a_ptr;
	int key_index = -1;
	a_ptr = arr;
	

	printf("BUBBLESORT\n");
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
		printf("%d, ", arr[i]);
	}
	printf(" ]\n");

	min = 0;
	max = ARR_SIZE-1;
	match = (ARR_SIZE-1)/2;

	printf ("MIN: %d\nMID: %d\nMAX: %d\n", arr[min], arr[match], arr[max]);

	while(min < max && key_index == -1)
	{
		if(arr[match] == key)
		{
			key_index = match;
		}
		else if(arr[match] > key)
		{
			max = match - 1;
		}
		else if(arr[match] < key)
		{
			min = match + 1;
		}
		match = (min + max)/2;
	}
	if(key_index >= 0){
		printf("Key is at index %d.\n", key_index);
	}
	else
	{
		printf("Key is not present in this data set.\n");
	}
	return 0;
}
