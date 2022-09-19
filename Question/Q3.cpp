/* Write a program to print the count of even numbers between 1 - 200 and print their sum */


#include<iostream>

using namespace std;

int main(){

    int i=1, sum=0;
    while(i<=200)
    {
        cout<<i<<endl;
        sum +=i;
        i+=2;
    }
    cout<<"\n"<<sum;

    return 0;
}