#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
u8 app(void);
u32 cube(u32 num);
u32 main(void)
{
    return app();
}
u8 app(void)
{
    u32 num;
    printf("Enter Any Number :");
    scanf("%d",&num);
    printf("Cube of %d = %d",num,cube(num));
    return 1;
}
u32 cube(u32 num)
{
	return (num*num*num);
}