/* To display the given array which is given by the user */

#include<iostream>

using namespace std;

void display(int);

int main(){

    int i;
    int arr[]={1,2,3,4,5,6,7};
    for(i=0; i<=6; i++){
        display(arr[i]);
    }

    return 0;
}
void display(int m){
    cout<<m;
}