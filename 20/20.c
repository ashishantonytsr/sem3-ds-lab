// Bubble Sort

#include <stdio.h>

void swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

void main()
{
	int n, array[30], i, j, temp;
	printf("Enter the number of items : ");
	scanf("%d", &n);
	printf("Enter the elements \n");
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);

	for (i = 0; i < n; i++)
		for (j = 0; j < n - 1; j++)
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);

	printf("Sorted elements: ");
	for (i = 0; i < n; i++)
		printf(" %d", array[i]);

	getch();
}

