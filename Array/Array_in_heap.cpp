/* #include<iostream>

using namespace std;

int main(){
    int n,i;
    cout<<"\n Enter the value for n";
    cin>>n;
    int arr[n];
    for( i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        cout<<arr[i];
    }


    return 0;
} */

/* #include<iostream>

using namespace std;

int main(){
    // Array created in heap
    int n, i, *A;
    cout<<"\n Enter the value for n";
    cin>>n;
    int arr[n]; 

    A= new int[n]; // to initialize it into the heap memory
    for( i=0; i<n; i++){
        cin>>arr[i];
    }
    for(i=0; i<n; i++){
        cout<<arr[i];
    }


    

    return 0;
} */

/* #include<iostream>

using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    int pos, i;
    cout<<"\n Enter the value for pos";
    cin>>pos;
    for(i=pos; i<5; i++){
        arr[i]=arr[i+1];
    }
    for(i=0; i<4; i++){
        cout<<arr[i];
    }
    


    return 0;
} */

#include<iostream>

using namespace std;

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int key, i;

    cout<<"\n Enter the value for key \n";
    cin>>key;

    for(i=0; i<10; i++)
    {
        if(arr[i]==key){
            cout<<"\n The value of index is "<<i;
        }
    }

    
    return 0;
}