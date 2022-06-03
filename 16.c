// Exchange sort

/*
1. Start
2. read N as number of elements and read array ARR with N elements
3. set I=0
4. while I<N, repeat steps 5 to 7
5. set J=I+1
6. while J<N, repeat step 6
	 6.1. if ARR[I] > ARR[J], swap ARR[I] & ARR[J]
	 6.2. increment J by 1
7. increment I by 1
8. print ARR as sorted array
9. stop
*/

#include <stdio.h>

void main()
{
	int array[5], i, j, temp, n;
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

	printf("\n Sorted Array is : \n");
	for (i = 0; i < n; i++)
		printf("%d\n", array[i]);
	getch();
}