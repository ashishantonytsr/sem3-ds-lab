// Creation of singly linked list

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
