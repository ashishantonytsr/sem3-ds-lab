// Sparse matrix

// Algorithm
/*
1. start
2. read number of rows and cols as R and C
3. initialize SIZE= 0, K= 0
3. read the elements to the matrix S
	 3.1. if element read is a non zero number, increment SIZE by 1
4. initialize sparse matrix M with order 3xSIZE
5. repeat step 6 until all the elements in the matrix S is visited
6. if current element is a non zero number,
	 6.1. set M[0][K] as row of the element
	 6.2. set M[1][K] as col of the element
	 6.3. set M[3][K] as the current element
	 6.4. increment K by 1
7. print matrix M as minimized matrix
8. stop
 */

#include <stdio.h>
void main()
{
	int S[10][10], m, n, i, j;
	int M[3][20], k = 0, size = 0;
	// clrscr();

	printf("Enter number of rows : ");
	scanf("%d", &m);
	printf("Enter number of cols : ");
	scanf("%d", &n);
	printf("Enter elements in the matrix \n ");
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			scanf("%d", &S[i][j]);
			if (S[i][j] != 0)
				size++;
		}

	printf("The matrix is \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf(" %d ", S[i][j]);
		printf("\n");
	}

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (S[i][j] != 0)
			{
				M[0][k] = i;
				M[1][k] = j;
				M[2][k] = S[i][j];
				k++;
			}

	printf("Triplet representation of the matrix is \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < size; j++)
			printf(" %d ", M[i][j]);
		printf("\n");
	}
	getch();
}

// expected output
/*
Enter number of rows : 5
Enter number of cols : 5
Enter elements in the matrix
 0 0 0 0 5 4 0 0 3 0 0 0 0 0 8 7 4 0 0 0 0 0 0 0 0
The matrix is
 0  0  0  0  5
 4  0  0  3  0
 0  0  0  0  8
 7  4  0  0  0
 0  0  0  0  0
Triplet representation of the matrix is
 0  1  1  2  3  3
 4  0  3  4  0  1
 5  4  3  8  7  4
*/