#include<bits/stdc++.h>

using namespace std;

struct Queue{

    int front, rear, cap;
    int* queue;
    Queue(int c)
    {
        cap=c;
        front=rear=0;
        queue = new int[cap];
    }

    // Funtion on "Queue" data structure\

    bool isFull() { return (cap == rear); }
    bool isEmpty(){ return (rear==0);}

    int getFront()
    {
        if(isEmpty())
            return -1;
        else
            return front;
        
    }

    int getRear()
    {
        if(isEmpty())
            return -1;
        else
            return (front + rear -1)%cap;
        
    }
    void enqueue(int x)
    {
        if(isFull())
            return ;
        int rear = getRear();
        rear=(rear+1)%cap;
        queue[rear]=x;
        rear ++;
    }

    void dequeue()
    {
        if(isEmpty())
            return;
        front = (front+1)%cap;
        rear--;
    }
};




int main(){

    

    return 0;
}