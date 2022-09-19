/*write a program to read two floating point number . Add these 
numbers and assign the result to an integer . Finallly display the value 
of all the three variables*/

#include<iostream>

using namespace std;

int main(){

    int x;
    float y, z;

    cout<<"\n Enter any two floating point numbers : \n";
    cin>>y>>z;

    x = int(y + z);

    cout<<x;


    return 0;
}
// if i am not wrong then int will ignore the fraction part of the numbers 