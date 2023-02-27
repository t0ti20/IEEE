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
    printf("Enter Number : ");
    scanf("%d",&op);
    for(u8 i=1;i<=10;i++)printf("- %d * %d = %d\n",op,i,(op*i));
}