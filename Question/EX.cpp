// EX1 
/*#include<iostream>

using namespace std;

int main(){

    int date;

    for(date = 1; date <30; date++)
    {
        if(date%2==0){
            continue;
        }

        cout<<"\n You can go outside";
    }

    return 0;
}*/

/*#include<iostream>

using namespace std;

int main(){

    int i;

    for(i=1; i<=100; i++){

        if(i%3==0){
            continue;
        }
        cout<<i<<endl;

    }
    

    return 0;
}*/

/*#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"\n Not prime";
            break;
        }

        
    }
     if(i == n){
            cout<<"Prime";
        }

    return 0;
}*/
/*#include<iostream>

using namespace std;

int main(){

    float x;
    int y;
    cout<<"Enter a floating point number";
    cin>>x;
    cout<<"Enter a integer number";
    cin>>y;

    if(x>4.14){
        y +=10;
        cout<<"\n The value of integer value is "<<y;
    }
    

    return 0;
}*/

/*#include<iostream>

using namespace std;

int main(){

    int dividend, divisor, rem;
    cout<<"\n Enter two value ";
    cin>>dividend>>divisor;

    if(divisor>0){
        rem = dividend/divisor;
        cout<<"\n The value of remainder is "<<rem;

    }



    return 0;
}*/
/* #include<iostream>
 
 using namespace std;
 
 int main(){

     int num;
     cout<<"\n Enter a number who have its prime factors :";
     cin>>num;
     
 
     
 
    return 0;
 }*/
 /*#include<iostream>
 #include<bits/stdc++.h>
 
 using namespace std;
 
 int main(){
 
     printfloydtriangle(6);
    
 
     return 0;
 }
 void printfloydtriangle(int n){
    int i, j, val =1;
    for(i=1; i <=n;  i++){
        for(j=1; j<=i; j++)
        cout<< val++ <<" ";
    cout<< endl;
    }
 }

*/
/*#include<iostream>

using namespace std;

int main(){

    int row, col;
    cout<<"\n Enter the vlaue of row and column : \n";
    cin>>row>>col;

    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++){
            if( i == 1 || i==row){
                cout<<"*";
            }else if(j==1 || j==col){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    return 0;
}*/


// inverted half pyramid 

/*#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"\n Enter the vlaue of n : \n";
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}*/

// half pyramid after 180 degree rotation 
/* #include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"\n Enter the value of n : \n";
    cin>>n;

    for(int i =1; i<=n; i++){
        for(int j=1; j<=; j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
} */

/* print a table like this 
1
22
333
4444
55555 */

/* #include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"\n Enter the value of n : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<;
        }
    }cout<<endl;

    return 0;
} */

/*#include<iostream>

using namespace std;

int main(){

    int n, count=1;
    cout<<"\n Enter the value of n : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<count  ;
            count++;
        }cout<<endl;
    }cout<<endl;

    return 0;
}*/

// Inverted pattern 

/* #include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"\n Enter any number : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
} */

#include<iostream>

using namespace std;

int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}

int main(){
    int a, b;
    cout<<"Enter any two values";
    cin>>a>>b;
    cout<<add(a,b)<<endl;



    

    return 0;
}

