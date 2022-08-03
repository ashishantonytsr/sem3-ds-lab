// Selection sort

/*
1. Start
2. read N as number of elements and read array ARR with N elements
3. set I=0
4. while I<N, repeat steps 5 to 8
5. set POS= I , J= I+1
6. while J<N, repeat step 6
	 6.1. if ARR[J] < ARR[POS], set POS= J
	 6.2. increment j by 1
7. if POS not equal to I, swap ARR[I] and ARR[POS]
8. increment i by 1
9. print ARR as sorted array
10. Stop
 */

#include <stdio.h>

int main()
{
	int a[30], n, i, j, pos, temp;
	printf("Enter number of elements: \n");
	scanf("%d", &n);
	printf("Enter %d Numbers: \n", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);

	for (i = 0; i < n; i++)
	{
		pos = i;
		for (j = i + 1; j < n; j++)
			if (a[pos] > a[j])
				pos = j;

		if (pos != i)
		{
			temp = a[i];
			a[i] = a[pos];
			a[pos] = temp;
		}
	}

	printf("Sorted Array : \n");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);

	getch();
	return 0;
}
