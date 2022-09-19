#include<iostream>

using namespace std;

int main(){

    int i_num;
    float f_num;
    
    cout<<"Enter any floating num : ";
    cin>>f_num;

    i_num = int( f_num);

    cout<<"\n The integer part of floating point num is : "<<f_num<< " = "<<i_num;

    return 0;
}