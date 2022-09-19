// This code shows, how to reverse an array using anw auxillary array

#include<iostream>

using namespace std;

int main(){

    int i, j;
    
    int A[10]={8,3,9,15,6,10,7,2,12,4};
    int B[10]={0,0,0,0,0,0,0,0,0,0}; // Confusion in declaring the required array in which the given (Array A[]) is going to be copied
    
    // Using a loop to iterate the value of array A and copy it into the array B reversely

    for(i=9, j=0; i>=0; i--,j++)
    {
        B[j]=A[i];
    }

    // Again using a loop to iterate the value back in array A

    for(i=0; i<10; i++)
    {
        A[i]=B[i];
    }
    for(i=0; i<10; i++)
    {
        cout<<A[i]<<" ";
    }

    
    return 0;
}

// Error in the code in the first attempt
// Code compiled and executed sucessfully