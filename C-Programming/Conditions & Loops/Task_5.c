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
    u32 a1,a2,a3;
    printf("Enter Any Angles :\n");
    scanf("%d%d%d",&a1,&a2,&a3);
    if((a1+a2)==(180-a3) && a1>0 && a2>0 && a3>0) printf("Triangle is valid.");
    else printf("Triangle is not valid.");
    return true;
}