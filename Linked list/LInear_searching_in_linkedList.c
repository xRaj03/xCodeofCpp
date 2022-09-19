// Linear searching in a linked List 
#include<stdio.h>
#include <stdlib.h>

// structure of the linked list
struct Node{
    int data;
    struct Node *next;

}*first=NULL;

// Function to create the linked list

void create(int A[], int n){
    int i;
    struct Node *t, *last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1; i<n; i++)
    {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last=t;
    }

}

// funtion to search / iterate the linked list

struct Node * search(struct Node *p, int key)
{
    while (p)
    {
        if(key==p->data)
        return (p);
        p=p->next;
    }
    printf("%d", &p);
    
}

int main(){

    int A[]={1,2,3,4,5};
    int z=4;
    create(A , 5);
    search(first, z);


    return 0;
}