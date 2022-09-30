#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node * next;
}*first = NULL, *second = NULL, *thired = NULL;

void create(int A[], int n){

    int i;
    struct Node *t, *last;
    first= (struct Node *) malloc (sizeof(struct Node));
    first-> data=A[0];
    first->next =NULL;
    last=first;

    for(i=1; i<n; i++){
        t=(struct Node *) malloc (sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }

}
void create2(int B[], int n){

    int i;
    struct Node *t, *last;
    second= (struct Node *) malloc (sizeof(struct Node));
    second-> data=B[0];
    second->next =NULL;
    last=second;

    for(i=1; i<n; i++){
        t=(struct Node *) malloc (sizeof(struct Node));
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }

}

void Concat(struct Node *p, struct Node *q)
{
    thired=p;

    while (p->next!=NULL)       
    {
        p=p->next;
    }
    p->next=q;
}

// Function to merge two linked list in a sorted way 

void merging(struct Node *p, struct Node *q)
{   
    struct Node *last;
    if(p->data< q->data)
    {
        thired=last=p;
        p=p->next;
        thired->next=NULL;
    }
    else{
        thired=last=q;
        q=q->next;
        thired->next=NULL;
    }
    while(p && q)
    {
        if(p->data < q->data)
        {
            last->next=p;
            last=q;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p)last->next=p;
    if(q)last->next=q;
}

void Display( struct Node *p){
    while (p!=NULL)
    {
        printf("%d " "", p->data);
        p=p->next;
    }
    
    
}


int main(){

    int A[]={10 ,20, 90, 4, 5};
    int B[]={15, 25, 30, 40, 50};

    create(A ,5);
    create2(B, 5);
    merging(first, second);
    Display(first);
    
    return 0;
}