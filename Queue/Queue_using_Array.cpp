#include<bits/stdc++.h>

using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

int main(){

    struct Queue q;
    cout<<"Enter the size of the queue"<<endl;
    cin>>q.size;

    q.Q=(int*)malloc(q.size*sizeof(int));
    q.rear=q.front=-1;


    return 0;
}