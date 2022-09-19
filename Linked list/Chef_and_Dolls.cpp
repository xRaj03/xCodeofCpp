#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--)
	{
	    long long int d; cin>>d;
	    long long int k=0;
	    int arr[d];
	    for(int i=0; i<d; i++)
	    {
	        cin>>arr[i];
	        if(arr[i]%2!=0){
	            k++;
	            
	        }
	    }
	    cout<<k<<endl;
	}
	return 0;
}
