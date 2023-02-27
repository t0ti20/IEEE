#include <stdio.h>
#include <math.h>
int main()
{
    float s_1, s_2, s_3, s_4, s_5; 
    printf("Enter marks of five subjects : \n");
    scanf("%f%f%f%f%f",&s_1,&s_2,&s_3,&s_4,&s_5);
    printf("-Total = %.2lf",(s_1=s_1+s_2+s_3+s_4+s_5));
    printf("\n-Average = %.2lf",s_1/5);
    printf("\n-Percentage = %.2lf",(s_1/500)*100);
}
