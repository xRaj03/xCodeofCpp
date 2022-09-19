/* Swap two numbers using pointers  */
#include<iostream>

using namespace std;

void swapx(int x , int y);

int main(){

    
    inhint a=10, b=20;
    swapx(a,b);
    /* cout<<a<<b; */

    return 0;
}
void swapx(int x, int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf ( "a = %d b = %d\n", x, y ) ;
}