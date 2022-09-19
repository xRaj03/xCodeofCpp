#include<iostream>

using namespace std;

int main(){

    int n; // Input of test cases
    cin>>n;
    int TQ; // Input of Total Question
    cin>>TQ;
    int Correct; // Input for correct ans
    cin>>Correct;
    int incorrect;
    int Totalmarks;

    Totalmarks = (Correct*3) - (incorrect*1);
    cout<<Totalmarks;

    /* cout<<"Hello World"; */

    return 0;

}