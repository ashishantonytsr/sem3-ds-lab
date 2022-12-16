// Implement queue using linked list

// Algorithm
/*
1. start
2. create a self referential structure for the node with members :
	 integer DATA and a pointer NEXT pointing to the same structure
3. create a node pointer FRONT, REAR and set as NULL
4. For insertion (ENQUEUE)
	4.1. read item to be inserted as ITEM
	4.2. create node NEW_NODE & allocate memory
	4.3. set NEW_NODE->DATA as ITEM & NEW_NODE->NEXT as NULL
	4.4. if REAR is NULL, set FRONT & REAR as NEW_NODE
	4.5. else,
		4.5.1. set REAR->NEXT as NEW_NODE
		4.5.2. set REAR as NEW_NODE
	4.6. exit
5. For deletion (DEQUEUE)
	5.1. if FRONT is NULL, print "Queue Underflow", exit
	5.2. else, print FRONT->DATA as deleted item
	5.3. if FRONT equals to REAR, set FRONT & REAR as NULL
	5.4. else, FRONT as FRONT->NEXT
6. To display items in queue
	6.1. if FRONT is NULL, print "Queue is empty"
	6.2. else,
		6.2.1. create node ITER & assign FRONT to it
		6.2.2. while ITER is not NULL, repeat steps 6.2.3 & 6.2.4
		6.2.3. print ITER->DATA
		6.2.4. set ITER as ITER->NEXT
	6.3. exit
7. stop
 */

#include <stdio.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node node;
node *front = NULL;
node *rear = NULL;

void enqueue();
void dequeue();
void display();

void main()
{
	int choice;
	do
	{
		printf("\n\t Choose from Menu\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n--> ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("\nExiting..");
			break;
		}
	} while (choice < 4);

	getch();
}

void enqueue()
{
	int item;
	node *newNode;

	printf("Enter the item: ");
	scanf("%d", &item);
	newNode = (node *)malloc(sizeof(node));
	newNode->data = item;
	newNode->next = NULL;

	if (rear == NULL)
		front = rear = newNode;
	else
	{
		rear->next = newNode;
		rear = newNode;
	}
	printf("Item inserted successfully..!\n");
}

void dequeue()
{
	int item;
	if (front == NULL)
		printf("Queue Underflow\n");
	else
		printf("The element deleted is: %d\n", front->data);

	// deleting last element
	if (front == rear)
		front = rear = NULL;
	else
		front = front->next;
}

void display()
{
	node *iter;
	if (front == NULL)
		printf("Queue is Empty!\n");
	else
	{
		iter = front;
		printf("The elements in the Queue are : ");
		while (iter)
		{
			printf("%d ", iter->data);
			iter = iter->next;
		}
	}
}

// Expected output
/*
				 Choose from Menu
1.Enqueue
2.Dequeue
3.Display
4.Exit
--> 1
Enter the item:
12
Item inserted successfully..!

				 Choose from Menu
1.Enqueue
2.Dequeue
3.Display
4.Exit
--> 1
Enter the item:
23
Item inserted successfully..!

				 Choose from Menu
1.Enqueue
2.Dequeue
3.Display
4.Exit
--> 1
Enter the item:
34
Item inserted successfully..!

				 Choose from Menu
1.Enqueue
2.Dequeue
3.Display
4.Exit
--> 3
The elements in the Queue are : 12 23 34
				 Choose from Menu
1.Enqueue
2.Dequeue
3.Display
4.Exit
--> 2
The element deleted is: 12

				 Choose from Menu
1.Enqueue
2.Dequeue
3.Display
4.Exit
--> 3
The elements in the Queue are : 23 34
				 Choose from Menu
1.Enqueue
2.Dequeue
3.Display
4.Exit
--> 4

Exiting..
 */