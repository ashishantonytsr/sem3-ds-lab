// Bubble Sort

/*
1. Start
2. read N as number of elements and read array ARR with N elements
3. set I=0
4. while I<N, repeat steps 5 to 7
5. set J=0
6. while J<N-1, repeat step 6
	 6.1. if ARR[J] >= ARR[J+1], swap ARR[J] & ARR[J+1]
	 6.2. increment J by 1
7. increment I by 1
8. stop
*/

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

