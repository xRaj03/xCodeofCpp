#include<stdio.h>
#include<math.h>
#define Element 15  // ye hamne isliye kiye taki array me max 15 element store ho sake ye tum apne man se ghata badha skte ho 
void main()  // void funtion isliye use kar rahe kyuiki hame iss function se koi bhi value return nahi karana hai other function me 
{
    float x[Element];
    int  i, n;
    float mean, variance, Stander_deviation, sum = 0, sqrsum = 0;
 
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);

    //element ko array me insert karne ke liye ye niche ye loop chala rahe hai
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    // loop chala rahe hai taki elements ka sum nikal sake
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    mean = sum / (float)n;
    //  ye loop variance and standerd deviation nikalne ke liye use kar rahe hai
    for (i = 0; i < n; i++)
    {
        sqrsum = sqrsum + pow((x[i] - mean), 2);
    }
    variance = sqrsum / (float)n;
    Stander_deviation = sqrt(variance);
    printf("mean of the given elements = %.2f\n", mean);
    printf("variance of the given elements = %.2f\n", variance);
    printf("Standard deviation of the given elements = %.2f\n", Stander_deviation);
}
