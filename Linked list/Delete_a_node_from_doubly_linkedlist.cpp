#include <iostream>

using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;

} *first = NULL;

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
void Display(struct Node *p)
{
    while (p)
    {
        cout << " ";
        printf("%d", p->data);
        p = p->next;
    }
    printf("\n");
}
int Lenght(struct Node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}
// Funtion to delete a node from any given index 
int Delete(struct Node *p, int index)
{
    int x=-1, i;
    if(index<1 || index>Lenght(p))
    {
        return -1;
    }
    else if(index==1) // Just an (=) can cost you about an hour so code precisely and don't get demotivated bcz these steps are going to make you a successful carrer 
    {
        first=first->next;
        if(first)
        {
            first->prev=NULL;
        }
        x=p->data;
        free (p);
    }
    else{
        for(i=0; i<index-1; i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next)
        {
            p->next->prev=p->prev;
        }
        x=p->data;
        free (p);
    }
    return x;
}
int main()
{

    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    // printf("\n Lenght is %d\n", Lenght(first));
    Delete(first,3);
    Display(first);

    return 0;
}