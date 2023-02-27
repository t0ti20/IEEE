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
    u32 op;
    u8 i=0;
    printf("Enter Number : ");
    scanf("%d",&op);
    while (op){op/=10;i++;}
    printf("- Digits = %d",i);
}