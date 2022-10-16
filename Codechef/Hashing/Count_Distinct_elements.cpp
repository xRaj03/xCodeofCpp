#include<iostream>
#include<bits/stdc++.h>

using namespace std;
// Funtion to count distinct elements in time complexity of O(n)
int countDistinct(int A[], int n)
{
    unordered_set<int>s;
    for(int i=0; i<n; i++)
    {
        s.insert(A[i]);
    }
    cout<<s.size();
    return s.size();
}

int main(){

    int A[]={1,2,2,4,5};
    countDistinct(A,5);


    return 0;
}