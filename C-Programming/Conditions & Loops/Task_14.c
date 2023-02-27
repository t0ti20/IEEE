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
    u32 op=0;
    u8 i;
    printf("Enter Number : ");
    scanf("%d",&i);
    for(;i;i--)op+=i;
    printf("- Sum = %d\n",op);
}