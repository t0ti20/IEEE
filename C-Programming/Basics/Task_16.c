#include <stdio.h>
int main()
{
    int num,bit; 
    printf("Enter Any Number : ");
    scanf("%d",&num);
    printf("Enter Specific Bit : ");
    scanf("%d",&bit);
    printf("Number before toggling %d bit = %d \n",bit, num);
    printf("Number after toggling %d bit = %d \n",bit,num^(1<<bit));
}