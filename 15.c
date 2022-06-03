// Search a element in Binary Search Tree

// Algorithm
/* 
1. Start
2. Create self referential structure node with members : 
	integer DATA & pointers LEFT & RIGHT, pointing to nodes with same structure
3. Read values into the Binary Search Tree with root, ROOT
4. Read the item to be searched as ITEM
5. if ROOT is NULL, print "Not Found", goto step  9
6. if ROOT->DATA is equal to ITEM, print "Item Found", goto step 9
7. else if ITEM < ROOT->DATA, 
	7.1. Set ROOT as ROOT->LEFT, goto step 5
8. else 
	8.1. Set ROOT as ROOT->RIGHT, goto step 5
9. Stop
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node node;


node *insertion(node *root, int item)
{
	if (root == NULL)
	{
		node *newNode;
		newNode = (node *)malloc(sizeof(node));
		newNode->data = item;
		newNode->left = newNode->right = NULL;
		return newNode;
	}
	if (item < root->data)
		root->left = insertion(root->left, item);
	else
		root->right = insertion(root->right, item);
	return root;
}

void display(node *root)
{
	if (root == NULL)
		return;

	display(root->left);
	printf("%d ", root->data);
	display(root->right);
}

bool search(node *root, int data)
{
	if (root == NULL)
		return false;

	if (root->data == data)
		return true;
	else if (data < root->data)
		search(root->left, data);
	else
		search(root->right, data);
}

void main()
{
	int n,i, item;
	node *BST = NULL;

	printf("Enter the number of elements : ");
	scanf("%d", &n);
	printf("Enter the elements :: \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &item);
		BST = insertion(BST, item);
	}

	printf("Elements in BST inOrder:: \n");
	display(BST);

	printf("\n\nEnter the item to search: ");
	scanf("%d", &item);

	(search(BST, item)) ? printf("\nItem FOUND in the Binary Search Tree !!!") 
											:	printf("\nItem NOT FOUND in the Binary Search Tree :(");
	getch();
}

// expected output
/* 
Enter the number of elements : 5
Enter the elements :: 
56 76 34 8 23
Elements in BST inOrder::
8 23 34 56 76 

Enter the item to search: 23

Item FOUND in the Binary Search Tree !!!
 */