#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node * next;
}*first = NULL;

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
void Display( struct Node *p){
    while (p!=NULL)
    {
        printf("%d", p->data);
        p=p->next;
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
    Display(first);
    /* Add(first); */
    /* cout<<"\n"<<Add(first); */
    return 0;
}