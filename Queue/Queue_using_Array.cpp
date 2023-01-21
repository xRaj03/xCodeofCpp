#include<bits/stdc++.h>

using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

/* Condition for the queue is empty
    Empty:
    If(front==rear)

    full:
    if(rear==size-1)

    
*/
void create(struct Queue *q, int size)
{
    q->size=size;
    q->front = q->rear =-1;
    q->Q = (int*)malloc(q->size*sizeof(int));
}

void enqueue(Queue*q, int x)
{
    // Condition to check if the queue is full or not

    if(q->rear==q->size-1)
        cout<<"Queue is full"<<endl;
    else
        q->rear++;
        q->Q[q->rear]=x;
    

}

int dequeue(struct Queue *q)
{
    // Intializing the variable x as -1 so that it does not point anywhere
    int x=-1;

    //Condition to check that , if the queue is already empty or not , 
    // bcz if the queue is already empty then we can't delete the element 
    // and it will throw an error 

    if(q->front==q->rear)
        cout<<"Queue is empty"<<endl;
    
    // Code to dequeue an element form the queue
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;

}

void display(struct Queue q)
{
    for(int i= q.front+1; i<=q.rear; i++)
        cout<<q.Q[i]<<endl;
}


int main(){

    struct Queue q;
    create(&q, 5);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    display(q);



    return 0;
}