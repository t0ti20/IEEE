#include <stdio.h>
#include <math.h>
#include <Standard_Types.h>
#include <Macros.h>

logic app(void);

u32 main(void)
{
    return app();
}

logic app(void)
{
    long long num,place=0,result=0;
    printf("Enter Number: ");
    scanf("%lld",&num);
    for(;num;place++,num/=10)if(num&1) result+=pow(2,place);
    printf("- Result = %d",result);
}