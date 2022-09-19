#include<iostream>

using namespace std;

int main(){

    float total_amount, amt, sub_total, discount_amt, tax_amt, qty, val, discount, tax;

    cout<<"\n Enter the value of the item sold :  ";
    cin>>val;

    cout<<"\n Enter the quantity of the item :  ";
    cin>>qty;

    cout<<"\n Enter the discont percentage :  ";
    cin>>discount;

    cout<<"\n Enter the tax :  ";
    cin>>tax;

    amt = val * qty;
    discount_amt = (amt * discount) / 100.0;

    sub_total = amt - discount_amt;
    tax_amt = ( sub_total * tax ) / 100.0;
    total_amount = sub_total + tax_amt;

    cout<<"\n\n\n************ BILL *************";
    cout<<"\n\n Quantity sold : \t"<< qty;
    cout<<"\n Price per item  : \t "<<val;
    cout<<"\n \t \t --------------------";
    cout<<"\n Amount : \t\t- "<<amt;
    cout<<"\n Discount : \t\t-"<<discount_amt;
    cout<<"\n \t\t ---------------------";
    cout<<"\n Discounted total :  \t"<<sub_total;
    cout<<"\n Tax : \t\t\t +"<<tax_amt;
    cout<<"\n \t \t --------------------";
    cout<<"\n Total amount to be paid "<< total_amount;



    return 0;
}
//Code is working fine 