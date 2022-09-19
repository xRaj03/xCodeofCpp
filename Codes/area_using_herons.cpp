#include<iostream>
#include<math.h>

using namespace std;

int main(){

    float a, b, c, S, area;
    cout<<"\n Enter the sides of the triangle \n";
    cin>>a>>b>>c;

    S = (a + b + c)/2;
    area = sqrt (S *(S-a)*(S-b)*(S-c));
    cout<<"\n Area of the triagle is "<<area;

    return 0;
}
//Code complied succesfully