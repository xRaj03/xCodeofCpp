#include<iostream>
#include<bits/stdc++.h>

using namespace std;
// This function will give the value of how many repetative elements are there in both the array
int intersection(int a[], int b[], int m, int n)
{
    int j;
    unordered_set<int>s;
    for(int i=0; i<m; i++)
        s.insert(a[i]);
    int res=0;
    for(int j=0; j<n; j++)
    {
        if(s.find(b[j])!=s.end())
        {
            res++;
            s.erase(b[j]);
        }
    }
    cout<<res<<endl;
    return res;
}

int main(){

    int A[]={10, 20, 30, 40, 50, 50};
    int B[]={10, 20,  60, 70};

    intersection(A,B,6, 3);
    


    return 0;
}