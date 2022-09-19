#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){
        int a, b, c;
        cin>>a>>b>>c;

        int correct = b*3;
        int incorrect = (a-b)* -1;
        int total = correct + incorrect;

        if(total<c){
            cout<<"Fail"<<endl;

        }
        else{
            cout<<"Pass"<<endl;
        }
    }
}