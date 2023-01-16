// Pattern matching algorithm

#include <stdio.h>

void pattern_match(char txt[], char pat[])
{
	int i, j, txtlen = strlen(txt), patlen = strlen(pat);
	for (i = 0; i <= txtlen - patlen; i++)
	{
		for (j = 0; j < patlen; j++)
		{
			if (txt[i + j] != pat[j])
				break;
			if (j == patlen - 1){
				printf("\nPattern found at index %d", i + 1);
				return;
			}
		}
	}
	printf("pattern not found.. :(");
}

void main()
{
	char txt[100], pat[100];
	// clrscr();

	printf("Enter the text : ");
	gets(txt);
	printf("Enter the pattern to check : ");
	gets(pat);
	pattern_match(txt, pat);
	getch();
}

// expected output
/*
Enter the text : Don Bosco
Enter the pattern to check : Bos

Pattern found at index 5
*/