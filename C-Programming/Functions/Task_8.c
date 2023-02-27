#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
u8 app(void);
u16 fact(u16 num);

u32 main(void)
{
    return app();
}

u8 app(void)
{
	u16 num;
    printf("Enter Any Number :");
    scanf("%d",&num);
	printf("Your Factorial = %d",fact(num));
    return 1;
}
u16 fact(u16 num)
{
	if (num==0)return 1;
	return (num*fact(num-1));
}
