#include<iostream>

using namespace std;

int sum(int x){
    if(x==0){
        return 0;
    }
    else{
        return sum(x-1)+x;
    }
}

int main(){

    int n;
    cout<<"\n Enter the value for n";
    cin>>n;
    cout<<sum(n);

    return 0;
}