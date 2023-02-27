#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
typedef enum {FALSE,TRUE} logic;
u8 app(void);
logic odd(u16 low);
logic even(u16 low);
u16 up;

u32 main(void)
{
    return app();
}

u8 app(void)
{
	u16 low;
    printf("Enter Upper_Limit :");
    scanf("%d",&up);
    printf("Enter Lower_Limit :");
    scanf("%d",&low);
	printf("\nEven : ");
	even(low);
	printf("\nOdd : ");
	odd(low);
    return 1;
}
logic even(u16 low)
{
	if(low>up)return FALSE;
	if(low%2==0)
		printf("%d,",low);
	even(low+1);
	return TRUE;
}
logic odd(u16 low)
{
	if(low>up)return FALSE;
	if(low%2!=0)
	printf("%d,",low);
	odd(low+1);
	return TRUE;
}