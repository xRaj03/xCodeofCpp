/* #include <iostream>
using namespace std;

int main() {
    int arr[4];
    int i;
    for(i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<4; i++){
        cout<<arr[i];
    }
	return 0;
}
 */

#include <iostream>
using namespace std;

int main() {
	int t;
	int counter=0;
	int n;
	int a[1000];
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]>1000){
                counter++;
            }
        }
	    cout<<counter<<endl;
	    
	}
	
	return 0;
}
