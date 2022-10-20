#include<bits/stdc++.h>

using namespace std;

// Naive approch Funtion to find the longest 
// common span with same sum in two binary arrays 

int Mcomon(bool a[], bool b[], int n)
{
    int res=0;
    for(int i=0; i<n; i++)
    {
        int s1=0, s2=0;
        for(int j=i; j<n; j++)
        {
            s1 += a[j];
            s2 += b[j];
            if(s1==s2)
            {
                res=max(res, j-i+1);
            }
        }
        
    }
    return res;
}

// Optimised approch 



int main(){

    bool A[]={0,1,0,0,0,0};
    bool B[]={1,0,1,0,0,1};
    cout<<Mcomon(A,B,6);


    return 0;
}