#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Naive solution to find Subarray with given sum
bool isSum(int a[], int n, int sum)
{
    for(int i=0; i<n; i++)
    {
        int crr_sum =0;
        for(int j=i; j<n; j++)
        {
            crr_sum += a[j];
            cout<<crr_sum<<endl;
            if(crr_sum==sum)
            {
                cout<<"true";
                return true;

            }
        }
        cout<<endl<<endl;

    }
    cout<<"false";
    return false;
}

// Optimised Solution to find Subarray with given sum

bool ium(int a[], int n, int sum)
{
    unordered_set<int>s;
    int pre_sum =0;
    for(int i=0; i<n; i++)
    {
        if(pre_sum ==sum)
        {
            //cout<<"true";
            return true;
        }
        if(s.find(pre_sum-sum)!=s.end())
        {
            //cout<<"true";
            return true;
        }
        s.insert(pre_sum);
    }
    //cout<<sum;
    return sum;
}

int main(){

    int A[]={1,2,3,4,5,6};
    ium(A, 6, 7);


    return 0;
}