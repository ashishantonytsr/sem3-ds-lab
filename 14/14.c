// Implement queue using linked list

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