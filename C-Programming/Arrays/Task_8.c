#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
#include "Sort.h"
#define Max_Elements 100
u8 app(void);

u32 main(void)
{
    return app();
}

u8 app(void)
{
    u8 arr[Max_Elements];
	u8 size;
    u16 sum=0;
    printf("Enter Size :");
    scanf("%d",&size);
	for(u8 i=0;i<size;i++)
        scanf("%d",&arr[i]);
    u8 arr2[Max_Elements];
    for(u8 i=0;i<size;i++)
       arr2[i]=arr[i];
    for(u8 i=0;i<size;i++)
        printf("%d ",arr2[i]);
    return 1;
}

