#include <stdio.h>
int main()
{
    int num,bit; 
    printf("Enter Any Number : ");
    scanf("%d",&num);
    printf("Enter Specific Bit : ");
    scanf("%d",&bit);
    printf("Number before clearing %d bit = %d \n",bit, num);
    printf("Number after clearing %d bit = %d \n",bit,num&(~(1<<bit)));
}