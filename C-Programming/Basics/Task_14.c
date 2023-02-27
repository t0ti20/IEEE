#include <stdio.h>
int main()
{
    int num,bit; 
    printf("Enter Any Number : ");
    scanf("%d",&num);
    printf("Enter Specific Bit : ");
    scanf("%d",&bit);
    printf("Number before setting %d bit = %d (in decimal)\n",bit, num);
    printf("Number after setting %d bit = %d (in decimal)\n",bit,num|(1<<bit));
}