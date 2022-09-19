#include<iostream>

using namespace std;

int main(){

    int num1, num2, avg, dev1, dev2;

    cout<<"Enter any two numbers\n";
    cin>>num1>>num2;

    avg = ( num1 + num2) /2 ;
    dev1 = num1 - avg;
    dev2 = num2 - avg;


    cout<<"\n Average of the two numbers is : "<<avg;
    cout<<"\nDeviation are num1 and num2 are respectively "<<dev1<<" "<<dev2;
    return 0;
}