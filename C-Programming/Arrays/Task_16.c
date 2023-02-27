#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
#define Max_Elements 100
u8 app(void);

u8 array_reverse(u8 *arr,u8 count)
{
     for(u8 st=0,en=count-1;st<(count/2);st++,en--)
     {
          swap(&arr[st],&arr[en]);
     }
}

void swap(u8 *num1,u8 *num2)
{
     *num2^=*num1;
     *num1^=*num2;
     *num2^=*num1;
}

u32 main(void)
{
    return app();
}
u8 app(void)
{
     u8 arr[Max_Elements];
     s32 size;
     /*ARR_1*/
     printf("Enter Size Array 1 :");
     scanf("%d",&size);
     for(u8 i=0;i<size;i++)scanf("%d",&arr[i]);
     /*Print*/
     array_reverse(arr,size);
     for(u8 i=0;i<size;i++)printf("\n%d ",arr[i]);
     /*End*/
     return 1;
}
