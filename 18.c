// Insertion Sort

#include <stdio.h>

void InsertionSort(int a[], int n)
{
	int i, j, key;
	for (i = 1; i < n; i++)
	{
		key = a[i];
		// if the key is smaller than its predecessor,
		// compare it to elements before, until it is in sorted order
		for (j = i; j > 0 && key < a[j - 1]; j--)
			a[j] = a[j - 1]; // moving greater elements one position right
		a[j] = key;				 // adding the key to the sorted position
	}
}

void main()
{
	int i, n, a[10];
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("Enter the elements :\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	InsertionSort(a, n);

	printf("The sorted elements are : ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);

	getch();
}