// Quick Sort

#include <stdio.h>

void swap(int *x, int *y)
{
	int t;
	t = *x;		*x = *y;		*y = t;
}

void quick_sort(int arr[], int beg, int end)
{
	int pivot = arr[end], i = beg - 1, j, pi; // partition index
	if (beg > end)	return;
	
	for (j = beg; j <= end - 1; j++)
		if (arr[j] < pivot)
			swap(&arr[++i], &arr[j]);
	swap(&arr[i + 1], &arr[end]);
	pi = ++i;

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

// Expected Output
/* 
Enter the size : 6
Enter the elements : 23 54 21 13 18 26
The Sorted Order is:  13 18 21 23 26 54
*/