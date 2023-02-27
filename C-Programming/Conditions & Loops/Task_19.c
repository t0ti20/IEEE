#include <stdio.h>
#include <Standard_Types.h>
#include <Macros.h>

logic app(void);

u32 main(void)
{
    return app();
}

logic app(void)
{
    u32 num,ex,result=1;
    printf("Enter Base: ");
    scanf("%d",&num);
    printf("Enter Exponent: ");
    scanf("%d",&ex);
    for(;ex;ex--)result*=num;
    printf("- Power = %d",result);
}