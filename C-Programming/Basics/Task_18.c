#include <stdio.h>
int main()
{
    int num; 
    printf("Enter Any Number : ");
    scanf("%d",&num);
    if(num&1)
        printf("Number is Odd");
    else
        printf("Number is Even");
}