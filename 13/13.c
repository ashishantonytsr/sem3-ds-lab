// Implement queue using array

#include <stdio.h>
#define SIZE 50
int Q[SIZE], rear = -1, front = -1;

void insert();
void delete ();
void display();

int main()
{
	int choice;
	do
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
			return 0;
			getch();
		default:
			printf("Wrong choice! \n");
		}
	} while (choice < 4);
	return 0;
}

void insert()
{
	int item;
	if (rear == SIZE - 1)
		printf("\n\tQueue Overflow! \n");
	else
	{
		if (front == -1)
			front++;
		printf("Enter the element to be inserted : ");
		scanf("%d", &item);
		Q[++rear] = item;
	}
}

void delete ()
{
	if (front == -1 || front > rear)
		printf("\n\tQueue Underflow! \n");
	else
		printf("Element deleted from queue is : %d\n", Q[front++]);
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
			printf("%d ", Q[i]);
		printf("\n");
	}
}

// Expected output
/*
Enter your choice
				1. Insert element to queue
				2. Delete element from queue
				3. Display elements in queue
				4. Exit
1
Enter the element to be inserted : 12
Enter your choice
				1. Insert element to queue
				2. Delete element from queue
				3. Display elements in queue
				4. Exit
1
Enter the element to be inserted : 23
Enter your choice
				1. Insert element to queue
				2. Delete element from queue
				3. Display elements in queue
				4. Exit
1
Enter the element to be inserted : 34
				2. Delete element from queue
				3. Display elements in queue
				4. Exit
3
QUEUE : 23 34 45
Enter your choice
				1. Insert element to queue
				2. Delete element from queue
				3. Display elements in queue
				4. Exit
4
 */