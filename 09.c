// Creation of doubly linked list

// Algorithm
/*
1. start
2. create a self referential structure for the node with members :
	integer DATA, pointers PREV & NEXT pointing to the same structure
3. create node pointers HEAD, LAST and set both as NULL
4. To insert first node,
	4.1. if HEAD is not NULL
	4.2. read item to be inserted as ITEM
	4.3. set HEAD->DATA as ITEM
	4.4. set HEAD->PREV and HEAD->NEXT as NULL
	4.5. set LAST as HEAD
5. To insert rest of the nodes,
	5.1. read item to be inserted as ITEM
	5.2. create node NEW_NODE as allocate memory
	5.2. if NEW_NODE is not NULL,
		5.3.1. set NEW_NODE->DATA as DATA
		5.3.2. set NEW_NODE->PREV as LAST
		5.3.3. set NEW_NODE->NEXT as NULL
		5.3.4. set LAST->NEXT as NEW_NODE
		5.3.5. set LAST as NEW_NODE
6. To print the linked list from first
	6.1. if HEAD is NULL, exit
	6.2. create node TEMP and assign HEAD to it
	6.3. while TEMP is not NULL, repeat steps 6.4 & 6.5
	6.4. print TEMP->DATA
	6.5. set TEMP as TEMP->NEXT
7. To print the linked list from last
	7.1. if HEAD is NULL, exit
	7.2. create node TEMP and assign LAST to it
	7.3. while TEMP is not NULL, repeat steps 7.4 & 7.5
	7.4. print TEMP->DATA
	7.5. set TEMP as TEMP->PREV
8. stop
 */

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

	return EXIT_SUCCESS;
}

void createList(int n)
{
	int i, data;
	struct node *newNode;

	if (n < 1)
		return;

	// inserting first node
	head = (struct node *)malloc(sizeof(struct node));
	if (head != NULL)
	{
		printf("Enter value at node 1 : ");
		scanf("%d", &data);

		head->data = data;
		head->prev = head->next = NULL;
		last = head;
	}
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

void displayListFromFirst()
{
	struct node *temp;
	if (head == NULL)
	{
		printf("List is empty.");
		return;
	}
	printf("\nLIST : ");
	for (temp = head; temp != NULL; temp = temp->next)
		printf(" %d ->", temp->data);
	printf(" NULL");
}

void displayListFromEnd()
{
	struct node *temp;
	if (last == NULL)
	{
		printf("List is empty.");
		return;
	}
	printf("\nLIST : ");
	for (temp = last; temp != NULL; temp = temp->prev)
		printf(" %d ->", temp->data);
	printf(" NULL");
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