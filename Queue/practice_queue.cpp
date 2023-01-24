#include<bits/stdc++.h>

using namespace std;

class Node
{
    public:
    int data;
    Node*next;
    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

class Queue
{
    public:
    Node *front, *rear;
    Queue(){front=NULL, rear=NULL;}

    void enqueue(int x);
    int dequeue();
    void display();

    /* void enqueue(int x)
    {
        Node*t=new Node(x);
        if(t==NULL)
            cout<<"Queue is Full"<<endl;
        
        t->data=x;
        t->next=NULL;
        if(front==NULL)
            front=rear=t;
        else
            rear->next=t;
            rear=t;
    }

    int dequeue()
    {
        int x=-1;
        Node*p;
        if(front=NULL)
            cout<<"Queue is empty"<<endl;
        else
            p=front;
            front=front->next;
            x=p->data;
            free(p);
        return x;
    }

    void display()
    {
        Node *p = front;
        while (p)
        {
            cout << p->data << " ";
            p = p->next;
        }
    } */

};

void Queue::enqueue(int x)
{
    Node *t = new Node(x);
    if (t == NULL)
        cout << "Queue is Full" << endl;

    t->data = x;
    t->next = NULL;
    if (front == NULL)
        front = rear = t;
    else
        rear->next = t;
    rear = t;
}

int Queue:: dequeue()
{
    int x = -1;
    Node *p;
    if (front = NULL)
        cout << "Queue is empty" << endl;
    else
        p = front;
    front = front->next;
    x = p->data;
    free(p);
    return x;
}
void Queue:: display()
{
    Node *p = front;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main(){

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();
    cout<<endl<<"---------Hello There----------"<<endl<<endl;

    cout<<"The code works sexy!";
    cout<<endl;

    return 0;
}