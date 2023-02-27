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
    u32 op,i=one;
    printf("Enter Number : ");
    scanf("%d",&op);
    while (op)
    {
        i*=op%10;
        op/=10;
    }
    printf("- Product = %d",i);
}