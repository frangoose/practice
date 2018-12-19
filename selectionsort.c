#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b);

int main(void)
{
	int arr[15];
	int i, j;
	srand(time(NULL));

	// this will populate the array with random values
	printf("UNSORTED LIST\n");
	for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		arr[i] = rand() % 100;
		printf("%d  ", arr[i]);
	}
	putchar('\n');

	printf("SORTED LIST\n");
	//this loop will perform the sorting
	for(i = 0; i < sizeof(arr)/sizeof(arr[0] - 1); i++)
	{
		int min = arr[i];
		for(j = i + 1; j < sizeof(arr)/sizeof(arr[0]); j++)
		{
			if(arr[j] < min)
			{
				min = arr[j];
				swap(&arr[i], &arr[j]);
			}	
		}
	}
	
	for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
	{
		printf("%d  ", arr[i]);
	}
	putchar('\n');
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
