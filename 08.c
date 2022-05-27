// Delete node from singly linked list

// Algorithm
/*
1. start
2. create a self referential structure for the node with members:
	integer DATA and a pointer NEXT pointing to the same structure
3. create a node pointer HEAD and set as NULL
4. For inserting node at the front of the list
	4.1. read the item to be inserted as ITEM
	4.2. create node NEW_NODE and allocate memory for the node
	4.3. set NEW_NODE->DATA as ITEM
	4.4. set NEW_NODE->NEXT as HEAD
	4.5. set HEAD as NEW_NODE
5. For printing the linked list
	5.1. create node TEMP & assign HEAD to it
	5.2. while TEMP is not NULL, repeat steps 5.2 & 5.3
	5.3. print TEMP->DATA
	5.4. set TEMP as TEMP->NEXT
6. For deleting a node
	6.1. if HEAD is NULL, exit
	6.2. create node TEMP
	6.3. if HEAD->DATA is ITEM,
		6.3.1. set TEMP as HEAD
		6.3.2. set HEAD as HEAD->NEXT
		6.3.3. free memory allocated for TEMP
		6.3.4. exit
	6.4. create node ITER and assign HEAD to it
	6.5. while ITER->NEXT->DATA not equal to ITEM, repeat step 6.5.1
		6.5.1. set ITER as ITER->NEXT
	6.6. if ITER->NEXT is not NULL
		6.6.1. set TEMP as ITER->NEXT
		6.6.2. set ITER->NEXT as ITER->NEXT->NEXT
		6.6.3. free memory allocated for TEMP
	6.7. else, print "ITEM not found"
7. stop
 */

#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node node;

void print_list(node *head){
	printf("|HEAD| -> ");
	while (head){
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

void delete_node(node **head, int data){
	node *temp, *iter = *head;
	if (*head == NULL)
		return;
	
	// to delete first node
	if ((*head)->data == data){
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return;
	}
	// traversing until node containing data
	for (; iter->next && iter->next->data != data; iter = iter->next);

	// deleting node
	if (iter->next){
		temp = iter->next;
		iter->next = iter->next->next;
		free(temp);
		return;
	}
	printf("%d not found in the list.\n", data);
}

int main()
{
	int n , i, data;
	node *head = NULL;

	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		printf("Enter element %d : ", i+1);
		scanf("%d", &data);
		insert_front(&head, data);
	}

	printf("Initial List : ");
	print_list(head);

	printf("Enter the element to be deleted : ");
	scanf("%d", &data);
	delete_node(&head, data);

	printf("\nList after deletion : ");
	print_list(head);
	return 0;
}

// expected output
/*
Enter number of elements: 6  
Enter element 1 : 34
Enter element 2 : 54
Enter element 3 : 23
Enter element 4 : 7
Enter element 5 : 80
Enter element 6 : 26 
Initial List : |HEAD| -> 26-> 80-> 7-> 23-> 54-> 34-> |NULL|
Enter the element to be deleted : 7

List after deletion : |HEAD| -> 26-> 80-> 23-> 54-> 34-> |NULL|
*/