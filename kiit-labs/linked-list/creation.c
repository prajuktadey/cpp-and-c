//creation of single linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    //allocated memory for nodes in the heap
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    //linking of first and second
    head->data=7;
    head->next=second;

    //linking of second and theird
    second->data=9;
    second->next=third;

    //third node
    third->data=11;
    third->next=NULL;
    
    return 0;
}

