#include <stdio.h>
int main()
{
    int num; 
    printf("Enter Any Number : ");
    scanf("%d",&num);
    printf("Number before flipp = %d \n", num);
    printf("Number after flipp = %d \n",~num);
}