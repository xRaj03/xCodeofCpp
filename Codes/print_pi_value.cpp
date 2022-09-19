#include<iostream>

using namespace std;

int main(){

    #define PI 3.14159

    cout.precision(3);
    cout.width(10);
    cout.fill(' ');
    cout << PI;

    return 0;
}