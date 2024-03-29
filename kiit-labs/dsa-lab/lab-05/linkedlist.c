#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *head;
};

//creating a node
struct node *create(struct node *head)
{
    struct node *p, *q;
    p = NULL;
    q = NULL;
    int n, i;
    if (head == NULL)
    {
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            if (head == NULL)
            {
                //head node creation
                p = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter the value :\n");
                printf("\n[%d]Element: ", i);
                scanf("%d", &p->data);
                p->next = NULL;
                head = p;
            }
            else
            {
                //the rest of the nodes
                q = (struct node *)malloc(sizeof(struct node));
                printf("\n[%d]Element: ", i);
                scanf("%d", &q->data);
                q->next = NULL;
                p->next = q;
                p = q;
            }
        }
        printf("\nThe list is created.\n");
    }
    else
    {
        printf("\nThe list is already created.\n");
    }

    return head; //returning the linked list
}

//traversing a list
void traversal(struct node *head)
{
    int i = 0;
    printf("\nGiven linked list:\n");
    struct node *p = head;
    while (p != NULL)
    {
        printf("\n[%d]Element: %d", i, p->data);
        p = p->next;
        i++;
    }
}

//insert at the beginning
struct node *insertatbeg(struct node *head)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node)); //node creation
    printf("\nEnter the element you want to insert at the beginning: ");
    scanf("%d", &p->data); //data allocation
    p->next = head; //the new node is pointing to the next node
    return p;
}

//insert at the end
struct node *insertatend(struct node *head)
{
    int data;
    printf("\nEnter the element you want to insert at the end:  ");
    scanf("%d", &data);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    ptr->data = data;
    return head;
}

//insert at a certain position
struct node *insertatindex(struct node *head)
{
    int data, index;
    printf("\nEnter the element and the index for insertion: ");
    scanf("%d %d", &data, &index);
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;
    return head;
}

//delete at the beginning 
struct node *deleteatbeg(struct node *head)
{
    struct node *p = head;
    head = head->next;
    free(p);
    return head;
}

//delete at the end
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

//delete at a certain position
struct node *deleteatindex(struct node *head)
{
    int index;
    printf("\nEnter the index you want to delete: ");
    scanf("%d", &index);
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    struct node *q = p->next;
    p->next = q->next;
    free(q);
    return head;
}

//count the number of nodes
int count(struct node *head)
{
    struct node *p = head;
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

//search for an element in the linked list
void search(struct node *head)
{
    struct node *p = head;
    int ele, n = 0;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &ele);
    while (p != NULL)
    {
        if (ele == p->data)
        {
            n = 1;
        }
        p = p->next;
    }

    if (n == 1)
    {
        printf("\nElement is present in the given linked list.");
    }
    else
    {
        printf("\nElement is NOT present in the given linked list.");
    }
}

//display the linked list
void display(struct node *temp)
{
    if (temp != NULL)
    {
        display(temp->next);
        printf("%d\t", temp->data);
    }
}

//menu driven program for single list
int main()
{
    struct node *head = NULL;
    int ch, x;
    printf("\nEnter your choice: \n");
    printf("\n1: To create a list.");
    printf("\n2: To traverse the list.");
    printf("\n3: To insert the node at the beginning.");
    printf("\n4: To insert the node at the end.");
    printf("\n5: To insert the node at any position.");
    printf("\n6: To delete the node at the beginning.");
    printf("\n7: To delete the node at the end.");
    printf("\n8: To delete the node at any position.");
    printf("\n9: To count the total number of nodes.");
    printf("\n10: To search an element from the list.");
    printf("\n11: To reverse the linked list.");
    printf("\n12: Exit.");

    while (ch != 12)
    {
        printf("\n\nEnter a number: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            head = create(head);
            traversal(head);
            break;
        }
        case 2:
        {
            traversal(head);
            break;
        }
        case 3:
        {
            head = insertatbeg(head);
            traversal(head);
            break;
        }
        case 4:
        {
            head = insertatend(head);
            traversal(head);
            break;
        }
        case 5:
        {
            head = insertatindex(head);
            traversal(head);
            break;
        }
        case 6:
        {
            head = deleteatbeg(head);
            traversal(head);
            break;
        }
        case 7:
        {
            head = deleteatend(head);
            traversal(head);
            break;
        }
        case 8:
        {
            head = deleteatindex(head);
            traversal(head);
            break;
        }
        case 9:
        {
            printf("\nThe total number of nodes is %d", count(head));
            break;
        }
        case 10:
        {
            search(head);
            break;
        }
        case 11:
        {
            display(head);
            break;
        }
        case 12:
        {
            printf("\nExited.\n");
            break;
        }
        default:
        {
            printf("\nInvalid choice.\n");
            break;
        }
        }
    }

    head = create(head);
    traversal(head);

end:
    return 0;
}