// Binary search

// Algorithm
/*
1. start
2. read sorted items into array ARR
3. read the item to be searched as ITEM
4. set BEG as index of first element and END as index of last element
5. if BEG>END,
	 6.1. print "ITEM NOT FOUND", goto step 10
6. compute MID as floor value of (BEG+END)/2
7. if ITEM = ARR[MID]
	 7.1. print MID+1
8. else if ITEM < ARR[MID]
	 8.1. set END as MID-1
	 8.2. goto step 5
9. else
	 9.1. set BEG as MID+1
	 9.2. goto step 5
10. stop
*/

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