/*  #include<iostream>

using namespace std;

int main(){

    int n, i;
    cin>>n;
    bool flag=0;

    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"\n Given no is a non prime no ";
            flag =1;
            break;

        }
    }
    if(flag==0){
        cout<<"\n Given no is a prime no ";

    }

    return 0; 
}  */

/* #include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int reverse=0;

    while (n>0)
    {
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
        
    }
    cout<<reverse<<endl;


    return 0;
} */

#include<iostream>
#include<math.h>
using namespace std;

int main(){


    int n, sum=0;
    int  originaln = n;

    cout<<"\n Enter the no you want to check that is it a armstrong no :";
    cin>>n;

    while (n>0)
    { 
        int lastdigit = n%10;
        sum+= pow(lastdigit, 3);
        n = n/10;

    }
    if(sum==originaln){
        cout<<"\n Given no is armstrong no.";
    }else{
        cout<<"\n Not a armstrong no.";
    }
    

    

    return 0;
}