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
    u8 num;
    printf("Enter Any Number :");
    scanf("%d",&num);
    num=(((num%5)==0)&&((num%11)==0))?true:false;
    if(num)printf("Number is divisible by 5 and 11");
    else printf("Number is not divisible by 5 and 11");
    return num;
}