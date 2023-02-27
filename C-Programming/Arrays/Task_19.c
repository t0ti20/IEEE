#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
typedef enum{Ascending,Descending}Sort;


#define Max_Elements 100
u8 app(void);
void swap(u8 *num1,u8 *num2);
void selection_sort(u8 *arr,u8 count,u8 mode);
void selection_sort(u8 *arr,u8 count,u8 mode)
{
     switch (mode)
     {
          case Ascending:
               for(u8 current=0 ; current<(count-1) ; current++)
               {
                    for(u8 counter=current ; counter<count ; counter++)
                    {
                         if(arr[current]>arr[counter])
                         {
                              swap(&arr[current],&arr[counter]);
                         }
                    }
               }
               break;
          case Descending:
               for(u8 current=0 ; current<(count-1) ; current++)
               {
                    for(u8 counter=current ; counter<count ; counter++)
                    {
                         if(arr[current]<arr[counter])
                         {
                              swap(&arr[current],&arr[counter]);
                         }
                    }
               }
               break;
          default:break;
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
     selection_sort(arr,size,Ascending);
     for(u8 i=0;i<size;i++)printf("\n%d ",arr[i]);
     /*End*/
     return 1;
}
