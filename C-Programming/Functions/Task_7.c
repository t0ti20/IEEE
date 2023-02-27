#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
u8 app(void);
u16 sum(u16 num);

u32 main(void)
{
    return app();
}

u8 app(void)
{
	u16 num;
    printf("Enter Any Number :");
    scanf("%d",&num);
	printf("Your Summation = %d",sum(num));
    return 1;
}
u16 sum(u16 num)
{
	if (num==0)return 0;
	return ((num%10)+sum(num/10));
}
