/* #include<iostream>

using namespace std;

int main(){

    int a, b, c, k;
    cin>>a>>b>>c>>k;
    
    int T= a+b+c;


    if(k<T){
        cout<<"Yes";
    }
    else{
        cout<<"no";
    }



    return 0;
} */

/* #include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int a, b, c, a1, b1, c1, a2, b2, c2;
    cin>>a>>b>>c;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;

    if(a+a1+a2==0 && b+b1+b2==0 && c+c1+c2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
} */
      #include <iostream>
2        using namespace std;
3        int main()
4        {
5            int a = 5, b = 6, c, d;
6            c = a, b;
7            d = (a, b);
8            cout << c << \n << d;
9            return 0;
10       }