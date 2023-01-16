// Binary search

#include <stdio.h>

int binary_search(int arr[], int beg, int end, int item)
{
	int mid;
	if (beg > end)
		return -1;
	mid = (beg + end) / 2;
	if (item == arr[mid])
		return mid + 1;
	else if (item < arr[mid])
		binary_search(arr, beg, mid - 1, item);
	else
		binary_search(arr, mid + 1, end, item);
}

void main()
{
	int a[20], n, item, i, loc;
	// clrscr();
	
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter elements of the array in sorted form \n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Enter the item to be searched: ");
	scanf("%d", &item);

	loc = binary_search(a, 0, n - 1, item);
	(loc != -1) ? printf("\nItem FOUND at location %d\n", loc)
							: printf("\nItem NOT FOUND");
	getch();
}

// expected output
/*
Enter the size of array: 6
Enter elements of the array in sorted form 
2 4 5 8 9 11
Enter the item to be searched: 9

Item FOUND at location 5
*/
