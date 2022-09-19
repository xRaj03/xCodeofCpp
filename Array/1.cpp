#include<iostream>

using namespace std;

int main(){

    int *arr;
    int size;
    cout<<"Enter the size of the array \n";
    cin>>size;

    cout<<"Creating an array of size "<<size<<"..";
    arr = new int [size];

    cout<<"\n Dynamic allocation of memory is sucessfull";

    delete arr;
    getchar();

    return 0;
}