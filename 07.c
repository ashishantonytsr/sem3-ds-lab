// Creation of singly linked list

// Algorithm
/*
1. start
2. create a self referential structure for the node with members :
	integer DATA and a pointer NEXT pointing to the same structure
3. create a node pointer HEAD and set as NULL
4. For inserting node at the front of the list
	4.1. read the item to be inserted as ITEM
	4.2. create node NEW_NODE and allocate memory for the node
	4.3. set NEW_NODE->DATA as ITEM
	4.4. set NEW_NODE->NEXT as HEAD
	4.5. set HEAD as NEW_NODE
	4.6. return HEAD
5. For printing the linked list
	5.1. create node TEMP and assign HEAD to it
	5.1. while TEMP is not NULL, repeat steps 5.2 & 5.3
	5.2. print TEMP->DATA
	5.3. set TEMP as TEMP->NEXT
	5.4. return
6. stop
 */

#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node node;

void print_list(node *head)
{
	printf("|HEAD|-> ");
	while (head)
	{
		printf("%d-> ", head->data);
		head = head->next;
	}
	printf("|NULL|\n");
}

void insert_front(node **head, int value){
	node *new_node = NULL;
	new_node = (node *)malloc(sizeof(node));

	new_node->data = value;
	new_node->next = *head;
	*head = new_node;
}

void main()
{
	int n, i, data;
	struct node *head = NULL;

	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter element %d : ", i + 1);
		scanf("%d", &data);
		insert_front(&head, data);
	}
	printf("\nList: ");
	print_list(head);
}

// expected output
/*
Enter number of elements: 4
Enter element 1 : 21
Enter element 2 : 20
Enter element 3 : 11
Enter element 4 : 09

List: |HEAD|-> 9-> 11-> 20-> 21-> |NULL|
*/
