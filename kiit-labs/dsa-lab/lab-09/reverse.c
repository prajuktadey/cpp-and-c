// Reverse a queue using stack

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct queue
{
    struct node *front;
    struct node *rear;
};

struct stackNode
{
    int data;
    struct stackNode *next;
};

struct stackNode *push(struct stackNode *top, int element);
struct queue *enQueue(struct queue *q, int num);
int deQueue(struct queue **q);
int pop(struct stackNode **s);

int main(void)
{
    struct queue *Q = NULL;

    printf("How many elements to be enqueued?\n");
    int i, x, y;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        printf("Enter element %d :", i + 1);
        scanf("%d", &y);
        Q = enQueue(Q, y);
        y = 0;
    }
    printer(Q);
    struct stackNode *S = NULL;

    while (Q->front != NULL)
        S = push(S, deQueue(&Q));

    Q = NULL;
    while (S != NULL)
        Q = enQueue(Q, pop(&S));

    printer(Q);
    return 0;
}

struct stackNode *push(struct stackNode *top, int element)
{
    struct stackNode *temp = (struct stackNode *)malloc(sizeof(struct stackNode));
    if (!temp)
    {
        printf("STACK OVERFLOW");
        return top;
    }
    temp->data = element;
    temp->next = top;
    return temp;
}

struct queue *enQueue(struct queue *q, int num)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;
    if (q == NULL)
    {
        q = (struct queue *)malloc(sizeof(struct queue));
        if (!q)
        {
            printf("OVERFLOW EXCEPTION");
            return NULL;
        }
        q->front = temp;
    }
    else
        q->rear->next = temp;
    q->rear = temp;
    return q;
}

int deQueue(struct queue **q)
{
    int x = (*q)->front->data;
    struct node *temp = (*q)->front;
    (*q)->front = (*q)->front->next;
    free(temp);
    return x;
}

int pop(struct stackNode **s)
{
    int x = (*s)->data;
    struct stackNode *temp = *s;
    *s = (*s)->next;
    free(temp);
    return x;
}

void printer(struct queue *q)
{
    struct node *x = q->front;
    while (x != NULL)
    {
        printf("%d ", x->data);
        x = x->next;
    }
    printf("\n");
}