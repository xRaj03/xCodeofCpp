#include<bits/stdc++.h>

using namespace std;

// Structure to define the stack
struct Mystack
{
    int *arr;
    int cap;
    int top;
    // Constructor used to create the required stack
    Mystack(int c)
    {
        cap=c;
        arr=new int [cap];
        top=-1;

    }
    // Function used in stack which is already present in C++ STL but we should also write these funtion 
    void push(int x)
    {
        top++;
        arr[top]=x;
    }
    int pop()
    {
        int res=arr[top];
        top--;
        return res;
    }
    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return (top+1);

    }
    bool isEmpty()
    {
        return (top==-1);
    }

};

int main(){

    Mystack s(5);
    s.push(5);
    s.push(10);
    s.push(20);

    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;

    return 0;



    return 0;
}