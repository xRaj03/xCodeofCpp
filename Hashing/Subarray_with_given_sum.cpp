#include<iostream>

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

int main(){

    int A[]={1,2,3,4,5,6};
    isSum(A, 6, 7);


    return 0;
}