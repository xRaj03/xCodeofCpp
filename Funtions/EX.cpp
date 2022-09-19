#include<iostream>

using namespace std;

int main(){

    int year, leapyear;
    cout<<"Enter the year you want to check :";
    cin>>year;

    if(year%400==0){
        cout<<year<<"is a leap year";

    }else if(year%100==0){
        cout<<year<<"is not a leapyear";

    }else if(year%4==0){
        cout<<year<<" is a leap year";
    }

    return 0;
}