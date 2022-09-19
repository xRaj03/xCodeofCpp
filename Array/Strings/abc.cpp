#include<iostream>

using namespace std;

void swap( int x, int y){
int z;
x=z;
y=x;
z=y;
}

int main(){
 int a=10,b=20;
 swap(a,b);
 cout<<a<<"\n"<<b;    

    return 0;
}
