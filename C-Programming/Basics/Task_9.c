#include <stdio.h>
#include <math.h>
int main()
{
    double number;
    printf("Enter any number to find square root : ");
    scanf("%lf",&number);
    printf("Square root of %.2lf = %.2lf",number,sqrt(number));
}
