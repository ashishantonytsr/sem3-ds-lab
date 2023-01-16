// Selection sort

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
