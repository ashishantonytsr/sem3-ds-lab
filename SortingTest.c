/* For Testing Sorting Algorithms */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isSorted(int test[], int len)
{
	for (int i = 1; i < len - 1; i++)
	{
		int left = test[i - 1], right = test[i + 1];
		if ((test[i] < left || test[i] > right))
			return false;
	}
	return true;
}


// import your sorting function here
// make sure to comment out main function in the imported file
#include "19.c"


void main()
{
	srand(time(NULL));
	int arr[100];

	// populating array with random values
	for (int i = 0; i < 100; i++)
		arr[i] = rand() % 1000;
	quick_sort(arr, 0, 100-1);

	// testing...
	// for (int i = 0; i < 100; i++)
	// 	printf("%d ", arr[i]);

	isSorted(arr, 100) ? printf("\ntest passed") : printf("\ntest failed");
}
