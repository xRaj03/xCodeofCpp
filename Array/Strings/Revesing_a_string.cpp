/* Taking an input form the user as password and check that there is no charcater symbol is used in the input password*/

#include<iostream>

using namespace std;

int valid(char *name)                                       // funtion to check the validation of the string
{
    int i;
    for(i=0; name[i]!='\0'; i++)
    {
                                                            // condition to check id the given string is valid or not 
        if(!(name[i]>=65 && name[i]<=90) && ! (name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57) )
        {
            return 0;
        }
        
    }
    return 1;
}
                                                            // Confusion to link the output of the function to the main function
int main(){

    char *name;
    cout<<"\n Enter your password here \n";
    cin>>name;

    valid( name);
    // condition to output the given string
    if(valid(name)==0)
    {
        cout<<"Your password is invalid";
    }
    else
    {
        cout<<"\n Your password is valid";
    }

    return 0;
}

                                                            // In the first attempt i am confuse to link the valid fun and main fun to work functionally
                                                            // In the second attemp the code is working opposite for the given input
                                                            // In the thired attmpt the code is working fine 