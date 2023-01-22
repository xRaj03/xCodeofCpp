#include<bits/stdc++.h>

using namespace std;

class Queue{

    int front;
    int rear;
    int size;
    int *Q;

    public:
    Queue(){ front=rear=-1; size=10; Q = new int[size];}
    Queue(int size){ front=rear=-1; this->size=size; Q=new int[this->size];}

    // Member funtion that will be used in this Queue
    // Member funtion can be accessed by using (object.member_funtion())
    void enqueue(int x);
    int dequeue();
    void display();
};

void Queue::enqueue(int x)
{
    if(rear==size-1)
        cout<<"Queue is Full"<<endl;
    else
        rear++;
        Q[rear]=x;
}

int Queue::dequeue()
{
    int x=-1;
    if(front==rear)
        cout<<"Queue is empty"<<endl;
    else    
        x=Q[front];
        front++;
    return x;
}

void Queue::display()
{
    for(int i=front; i<rear; i++)
        cout<<Q[i]<<endl;
}

int main(){

    Queue q(5);
    
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    return 0;
}