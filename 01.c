// Reverse of a string using pointer

// Algorithm
/*
1. start
2. declare arrays str, rev & pointers strptr, revptr
3. assign *strptr = str and *revptr = rev
4. read the string as str
5. set i = -1
6. while *strptr not equal to NULL
	6.1. increment strptr by  1
	6.2. increment i by 1
7. while i>=0
	7.1. decrement strptr by 1
	7.2. set *revptr = *strptr
	7.3. increment revptr by 1
	7.4. decrement i by 1
8. print rev as reversed string
9. stop
*/

#include <stdio.h>
void main()
{
	int i = -1;
	char str[200], rev[200];
	char *strptr = str;
	char *revptr = rev;
	// clrscr();

	printf("Enter the string : ");
	scanf("%s", str);

	for (; *strptr != NULL; ++i) strptr++;

	for (; i >= 0; --i){
		strptr--;
		*revptr = *strptr;
		*revptr++;
	}

	printf("Reverse of the string is %s", rev);
	getch();
}

// expected output
/*
Enter the string : hello
Reverse of the string is olleh
*/