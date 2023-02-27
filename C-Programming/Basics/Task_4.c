#include <stdio.h>
#define pi 3.141592653589793
int main()
{
    float radius;
    printf("-Please Enter Radius Of Circle : ");
    scanf("%f",&radius);
    printf("Diameter of circle = %.3f units \n",2*radius);
    printf("Circumference of circle = %.3f units \n",2*pi*radius);
    printf("Area of circle = %.3f sq. units",pi*radius*radius);
}
