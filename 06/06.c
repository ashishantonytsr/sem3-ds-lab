// Sparse matrix

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
			scanf("%d", &S[i][j]);


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
		for (j = 0; j < k; j++)
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