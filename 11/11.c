// Implement stack using linked list

// Algorithm
/*
1. start
2. create a self referential structure for the node with members :
	 integer DATA and a pointer NEXT pointing to the same structure
3. create a node pointer TOP and set as NULL
4. For insertion (PUSH)
	4.1. read item to be inserted as ITEM
	4.2. create node NEW_NODE & allocate memory
	4.3. set NEW_NODE->DATA as ITEM & NEW_NODE->NEXT as TOP
	4.4. set TOP as NEW_NODE
5. For deletion (POP)
	5.1. if TOP is NULL, print "Stack Underflow", exit
	5.2. create node TEMP and assign TOP to it
	5.3. set TOP as TOP->NEXT
	5.4. return TEMP->DATA & free memory allocated for TEMP
6. To print Stack
	6.1. create node TEMP and assign TOP to it
	6.2. while TEMP is not NULL
		6.2.1. print TEMP->DATA
		6.2.2. set TEMP as TEMP->NEXT
7. stop
*/

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