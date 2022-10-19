/*
Question 
Input: arr[] = {1, 0, 1, 1, 1, 0, 0}
Output: 1 to 6
(Starting and Ending indexes of output subarray)

Input: arr[] = {1, 1, 1, 1}
Output: No such subarray

Input: arr[] = {0, 0, 1, 1, 0}
Output: 0 to 3 Or 1 to 4
*/
#include<bits/stdc++.h>

using namespace std;
// Naive approch to find logest subarray with equal no of 0s and 1s 
int longestSub(bool *a, int n)
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
                res=max(res, j-i+1);// This argument does not fully satisfies the given logic of the question
        }   
    }
    cout<<res;
    return res;
}

// Try to find the optimised solution to solve this problem

int main(){

    bool A[]={1,0,1,1,1,0,0,0};
    cout<<longestSub(A, 8);

    return 0;
}