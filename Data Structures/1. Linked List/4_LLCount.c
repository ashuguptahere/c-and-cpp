#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first;

void create(int A[], int n)
{
    struct Node *p, *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1; i<n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *n)
{
    if(n)
    {
        printf("%d ", n->data);
        display(n->next);
    }
}

int count(struct Node *p)
{
    int count = 0;
    while(p)
    {
        count++;
        p = p->next;
    }
    return count;
}

int main()
{
    int A[] = {1,2,3,4,5};
    create(A, 5);
    display(first);
    printf("\nNumber of node is: %d", count(first));
    return 0;
}