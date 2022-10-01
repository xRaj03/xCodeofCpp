#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node * next;
}*Head;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    Head=(struct Node *)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=Head;
    last=Head;

    for(i=1; i<n; i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
void display(struct Node *h)
{
    do
    {
        printf("%d\n", h->data);
        h=h->next;
    } while (h!=Head);
    
}

void insert(int pos, int x)
{
    struct Node *t, *p;
    if(pos==0)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=x;
        if(Head==NULL)
        {
            Head=t;
            Head->next=Head;

        }
        else
        {
            p=Head;
            while(p->next!=Head)
            {
                p=p->next;
                p->next=t;
                t->next=Head;
                Head=t;
            }
        }
        
    }
    else{
            p=Head;
            for(int i=0; i<pos-1; i++)
            {
                p=p->next;

            }
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->next=p->next;
            p->next=t;
            

        }
}

int main(){

    int A[]={2,3,4,5,6};
    create(A, 5);
    
    insert(3, 45);
    display(Head);


    return 0;   
}