#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node * next;
}*first=NULL;

void Create(int A[], int n){
    int i;
    struct Node *t, *last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    while (i<n)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }

    void Display(struct Node *p)
    {
        while (p)
        {
            printf("%d", p->data);
            p=p->next;
        }
        

    }
    
    int main{

        struct Node *temp;

        int A[]={1,2,3,4,5};

        Create(A,5);
        Display(first);

    return 0;
    }
}