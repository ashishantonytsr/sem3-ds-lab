// Convert infix expression to postfix expression

#include <stdio.h>
#include <ctype.h>
char stack[20];
int top = -1;

void push(char x)
{
	stack[++top] = x;
}
char pop()
{
	if (top == -1)
		return -1;
	else
		return stack[top--];
}
int priority(char x)
{
	if (x == '(')
		return 0;
	if (x == '+' || x == '-')
		return 1;
	if (x == '*' || x == '/')
		return 2;
}

void main()
{
	char exp[20], *e, x;
	// clrscr();

	printf("Enter the expression :: ");
	scanf("%s", exp);
	e = exp;
	printf("Expression in postfix format : ");
	while (*e != '\0')
	{
		// operand
		if (isalnum(*e))
			printf("%c", *e);
		// left parenthesis
		else if (*e == '(')
			push(*e);
		// right parenthesis
		else if (*e == ')')
			while ((x = pop()) != '(')
				printf("%c", x);
		// operator
		else
		{
			while (priority(stack[top]) >= priority(*e))
				printf("%c", pop());
			push(*e);
		}
		e++;
	}
	// cleaning stack
	while (top != -1)
		printf("%c", pop());

	getch();
}

// expected output
/*
Enter the expression :: a-(b*c-d)/e
abc*d-e/-
*/