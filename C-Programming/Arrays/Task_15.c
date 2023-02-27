#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
#define Max_Elements 100
u8 app(void);
void bubble_sort(u8 *arr,u8 count);
void swap(u8 *num1,u8 *num2);
u32 main(void)
{
    return app();
}
u8 app(void)
{
     u8 arr[Max_Elements];
     u8 arr2[Max_Elements];
     s32 size,size2;
     /*ARR_1*/
     printf("Enter Size Array 1 :");
     scanf("%d",&size);
     for(u8 i=0;i<size;i++)scanf("%d",&arr[i]);
     /*ARR_2*/
     printf("\nEnter Size Array 2 :");
     scanf("%d",&size2);
     for(u8 i=0;i<size2;i++)scanf("%d",&arr2[i]);
     /*Merge*/
     size2+=size;
     for(u8 i=size;i<size2;i++)arr[i]=arr2[i-size];
     /*Sort*/
     bubble_sort(arr,size2);
     /*Print*/
     for(u8 i=0;i<size2;i++)printf("\n%d ",arr[i]);
     /*End*/
     return 1;
}

void bubble_sort(u8 *arr,u8 count)
{
     u8 flag;
     for(u8 pass=(count-ONE) ; pass>=ZERO ; pass--)
     {
          flag=TRUE;
          for(int iteration=ZERO;iteration<pass;iteration++)
          {
               if(arr[iteration]>arr[iteration+ONE])
               {
                    swap(&arr[iteration],&arr[iteration+ONE]);
                    flag=FALSE;
               }
          }
          if(flag) break;
     }
}

void swap(u8 *num1,u8 *num2)
{
     *num2^=*num1;
     *num1^=*num2;
     *num2^=*num1;
}