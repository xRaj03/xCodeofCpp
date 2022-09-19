#include<iostream>
#define N 10

using namespace std;

int main(){

    int i;
    int Fib[N];
    Fib[0]=0;
    Fib[1]=1;
    for(i=2; i<N; i++){
        Fib[i]=Fib[i-1]+Fib[i-2];
    }
    for(i=0; i<N; i++){
        cout<<"\n"<<Fib[i];
    }


    return 0;
}