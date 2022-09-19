#include<stdio.h>

int main()
{
    int t, x, z;
    scanf("%d", &t);
    
    while(t--)
    {
        scanf("%d", &x);
        if (x<=300){
            printf("3000");
        }
        else
        {
            z=x*10;
            printf("%d \n", z);
        }
    }
    
    
}