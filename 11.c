// Implement stack using linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};
void main()
{
	struct node *p, *x, *head, *top;
	int choice, item, ditem;
	x = (struct node *)malloc(sizeof(struct node));
	x->data = -1;
	x->link = NULL;
	top = x;
	head = x;
	p = x;
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
	do
	{
		printf("\n Enter the choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("Enter the above: ");
			scanf("%d", &item);
			x = (struct node *)malloc(sizeof(struct node));
			x->data = item;

			x->link = NULL;
			p->link = x;
			p = x;
			top = x;
			break;

		case 2:
			if (top->data == -1)
				printf("Stack is empty!");
			else
			{
				p = head;
				while (p->link != top)
					p = p->link;
				ditem = top->data;
				top = p;
				top->link = NULL;
				free(p->link);
				printf("Popped item is: %d", ditem);
			}
			break;

		case 3:
			if (top->data == -1)
				printf("\n Stack is Empty!");
			else
			{
				printf("Stack Listed is: ");
				p = head;
				p = p->link;
				while (p->link != NULL)
				{
					printf("%d", p->data);
					p = p->link;
				}
				printf("%d", p->data);
			}
			break;

		case 4:
			printf("\n Exit...");
		}
	} while (choice < 4);

	getch();
}