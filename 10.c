// Implement stack using array

#include <stdio.h>

const int size = 10;
int stack[size], top = -1;
void push()
{
	int item;
	if (top < size - 1)
	{
		printf("Enter the value to be pushed: ");
		scanf("%d", &item);
		stack[++top] = item;
		printf("\n\tPushed element : %d", stack[top]);
	}
	else
		printf("\n\n\tStack overflow!");
}
void pop()
{
	if (top != -1)
		printf("\n\tPopped element : %d", stack[top--]);
	else
		printf("\n\n\tStack underflow!");
}
void display()
{
	int i;
	if (top == -1)
		printf("\n Stack is empty!");
	else
		for (i = top; i >= 0; i--)
			printf("\n   %d", stack[i]);
}

int main()
{
	int n, choice;
	printf("Enter the size of the stack : ");
	scanf("%d", &n);
	do
	{
		printf("\nChoose from below \n\t1.Push \n\t2.Pop \n\t3.Display \n\t4.Exit \n\t-> ");
		scanf("%d", &choice);
		(choice == 1)		? push()
		: (choice == 2) ? pop()
		: (choice == 3) ? display()
		: (choice == 4) ? printf("Exit point...")
										: printf("Invalid option!");
	} while (choice != 4);
	getch();
	return 0;
}

// expected output
/*
Enter the size of the stack : 3

Choose from below
				1.Push
				2.Pop
				3.Display
				4.Exit
				-> 1
Enter the value to be pushed: 4

				Pushed element : 4
Choose from below
				1.Push
				2.Pop
				3.Display
				4.Exit
				-> 3

 STACK
	4
Choose from below
				1.Push
				2.Pop
				3.Display
				4.Exit
				-> 2

				Popped element : 4
Choose from below
				1.Push
				2.Pop
				3.Display
				4.Exit
				-> 4

Exit point...
*/