#include<iostream>

using namespace std;

int binarsearch(int arr[], int n, int key){

    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e = mid-1;
        }else{
            e = mid+1;
        }
    }
    return -1;
    
}

int main(){

    int i, n;
    cout<<"\n Enter the value of n:";
    cin>>n;

    int arr[n];

    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"\n Enter the value for key";
    cin>>key;

    cout<<"The index for the key is:"<<binarsearch( arr,n,key);

    return 0;
}