#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

typedef struct List
{
    Node *head;
    int count;
} List;

void init(List *l);
void add(List *l, int value);
Node *access(List *l, int count);
void delete (List *l, int count);

int main()
{
    int value;
    int i;
    List *l;
    init(l);
    for (i = 0; i < 5; i++)
    {
        printf("something\n");
        scanf("%d", &value);
        add(l, value);
    }
    printf("%d\n", access(l, i)->value);
}

void init(List *l)
{
    l->head = NULL;
    l->count = 0;
}

void add(List *l, int value)
{
    int i;
    Node *tmpNode;
    Node *newNode = malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->value = value;
    if (l->count == 0)
    {
        l->head = newNode;
    }
    else
    {
        tmpNode = l->head;
        for (i = 2; i < l->count; i++)
        {
            tmpNode = tmpNode->next;
        }
        tmpNode->next = newNode;
    }
    l->count++;
}

Node *access(List *l, int count)
{
    int i;
    Node *tmpNode;
    if (l->count < count)
    {
        return NULL;
    }
    else
    {
        tmpNode->next = l->head;
        for (i = 1; i < count; i++)
        {
            tmpNode = tmpNode->next;
        }
        return tmpNode;
    }
}

void delete (List *l, int count)
{
    int i;
    Node *tmpNode;
    if (l->count < count)
    {
        return;
    }
    else
    {
        tmpNode->next = l->head;
        for (i = 2; i < count; i++)
        {
            tmpNode = tmpNode->next;
        }
        free(tmpNode->next);
        tmpNode->next = NULL;
        return;
    }
}