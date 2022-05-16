// Quick Sort

#include <stdio.h>

void swap(int *x, int *y)
{
	int t;
	if (x != y)
	{
		t = *x;
		*x = *y;
		*y = t;
	}
}

int partition(int arr[], int beg, int end)
{
	int pivot = arr[end];
	int i = beg - 1, j;
	for (j = beg; j <= end - 1; j++)
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	swap(&arr[i + 1], &arr[end]);
	return ++i; // returns partition index as i+1
}

void quick_sort(int arr[], int beg, int end)
{
	int pi; // partition index
	if (beg > end)
		return;
	pi = partition(arr, beg, end);
	quick_sort(arr, beg, pi - 1);
	quick_sort(arr, pi + 1, end);
}

void main()
{
	int i, n, array[25];
	printf("Enter the size : ");
	scanf("%d", &n);
	printf("Enter the elements : ");
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);

	quick_sort(array, 0, n - 1);
	printf("The Sorted Order is: ");
	for (i = 0; i < n; i++)
		printf(" %d", array[i]);
	getch();
}