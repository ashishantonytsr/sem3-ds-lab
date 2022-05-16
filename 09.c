// Creation of doubly linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;
} * head, *last;

void createList(int n);
void displayListFromFirst();
void displayListFromEnd();

int main()

{
	int n, choice;
	head = NULL;
	last = NULL;
	printf("Enter the number of nodes : ");
	scanf("%d", &n);

	createList(n);
	printf("\n\t1. Display list from First\n\t2. Display list from Last\n\t-> ");
	scanf("%d", &choice);
	if (choice == 1)
		displayListFromFirst();
	else if (choice == 2)
		displayListFromEnd();

	return 0;
}

void createList(int n)
{
	int i, data;
	struct node *newNode;

	if (n >= 1)
	{
		head = (struct node *)malloc(sizeof(struct node));
		if (head == NULL)
		{
			printf("Unable to allocate memory...");
			return;
		}
		printf("Enter value at node 1 : ");
		scanf("%d", &data);

		head->data = data;
		head->prev = NULL;
		head->next = NULL;
		last = head;

		for (i = 2; i <= n; i++)
		{
			newNode = (struct node *)malloc(sizeof(struct node));
			if (newNode != NULL)
			{
				printf("Enter value at node %d : ", i);
				scanf("%d", &data);

				newNode->data = data;
				newNode->prev = last;
				newNode->next = NULL;
				last->next = newNode;
				last = newNode;
			}
		}
		printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
	}
}

void displayListFromFirst()
{
	struct node *temp;

	if (head == NULL)
		printf("List is empty.");
	else
	{
		printf("\nLIST : ");
		for (temp = head; temp != NULL; temp = temp->next)
			printf(" %d ->", temp->data);
		printf(" NULL");
	}
}

void displayListFromEnd()
{
	struct node *temp;
	if (last == NULL)
		printf("List is empty.");
	else
	{
		printf("\nLIST : ");
		for (temp = last; temp != NULL; temp = temp->prev)
			printf(" %d ->", temp->data);
		printf(" NULL");
	}
}

// expected output
/*
Enter the number of nodes : 4
Enter value at node 1 : 4
Enter value at node 2 : 5
Enter value at node 3 : 6
Enter value at node 4 : 7

DOUBLY LINKED LIST CREATED SUCCESSFULLY

				1. Display list from First
				2. Display list from Last
				-> 2

LIST :  7 -> 6 -> 5 -> 4 -> NULL
*/