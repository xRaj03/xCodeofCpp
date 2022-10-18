#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Naive solution to find longest subaraay with given sum
int maxlen (int a[], int n, int sum)
{
    int res=0; 
    for(int i=0; i<n; i++)
    {
        int cur_sum=0;
        for(int j=i; j<n; j++)
        {
            cur_sum += a[j];
            if(cur_sum==sum)
            {
                res = max(res, j-i+1);
            }
        }
    }
    return res;
}

// Optimised solution to find longest subarray with fiven sum
int Maxlen(int a[], int n, int sum)
{
    unordered_set<int,int>m;
    int pre_sum=0, res=0;
    for(int i=0; i<n; i++)
    {
        int max=0;
        pre_sum += a[i];
        if(pre_sum==sum)
        {
            res=i=1;
        }
        if(m.find(pre_sum-sum)!=m.end())
        {
            m.insert({pre_sum,i});
        }
        if(m.find(pre_sum-sum)!= m.end())
        {
            res= max(res, i-m[pre_sum-sum]);
        }
    }
    return res;
}
int main()
{

    int A[]={1,2,3,4,5};

    return 0;
}