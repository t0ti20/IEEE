#include <stdio.h>

int main()
{
    int num; 
    printf("Enter Any Number : ");
    scanf("%d",&num);
    printf("LSB of %d is set (%d)",num,(num>>7)&1);
}
