// Convert infix expression to postfix expression

// Algorithm
/*
1. start
2. read infix expression
3. repeat steps 4 to 7 until the end of the infix expression
4. if charector is operand, print charector
5. else if charector is left parenthesis, push to stack
6. else if charector is right parenthesis,
	 6.1. pop charector from stack and add it to x
	 6.2. while x not equal to left parenthesis,
			6.2.1. print x
			6.2.2. pop charector from stack and add it to x
7. else,
	 7.1. while priority of top item in stack > priority of charector,
			7.1.1. print popped item
	 7.2 push charector to stack
8. while stack is not empty,
	 8.1. print popped item
9. stop
*/

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

int main()
{
	char exp[20];
	char *e, x;
	printf("Enter the expression :: ");
	scanf("%s", exp);
	e = exp;
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
}

// expected output
/*
Enter the expression :: a-(b*c-d)/e
abc*d-e/-
*/