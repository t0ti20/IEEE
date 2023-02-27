#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"



#define Max_Elements 100
u8 app(void);



u32 main(void)
{
    return app();
}
u8 app(void)
{
     u8 arr[Max_Elements][Max_Elements];
     u8 arr2[Max_Elements][Max_Elements];
     s32 size;
     u8 flag=TRUE;
     /*Size*/
     printf("Enter Size Array :");
     scanf("%d",&size);
     /*ARR_1*/
     printf("Enter First Array :\n");
     for(u8 i=0;i<size;i++)
          for(u8 j=0;j<size;j++)
               scanf("%d",&arr[i][j]);
     /*ARR_2*/
     printf("Enter Second Array :\n");
     for(u8 i=0;i<size;i++)
          for(u8 j=0;j<size;j++)
               scanf("%d",&arr2[i][j]);
     /*Check*/
     for(u8 i=0;i<size&&flag;i++)
          for(u8 j=0;j<size;j++)
               if(arr[i][j]!=arr2[i][j]){flag=FALSE;break;}
     /*Print*/
     if(flag)printf("Equal\n");
     else printf("NotEqual\n");
     // for(u8 i=0;i<size;i++)
     // {
     //      for(u8 j=0;j<size;j++)
     //           printf("%d ",arr[i][j]);
     //      printf("\n");
     // }

     /*End*/
     return 1;
}

