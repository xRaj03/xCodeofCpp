#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
    int num;
    cout<<"\n Enter a no :";
    cin>>num;
    cout<<"\n Hexadecimal of "<<num;
    cout<<setw(10)<<setfill('X')<<hex<<num;
    

    

    return 0;
}