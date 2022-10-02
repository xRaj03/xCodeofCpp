// Program to insert a node at any given index

#include <iostream>

using namespace std;

// Declaring the structure of the doubly linkelist
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;

} *first = NULL;


// Function to create the doubly linkedlist
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

// Funtion to display the doubly linkedlist 
void Display(struct Node *p)
{
    cout<<endl<<endl;
    while (p)
    {
        printf("%d", p->data);
        cout << " ";
        p = p->next;
    }
    printf("\n");
}

// Funtion to find the length of the list
int lenght(struct Node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;
    
    if(index<0 || index>lenght(p))
        return ;
    if(index==0)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
        t->data=x;
    }
    else{
       for(i=0; i<index-1; i++)
       {
        p=p->next;
       } 
       t=(struct Node *)malloc(sizeof(struct Node));
       t->data=x;
       t->prev=p;
       t->next=p->next;
       if(p->next)p->next->prev=t; p->next=t;

    }
}

// Driver Funtion
int main()
{

    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Insert(first, 3, 400);
    Display(first);

    return 0;
}