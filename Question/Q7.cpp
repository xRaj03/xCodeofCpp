/* write a program to read a floating point number 
display the rightmost digit of the integral part of the number*/

#include<iostream>

using namespace std;

int main(){

    int z;
    float x;
    cout<<"\n Enter a floating point number ";
    cin>>z;

    x = z%10;
    cout<<"\n the rightmost integer part is : "<<x;


    

    return 0;
}
// code work successfully