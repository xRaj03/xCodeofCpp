/* In this code i want to make a pointer and point it the 
object which i want to create in heap */

#include<bits/stdc++.h>

using namespace std;

class rectangle
{
    public:
    int length; int breadth;

    int area(){ return length*breadth; }
    int perimeter(){ return 2*(length+breadth);}
};


int main(){

    rectangle *p;
    p=new rectangle;
    rectangle *q=new rectangle();

    p->length=10; p->breadth=6;    
    q->length=10; q->breadth=9;    

    cout<<p->area()<<endl;
    cout<<"-------"<<endl;
    cout<<q->area()<<endl;

    return 0;
}