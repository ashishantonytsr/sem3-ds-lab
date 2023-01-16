// Implement stack using linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
} * TOP;
typedef struct node node;

void push(int item)
{
	node *newNode;
	newNode = (node *)malloc(sizeof(node));
	newNode->data = item;
	if (TOP == NULL)
		newNode->next = NULL;
	else
		newNode->next = TOP;
	TOP = newNode;
	printf("Item inserted successfully\n");
}

void pop()
{
	node *temp;
	if (TOP == NULL){
		printf("Stack UnderFlow..!\n"); return;
	}
	temp = TOP;
	TOP = TOP->next;
	printf("Popped item is %d.\n", temp->data);
	free(temp);
}

void display()
{
	node *temp;
	printf("\nSTACK\n|TOP|-> ");
	for(temp = TOP; temp != NULL; temp = temp->next)
		printf("%d-> ", temp->data);
	printf("|NULL|");
}

void main()
{
	int choice, item;
	// clrscr();

	do
	{
		printf("\nChoose from below\n1.Push\n2.Pop\n3.Display\n4.Exit\n--> ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("Enter the item to be inserted : ");
			scanf("%d", &item);
			push(item);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("\n Exit...");
		}
	} while (choice < 4);
	getch();
}

// Expected output
/*
Choose from below
1.Push
2.Pop
3.Display
4.Exit
--> 1
Enter the item to be inserted : 23
Item inserted successfully

Choose from below
1.Push
2.Pop
3.Display
4.Exit
--> 1
Enter the item to be inserted : 34
Item inserted successfully

Choose from below
1.Push

STACK
|TOP|-> 34-> 23-> |NULL|
Choose from below
1.Push
2.Pop
3.Display
4.Exit
--> 4

 Exit...
 */