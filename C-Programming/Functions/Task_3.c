#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
#define pi 3.14
typedef enum {MAX,MIN} data;
u8 app(void);
u16 max_min(u8 mode,u16 num_1,u16 num_2);

u32 main(void)
{
    return app();
}
u8 app(void)
{
    u16 num_1,num_2;
    printf("Enter First Number :");
    scanf("%d",&num_1);
    printf("Enter Second Number :");
    scanf("%d",&num_2);
	printf("Max=%d\nMin=%d",max_min(MAX,num_1,num_2),max_min(MIN,num_1,num_2));
    return 1;
}
u16 max_min(u8 mode,u16 num_1,u16 num_2)
{
	switch(mode)
	{
		case(MIN):printf("Enter Second Number :");return num_1>num_2?num_2:num_1;
		case(MAX):return num_1>num_2?num_1:num_2;
		
	}
}