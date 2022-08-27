//iterative C program to reverse a linked list

#include <stdio.h>
#include <stdlib.h>

/* Link list node */
struct Node {
	int data;
	struct Node* next;
};

/*function to reverse the linked list */
static void reverse(struct Node** head_ref)
{
	struct Node* prev = NULL;
	struct Node* current = *head_ref;
	struct Node* next = NULL;
	while (current != NULL) {
		//store next
		next = current->next;

		//reverse current node's pointer
		current->next = prev;

		//move pointers one position ahead.
		prev = current;
		current = next;
	}
	*head_ref = prev;
}

/*function to push a node */
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

/*function to print linked list */
void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

int main()
{
	/*start with the empty list */
	struct Node* head = NULL;

	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 85);

	printf("Given linked list\n");
	printList(head);
	reverse(&head);
	printf("\nReversed Linked list \n");
	printList(head);
	getchar();
}
