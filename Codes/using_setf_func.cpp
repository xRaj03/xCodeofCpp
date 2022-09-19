#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int num;
    cout<<"Enter a number\n";
    cin>>num;
    //To display hexadecimal of 64
    cout.setf(ios::left );
    cout<<"\nHexadecimal of  "<<num;
    //To display **************40
    cout.fill('*');
    cout.unsetf(ios::left);
    cout.width(15);
    cout.setf(ios::hex );
    cout<<num; 

    
}