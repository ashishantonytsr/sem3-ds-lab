// Pattern matching algorithm

// Algorithm
/*
1.  start
2.  read text as TXT & pattern to be searched as PAT
3.  compute length of TXT as TXTLEN & length of PAT as PATLEN
4.  set i=0
5.  while i <= TXTLEN-PATLEN, repeat steps 6 to 11
6.  set j=0
7.  while j < PATLEN, repeat steps 8 to 10
8.  if TXT[i+j] not equal to PAT[j], break
9.  if j=PATLEN-1, print i as index of pattern
10. increment j by 1
11. increment i by 1
*/

#include <stdio.h>
#include <string.h>

void pattern_match(char txt[], char pat[])
{
	int i, j, txtlen = strlen(txt), patlen = strlen(pat);
	for (i = 0; i <= txtlen - patlen; i++)
	{
		for (j = 0; j < patlen; j++)
		{
			if (txt[i + j] != pat[j])
				break;
			if (j == patlen - 1)
				printf("\nPattern found at index %d", i + 1);
		}
	}
}

void main()
{
	char txt[100], pat[100];
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