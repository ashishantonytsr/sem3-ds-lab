// Search in 2D array

// Algorithm
/*
1. start
2. declare 2D array as a[20][20]
3. read the rows and cols as r & c
4. set i = 0
5. while i<r, repeat step 5
	5.1. set j = 0
	5.2. while j<c,
		5.2.1. read item a[i][j]
		5.2.1. increment j by 1
	5.3. increment i by 1
6. read the item to be searched as item
7. set i = 0
8. while i<r, repeat step 8
	8.1. set j = 0
	8.2. while j<c,
		8.2.1. if a[i][j] = item, print "Found", goto step 10
		8.2.2. increment j by 1
	8.3 increment i by 1
9. print "Not found"
10. stop

*/

#include <stdio.h>
void main()
{
	int a[20][20], i, j, r, c, item;
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
				return 0;
			}
	printf("\nItem not found");
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