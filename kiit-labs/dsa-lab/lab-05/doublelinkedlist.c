//double linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head, *last;

void createList(int n)
{
    int i, data;
    struct node *newNode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        if(head != NULL)
        {
            printf("Enter data of head node: ");
            scanf("%d", &data);

            head->data = data;
            head->prev = NULL;
            head->next = NULL;

            last = head;

            //create the rest of the nodes
            for(i=2; i<=n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));

                if(newNode != NULL)
                {
                    printf("Enter data of %d node: ", i);
                    scanf("%d", &data);

                    newNode->data = data;
                    newNode->prev = last; //link new node with the previous node
                    newNode->next = NULL;

                    last->next = newNode; //link previous node with the new node
                    last = newNode; //make new node as last/previous node
                }
                else
                {
                    printf("Unable to allocate memory.");
                    break;
                }
            }

            printf("\nDoubly linked list created successfully.\n");
        }
        else
        {
            printf("Unable to allocate memory");
        }
    }
}

void display()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        printf("\n\nData in the list: \n");

        while(temp != NULL)
        {
            printf("Data of %d node = %d\n", n, temp->data);
            n++;
            //move the current pointer to next node
            temp = temp->next;
        }
    }
}

int main()
{
    int n;
    head = NULL;
    last = NULL;
    
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    createList(n);
    display();

}

