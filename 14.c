// Implement queue using linked list

#include <stdio.h>

typedef struct node
{
	int data;
	struct node *link;
} n;
n *front = NULL;
n *rear = NULL;

void enqueue();
void dequeue();
void display();

void main()
{
	int n;
	printf("\t Choose from Menu\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
	do
	{
		printf("Enter your Choice:\n");
		scanf("%d", &n);
		switch (n)
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
			printf("\nExit:");
			break;
		}
	} while (n != 4);

	getch();
}

void enqueue()
{
	int item;
	n *temp;

	printf("Enter the item:\n");
	scanf("%d", &item);
	temp = (n *)malloc(sizeof(n));
	temp->data = item;
	temp->link = NULL;
	if (rear == NULL)
	{
		front = temp;
		rear = temp;
	}
	else
	{
		rear->link = temp;
		rear = temp;
	}
}

void dequeue()
{
	int item;
	if (front == NULL)
		printf("Queue is Empty!\n");
	else
	{
		item = front->data;
		printf("The element deleted is: %d\n", item);
	}
	if (front == rear)
	{
		front = NULL;
		rear = NULL;
	}
	else
		front = front->link;
}

void display()
{
	n *ptr;
	if (front == NULL)
		printf("Queue is Empty!\n");
	else
		ptr = front;
	printf("The elements of the Queue are: ");
	while (ptr != NULL)
	{
		printf("%d\t", ptr->data);
		ptr = ptr->link;
	}
}