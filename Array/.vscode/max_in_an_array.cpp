// Function to find maximum value in an array

#include<iostream>

using namespace std;

int main(){

    int A[]={8,3,9,15,6,10,7,2,12,4};
    int i;

    // loop to iterate the and find the max value

    int max=A[0];
    for(i=1; i<10; i++) // in for loop we are taking i=1 , since we already set the max value to index 0
    {
        if(A[i]>max)
        {
            max=A[i];
        }    
    }
    cout<<max;

    return 0;
}