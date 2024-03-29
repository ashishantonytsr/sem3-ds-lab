// Implement stack using array

#include <stdio.h>

int stack[20], top = -1, size;

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
	else{
		printf("STACK");
		for (i = top; i >= 0; i--)
			printf("\n   %d", stack[i]);
	}
}

int main()
{
	int choice;
	// clrscr();

	printf("Enter the size of the stack : ");
	scanf("%d", &size);
	do
	{
		printf("\nChoose from below \n\t1.Push \n\t2.Pop \n\t3.Display \n\t4.Exit \n\t-> ");
		scanf("%d", &choice);
		switch (choice){
			case 1: push(); break;
			case 2: pop(); break;
			case 3: display(); break;
			case 4: printf("Exit Point..."); break;
			default: printf("Invalid option..!"); break;
		}
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
Enter the value to be pushed: 12

				Pushed element : 12
Choose from below
				1.Push
				2.Pop
				3.Display
				4.Exit
				-> 1
Enter the value to be pushed: 23

				Pushed element : 23
Choose from below
				1.Push
				2.Pop
				3.Display
				4.Exit
				-> 1
Enter the value to be pushed: 34

				Pushed element : 34
Choose from below
				1.Push
				-> 3

	 23
	 12
Choose from below
				1.Push
				2.Pop
				3.Display
				4.Exit
				-> 4
Exit point...
*/