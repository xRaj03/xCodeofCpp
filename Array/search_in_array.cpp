#include<iostream>

using namespace std;

int linearsearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){

        if(arr[i]==key){
            return i;
        }
    }
    return -1;

}

int main(){

    int n, i;
 /*    cout<<"Enter the value for n";
    cin>>n; */

    int arr[n]={1,2,3,4,5};
    int key;
    cout<<"\n Enter the value for key";
    cin>>key;

    cout<<"The value if index is:"<<linearsearch(arr, n, key);

    return 0;
}