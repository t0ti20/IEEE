
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
     u8 Symmetric = 1;
     /*Size*/
     printf("Enter Size Array :");
     scanf("%d",&size);
     /*ARR_1*/
     printf("Enter First Array :\n");
     for(u8 i=0;i<size;i++)
          for(u8 j=0;j<size;j++)
               scanf("%d",&arr[i][j]);
     for(u8 row=0; row<size && Symmetric; row++)
     {
          for(u8 col=0; col<size; col++)
          {
               if(arr[row][col] != arr[col][row])
               {
                    Symmetric = 0;
                    break;
               }
          }
     }
     if(Symmetric)printf("The given matrix is Symmetric matrix: \n");
     else printf("The given matrix is not Symmetric matrix.");
     // for(u8 i=0;i<size;i++)
     // {
     //      for(u8 j=0;j<size;j++)
     //           printf("%d ",arr[i][j]);
     //      printf("\n");
     // }

     /*End*/
     return 1;
}
