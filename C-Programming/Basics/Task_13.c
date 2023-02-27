#include <stdio.h>

int main()
{
    int num,bit; 
    printf("Enter Any Number : ");
    scanf("%d",&num);
    printf("Enter Specific Bit : ");
    scanf("%d",&bit);
    printf("%d bit of %d is set (%d)",bit,num,(num>>bit)&1);
}
