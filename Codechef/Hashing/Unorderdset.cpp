/* // Program to use Unorderd set in c++
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    unordered_set<int> s;
    s.insert(10);
    s.insert(15);
    s.insert(30);
    s.insert(35);
    for (int x : s)
        cout << x << " ";
    cout<<s.size();
    return 0;
} */

#include<iostream>

using namespace std;

int main(){

    int A[]={1,2,3,4,5};
    for(auto x:A){
        cout<<x<<endl;
    }

    return 0;
}