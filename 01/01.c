// Reverse of a string using pointer

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

	for ( ; *strptr != NULL; i++ ) strptr++;
	for ( strptr--; i >= 0; i--, strptr--, *revptr++ )
		*revptr = *strptr;

	printf("Reverse of the string is %s", rev);
	getch();
}

// expected output
/*
Enter the string : hello
Reverse of the string is olleh
*/