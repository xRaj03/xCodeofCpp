/* #include<iostream>

using namespace std;

void Fun1( int x){
    if(x>0){
        cout<<x;
        Fun1(x-1);
    
        
    }

}

int main(){

    int n;
    cout<<"\n Enter the value for n";
    cin>>n;

    Fun1(n);

    return 0;
} */
/* #include<iostream>

using namespace std;
int x=10;

int main(){

    cout<<x;

    return 0;
} */

/* #include<iostream>

using namespace std;

int fun(int a,int b){

    cout<<a<<"-"<<b;

}

int main(){

    int n=10;
    int y=25;

    fun(n,y);
    


    return 0;
} */

#include<iostream>

using namespace std;

int fun1(int x){
    if(x>0){
        cout<<x;
        fun1(x-1);
    }
}

int main(){

    int n;
    cout<<"\n Enter the value for n";
    cin>>n;

    fun1(n);

    return 0;
}