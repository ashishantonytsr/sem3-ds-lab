// Implement queue using array

#include <stdio.h>
#include <stdlib.h>

#define MAX 50
int queue_array[MAX], rear = -1, front = -1;

void insert();
void delete ();
void display();
void main()
{
	int choice;
	while (1)
	{
		printf("Enter your choice \n");
		printf("\t1. Insert element to queue \n");
		printf("\t2. Delete element from queue \n");
		printf("\t3. Display elements in queue \n");
		printf("\t4. Exit \n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			insert();
			break;
		case 2:
			delete ();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(1);
			getch();
		default:
			printf("Wrong choice! \n");
		}
	}
}

void insert()
{
	int add_item;
	if (rear == MAX - 1)
		printf("\n\tQueue Overflow! \n");
	else
	{
		if (front == -1)
			front = 0;
		printf("Insert the element in queue : ");
		scanf("%d", &add_item);
		rear = rear + 1;
		queue_array[rear] = add_item;
	}
}

void delete ()
{
	if (front == -1 || front > rear)
	{
		printf("\n\tQueue Underflow! \n");
		return;
	}
	else
	{
		printf("Element deleted from queue is : %d\n", queue_array[front]);
		front = front + 1;
	}
}

void display()
{
	int i;
	if (front == -1 || front > rear)
		printf("\n\tQueue is empty! \n");
	else
	{
		printf("QUEUE : ");
		for (i = front; i <= rear; i++)
			printf("%d ", queue_array[i]);
		printf("\n");
	}
}