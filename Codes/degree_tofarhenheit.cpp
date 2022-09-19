#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    float celcius, farheinheit;
    cout<<"Enter the temprature in farheinheit ";
    cin>>farheinheit;

    celcius = (0.56) * ( farheinheit - 32 );
    cout<<setprecision(2);
    cout<<"\n TEmprature in degress is " <<celcius;

    return 0;
}
//Error in this code 