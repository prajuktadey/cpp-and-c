//deletion of the linked list

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void linkedlistTraversal(struct Node * ptr)
{
    while(ptr!=NULL)
    {
     printf("%d\n", ptr->data);
     ptr=ptr->next;
    }
}

struct Node * DeleteFirst(struct Node *head)
{
    struct Node *ptr= head;
    head=head->next;
    free(ptr);

    return head;
}

struct Node * DeleteBetween(struct Node *head, int index)
{
    struct Node *p= head;
    struct Node *q=head->next;

    for(int i=0; i<index-1; i++)
    {
        p=p->next;
        q=q->next;
    }

    p->next=q->next;
    free(q);
    return head;
}


int main()  
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //allocated memory for nodes in the heap
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    //linking of first and second
    head->data=1;
    head->next=second;

    //linking of second and third
    second->data=3;
    second->next=third;

    //linking third and fourth 
    third->data=5;
    third->next=fourth;

    //fourth node
    fourth->data=7;
    fourth->next=NULL;

    printf("Linked list before deletion: \n");
    linkedlistTraversal(head);

    head= DeleteBetween(head, 2);
    printf("Linked list after deletion: \n");
    linkedlistTraversal(head);

    return 0;
}

