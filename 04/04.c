// Append two arrays

#include <stdio.h>
void main()
{
	int n1, n2, i, j, a[10], b[10], k;
	// clrscr();
	
	printf("Enter the size of 1st Array: ");
	scanf("%d", &n1);
	printf("Enter the elements of 1st Array: ");
	for (i = 0; i < n1; i++)
		scanf("%d", &a[i]);

	printf("Enter the size of 2nd Array: ");
	scanf("%d", &n2);
	printf("Enter the elements of 2nd Array: ");
	for (j = 0; j < n2; j++)
		scanf("%d", &b[j]);

	for (k = n1, j = 0; k < n1 + n2; k++, j++)
		a[k] = b[j];

	printf("\nThe appended Array is: ");
	for (i = 0; i < n1 + n2; i++)
		printf("%d ", a[i]);
	getch();
}

// expected output
/*
Enter the size of 1st Array: 3
Enter the elements of 1st Array: 3 4 5
Enter the size of 2nd Array: 4
Enter the elements of 2nd Array: 6 7 8 9

The appended Array is: 3 4 5 6 7 8 9
*/