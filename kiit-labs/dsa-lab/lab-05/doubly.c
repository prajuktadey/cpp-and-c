#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void forwardtraverse(struct node *head)
{
    int i = 0;
    struct node *p = head;
    while (p != NULL)
    {
        printf("\n[%d]Element: %d", i, p->data);
        p = p->next;
        i++;
    }
}

void backwardtraverse(struct node *head)
{
    int i = 4;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    while (p != NULL)
    {
        printf("\n[%d]Element: %d", i, p->data);
        p = p->prev;
        i--;
    }
}

void empty(struct node *head)
{
    if (head == NULL)
    {
        printf("\nThe list is empty.");
    }
    else
    {
        printf("\nThe list is NOT empty.");
    }
}

struct node *insertatbeg(struct node *head)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the elment you want to insert at the beginning: ");
    scanf("%d", &p->data);
    p->next = head;
    p->prev = NULL;
    head->prev = p;
    return p;
}

struct node *insertatend(struct node *head)
{
    struct node *p = head;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the element you want to insert at the end: ");
    scanf("%d", &ptr->data);
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;
    ptr->next = NULL;
    return head;
}

struct node *insertatindex(struct node *head)
{
    int data, index;
    printf("\nEnter the element and the index for insertion: ");
    scanf("%d %d", &data, &index);
    struct node *ptr, *q;
    ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    q = p->next;
    ptr->next = p->next;
    ptr->prev = p;
    p->next = ptr;
    ptr->data = data;
    q->prev = ptr;
    return head;
}

struct node *deleteatbeg(struct node *head)
{
    struct node *p = head;
    head = head->next;
    head->prev = NULL;
    free(p);
    return head;
}

struct node *deleteatend(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct node *deleteatpos(struct node *head)
{
    int i, index;
    struct node *q = head;
    printf("\nEnter the position you want to delete: ");
    scanf("%d", &index);
    if (index == 1)
    {
        head = q->next;
        free(q);
    }
    else
    {
        for (i = 1; i < index; i++)
        {
            q = q->next;
        }
        q->prev->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct node *head, *second, *third, *fourth, *fifth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter the value of 5 elements:\n");

    printf("\n[1]Element: ");
    scanf("%d", &head->data);
    head->prev = NULL;
    head->next = second;

    printf("\n[2] Element: ");
    scanf("%d", &second->data);
    second->prev = head;
    second->next = third;

    printf("\n[3] Element: ");
    scanf("%d", &third->data);
    third->prev = second;
    third->next = fourth;

    printf("\n[4] Element: ");
    scanf("%d", &fourth->data);
    fourth->prev = third;
    fourth->next = fifth;

    printf("\n[5] Element: ");
    scanf("%d", &fifth->data);
    fifth->prev = fourth;
    fifth->next = NULL;

    int ch;
    printf("\nEnter:\n");
    printf("\n1: To traverse forward.");
    printf("\n2: To traverse backward.");
    printf("\n3: To check if the list is empty.");
    printf("\n4: To insert the node at the beginning.");
    printf("\n5: To insert the node at the end.");
    printf("\n6: To insert the node at any position.");
    printf("\n7: To delete the node at the beginning.");
    printf("\n8: To delete the node at the end.");
    printf("\n9: To delete the node at any position.");
    printf("\n10: To delete a node for a given key.");
    printf("\n0: TO EXIT.");

    while (1)
    {
        printf("\n\nPRESS A BUTTON: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
        {
            printf("\nEXITED\n");
            goto end;
            break;
        }
        case 1:
        {
            forwardtraverse(head);
            break;
        }
        case 2:
        {
            backwardtraverse(head);
            break;
        }
        case 3:
        {
            empty(head);
            break;
        }
        case 4:
        {
            head = insertatbeg(head);
            forwardtraverse(head);
            break;
        }
        case 5:
        {
            head = insertatend(head);
            forwardtraverse(head);
            break;
        }
        case 6:
        {
            head = insertatindex(head);
            forwardtraverse(head);
            break;
        }
        case 7:
        {
            head = deleteatbeg(head);
            forwardtraverse(head);
            break;
        }
        case 8:
        {
            head = deleteatend(head);
            forwardtraverse(head);
            break;
        }
        case 9:
        {
            head = deleteatpos(head);
            forwardtraverse(head);
            break;
        }
        default:
        {
            printf("\nINVALID NUMBER.");
            break;
        }
        }
    }

end:
    return 0;
}