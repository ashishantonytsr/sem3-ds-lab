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
void InsertionSort(int a[], int n)
{
	int i, j, temp;
	for (i = 1; i < n; i++)
	{
		temp = a[i];
		for (j = i; j > 0 && a[j - 1] > temp; j--)
			a[j] = a[j - 1];
		a[j] = temp;
	}
}

int main()
{
	srand(time(NULL));
	int arr[100];
	// populating array with random values
	for (int i = 0; i < 100; i++)
		arr[i] = rand() % 1000;
	InsertionSort(arr, 100);
	// testing...
	// for (int i = 0; i < 100; i++)
	// 	printf("%d ", arr[i]);
	if(isSorted(arr, 100))
		printf("\ntest passed");
	else
	printf("\ntest failed");
	return 0;
}
