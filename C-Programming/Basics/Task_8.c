#include <stdio.h>
int main()
{
    int power,base,result=1;
    printf("-Enter Base :");
    scanf("%d",&base);
    printf("-Enter Power :");
    scanf("%d",&power);
    for(int i=0;i<power;i++)
    {
        result*=base;
    }
    printf("%d ^ %d = %d",base,power,result);
}
