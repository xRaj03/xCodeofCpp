#include<iostream>

using namespace std;

int main(){

    int n, i;
    cout<<"\n Enter the value for n :";
    cin>>n;

    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxNo = INT_MIN;
    int minNO = INT_MAX;

    for(i=0; i<n; i++){
        if( arr[i]>maxNo){
            maxNo = arr[i];
        }
        if( arr[i]< minNO){
            minNO=arr[i];
        }
    }

    cout<<"The maximum no is:"<< maxNo<<"\n";
    cout<<"The minimum no is:"<<minNO;

    return 0;
}