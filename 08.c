// Delete node from singly linked list

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
	// traversinh until node containing data
	while (iter->next && iter->next->data == data){
		temp = iter->next;
		iter->next = iter->next->next;
		free(temp);
		iter = iter->next;
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