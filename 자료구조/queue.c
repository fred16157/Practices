#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

typedef struct Queue
{
    Node *top;
    Node *bottom;
    int count;
} Queue;

void placeQueue(Queue *q, int value);
int pop(Queue *q);
void init(Queue *q);

int main()
{
    int i, value;
    Queue *q;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &value);
        placeQueue(q, value);

    }

    printf("%d\n", pop(q));
}

void init(Queue *q)
{
    q->top = NULL;
    q->bottom = NULL;
    q->count = 0;
}

void placeQueue(Queue *q, int value)
{
    Node *newNode = malloc(sizeof(Node));
    newNode->value = value;

    newNode->next = NULL;
    if (q->count == 0)
    {
        q->top = newNode;
    }
    else
    {
        q->bottom->next = newNode;
    }
    q->count++;
}

int pop(Queue *q)
{
    int value = 0;
    Node *tmpNode;
    if (q->count == 0)
    {
        return value;
    }
    tmpNode = q->top;
    value = tmpNode->value;
    q->top = tmpNode->next;
    q->count--;
    return value;
}