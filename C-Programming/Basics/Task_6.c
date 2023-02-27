#include <stdio.h>
int main()
{
    float celsius;
    printf("-Enter temperature in Celsius : ");
    scanf("%f",&celsius);
    printf("%.3f Celsius = %.3f Fahrenheit",celsius,((celsius*9/5)+32));
}
