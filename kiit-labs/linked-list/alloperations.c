//Linked list operations in C

#include <stdio.h>
#include <stdlib.h>

// create a node
struct Node 
{
  int data;
  struct Node* next;
};

//inserting a node at the beginning
void insertAtBeginning(struct Node** head_ref, int new_data) 
{
  //allocating  memory to the node
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

  //inserting the data to the node
  new_node->data = new_data;

  new_node->next = (*head_ref);

  //moving head to a new node
  (*head_ref) = new_node;
}

//inserting a node after a node
void insertAfter(struct Node* prev_node, int new_data) 
{
  if (prev_node == NULL) 
  {
  printf("the given previous node cannot be NULL");
  return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

//inserting a node at the end
void insertAtEnd(struct Node** head_ref, int new_data) 
{
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *head_ref; /* used in step 5*/

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL) 
  {
    *head_ref = new_node;
    return;
  }

  while (last->next != NULL) last = last->next;

  last->next = new_node;
  return;
}

//deleting a node
void deleteNode(struct Node** head_ref, int key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  //find the key to be deleted
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }

  //if the key is not present
  if (temp == NULL) return;

  //remove the node
  prev->next = temp->next;

  free(temp);
}

//searching a node in the linked list
int searchNode(struct Node** head_ref, int key) 
{
  struct Node* current = *head_ref;

  while (current != NULL) {
  if (current->data == key) return 1;
  current = current->next;
  }
  return 0;
}

//sorting the linked list
void sortLinkedList(struct Node** head_ref) 
{
  struct Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
  return;
  } else {
  while (current != NULL) {
    // index points to the node next to current
    index = current->next;

    while (index != NULL) 
    {
    if (current->data > index->data) 
    {
      temp = current->data;
      current->data = index->data;
      index->data = temp;
    }
    index = index->next;
    }
    current = current->next;
  }
  }
}

//printing the linked list
void printList(struct Node* node) 
{
  while (node != NULL) 
  {
   printf(" %d ", node->data);
   node = node->next;
  }
}

//program execution begins from here
int main() {
  struct Node* head = NULL;

  insertAtEnd(&head, 1);
  insertAtBeginning(&head, 2);
  insertAtBeginning(&head, 3);
  insertAtEnd(&head, 4);
  insertAfter(head->next, 5);

  printf("Linked list: ");
  printList(head);

  printf("\nAfter deleting an element: ");
  deleteNode(&head, 3);
  printList(head);

  int item_to_find = 3;
  if (searchNode(&head, item_to_find)) {
  printf("\n%d is found", item_to_find);
  } else {
  printf("\n%d is not found", item_to_find);
  }

  sortLinkedList(&head);
  printf("\nSorted List: ");
  printList(head);
}