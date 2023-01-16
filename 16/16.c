// Exchange sort

#include <stdio.h>

void main()
{
	int array[50], i, j, temp, n;
	printf("Enter the limit: ");
	scanf("%d", &n);
	printf("Enter the Elements : ");
	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);

	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}

	printf("\n Sorted Array is : ");
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);
	getch();
}