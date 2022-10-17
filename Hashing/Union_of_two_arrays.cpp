#include<iostream>
#include<bits/stdc++.h>


using namespace std;
// Navie solution to merge two arrays 
/* int findUnion(int a[], int b[], int m, int n)
{
    int c[m + n];
    for (int i = 0; i < m; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[m + i] = b[i];
    }
    unordered_set<int> s;
    for (int i = 0; i < m + n; i++)
    {
        s.insert(c[i]);
    }
    for (auto x : s)
    {
        cout << x<<endl;
    }
    cout<<endl<<endl<<s.size();
    return 0;
} */

// Optimised function to merge two arrays
int find(int a[], int b[], int m, int n)
{
    unordered_set<int>s;
    for(int i=0; i<m; i++)
    {
        s.insert(a[i]);
    }
    for(int i=0; i<n; i++)
    {
        s.insert(b[i]);
    }
    cout<<s.size();

    return 0;
}
int main(){

    int A[]={10, 20, 30, 40, 50};
    int B[]={60, 70, 80, 10};

    find(A,B,5,4);




    

    return 0;
}