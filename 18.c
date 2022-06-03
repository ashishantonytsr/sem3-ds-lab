// Insertion Sort

// Algorithm
/* 
1. start
2. read N as number of items
3. read N items into the array ARR 
4. set I = 1
5. while I < N, repeat steps 5 to 9
6. set KEY = ARR[I]
7. set J = I
8. while J>0 and KEY<ARR[J-1], 
	8.1. set ARR[J] = ARR[J-1]
	8.2. decrement J by 1
9. set ARR[J] = KEY
10. increment I by 1
11. print ARR as sorted array
12. stop
*/

#include <stdio.h>

void InsertionSort(int a[], int n)
{
	int i, j, key;
	for (i = 1; i < n; i++)
	{
		key = a[i];
		// if the key is smaller than its predecessor,
		// compare it to elements before, until it is in sorted order
		for (j = i; j > 0 && key < a[j - 1]; j--)
			a[j] = a[j - 1]; // moving greater elements one position right
		a[j] = key;				 // adding the key to the sorted position
	}
}

void main()
{
	int i, n, a[10];
	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("Enter the elements :\n");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	InsertionSort(a, n);

	printf("The sorted elements are : ");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	getch();
}

// Expected output
/* 
Enter the number of elements : 6
Enter the elements :
23 54 21 13 18 26
The sorted elements are : 13 18 21 23 26 54
*/