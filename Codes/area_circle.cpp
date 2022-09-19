/*#include<iostream>

using namespace std;

int main(){

    float radius;
    double area, circumfarence;
    cout<<"\n Enter the radius of the circle";
    cin>>radius;

    area = 3.14 * radius*radius;
    cout<<"\n The area of the circle is "<<area;

    circumfarence = 2 *3.14 *radius;
    cout.precision(3);
    cout<<"\nThe value of the circumfarence is "<<circumfarence;


    return 0;
}*/

// Sum of n natural numbers

#include<iostream>

using namespace std;

int main(){

    int i, n, sum=0;
    cout<<"\n Enter the no to be summed";
    cin>>n;

    for(i=0; i<=n; i++){
        sum = sum + i;
    }
    cout<<"\n The value of the sum is : "<<sum;

    return 0;
}