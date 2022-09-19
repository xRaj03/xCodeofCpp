#include<iostream>

using namespace std;

int main(){

    int num1, num2, num3, large;
    cout<<"Enter any three integers";
    cin>>num1>>num2>>num3;

    large = num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
    cout<<"\n The largest num is "<<large;

    return 0;
}