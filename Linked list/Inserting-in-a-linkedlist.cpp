// Inserting in the Linked list
#include<iostream>
using namespace std;

// Structure of the linked list

struct Node{
    int data;
    struct Node * next;
}*first = NULL;

// Funtion to create the linked list

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

// Funtion to insert the at first node of the linked list

void insert(struct Node *p)
{
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=10;
    t->next=first;
    first=t;
}

// Function to show the linked list after the insertion of the given data at the first
void Display( struct Node *p){
    while (p!=NULL)
    {
        printf("%d", p->data);
        p=p->next;
        cout<<" ";
    }
    
    
    
}



/* int Add(struct Node *p){

    int sum =0;
    while (p!= NULL)
    {
        sum=sum + p->data;
        p=p->next;
    }
    return sum;
    

} */
int main(){

    int A[]={1,2,3,4,5};

    create(A ,5);
    insert(first);
    Display(first);
    /* Add(first); */
    /* cout<<"\n"<<Add(first); */
    
    return 0;
}