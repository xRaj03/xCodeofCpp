#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node*next;
};

struct Queue
{
    Node*front, *rear;
    front=rear=NULL;
};

/* 
Logic behind empty and full Queue

Empty:
    if(front == NULL)

Full:
    Node*t = new Node
    if(t==new Node)
*/

void enqueue(int x)
{
    Node *t = new Node;
    if(t==NULL)
        cout<<"Queue is full"<<endl;
    
    else
        t->data=x;
        t->next=NULL;
        if(front==NULL)
            front=rear=t;
        else
            rear=t;
}

int main(){

    

    return 0;
}