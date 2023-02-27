#include <stdio.h>

int main()
{
    int num_1,num_2;
    printf("-Please Enter First Number : ");
    scanf("%d",&num_1);
    printf("-Please Enter First Number : ");
    scanf("%d",&num_2);
    printf("-SUM=%d",num_1+num_2);
    printf("\n-SUB=%d",num_1-num_2);
    printf("\n-Mult=%d",num_1*num_2);
    printf("\n-Div=%f",(float)num_1/num_2);
    printf("\n-Modulus=%d",num_1%num_2);
}
