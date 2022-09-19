#include<iostream>

#define m 3
#define n 4
using namespace std;

int main(){

    int i, j;
    int A[m][n];
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            A[i][j]= i+j;
        }
        
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){

            cout<<A[i][j];
        }
        cout<<"\n";
    }

    return 0;
}