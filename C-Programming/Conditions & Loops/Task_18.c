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
    u32 num, result = 0;
    printf("Enter Number : ");
    scanf("%d",&num);
    while (num)
    {
        result=(result*10)+(num%10);
        num/=10;
    }
    printf("- Reverse = %d",result);
}