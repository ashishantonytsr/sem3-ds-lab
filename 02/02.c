// Search in 2D array

#include <stdio.h>
void main()
{
	int a[20][20], i, j, r, c, item;
	// clrscr();

	printf("Enter the size of the row and column : ");
	scanf("%d %d", &r, &c);

	printf("Enter the elements\n");
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			scanf("%d", &a[i][j]);

	printf("Enter the item to search\n");
	scanf("%d", &item);
	for (i = 0; i < r; i++)
		for (j = 0; j < c; j++)
			if (a[i][j] == item)
			{
				printf("\nItem found at row %d column %d", i + 1, j + 1);
				getch();
				return;
			}
	printf("\nItem not found");
	getch();
}

// expected output
/*
Enter the size of the row and column : 2 2
Enter the elements
4 5
6 7
Enter the item to search
6

Item found at row 2 column 1
*/