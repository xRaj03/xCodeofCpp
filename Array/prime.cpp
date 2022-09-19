/* #include<iostream>

using namespace std;
#define N 100
int main(){

    int p, i, primes[N], primeindex;
    int isprime;
    primes[0]=2;
    primes[1]=3;
    primeindex=2;
    for(p=5; p<=N; p=p+2){
        isprime=1;
            for(i=1; i<primeindex; i++){
                if(p%primes[i]==0)
                isprime=0;

            }
            if(isprime==1){
                primes[primeindex]= p ;
                ++primeindex;
            }       
    }
    for(i=0; i<primeindex; i++){
        cout<<"\n"<<primes[i];
    }


    return 0;
} */
#include<iostream>

using namespace std;

int main(){

    int n; // Input of test cases
    cin>>n;
    int TQ; // Input of Total Question
    cin>>TQ;
    int Correct; // Input for correct ans
    cin>>Correct;
    int incorrect;
    int Totalmarks;

    Totalmarks = Correct*3- incorrect*1;
    cout<<Totalmarks;

    return 0;
}