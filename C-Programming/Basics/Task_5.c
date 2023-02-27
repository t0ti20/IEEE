#include <stdio.h>
int main()
{
    float length;
    printf("-Please Enter Length In Centimeter : ");
    scanf("%f",&length);
    printf("Length in Meter = %.3f m\n",length/100);
    printf("Length in Kilometer = %.3f km\n",length/100000);
}
