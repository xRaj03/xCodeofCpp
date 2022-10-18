#include<bits/stdc++.h>

using namespace std;

int longestSub(bool a[], int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        int c0=0, c1=0;
        for(int j=0; j<n; j++)
        {
            if(a[i]==0)
                c0++;
            else
                c1++;
            if(c0==c1)
                res=max(res, j-i+1);
        }   
    }
    cout<<res;
    return res;
}

int main(){

    bool A[]={1,0,1,1,1,0,0,0};
    longestSub(A, 8);

    return 0;
}