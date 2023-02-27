
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
     /*Size*/
     printf("Enter Size Array :");
     scanf("%d",&size);
     /*ARR_1*/
     printf("Enter First Array :\n");
     for(u8 i=0;i<size;i++)
          for(u8 j=0;j<size;j++)
               scanf("%d",&arr[i][j]);
     for(u8 i=0;i<size;i++)
     {
          u8 Row=0,cul=0;
          for(u8 j=0;j<size;j++) {Row+=arr[i][j];cul+=arr[j][i];}
          printf("Sum of Row %d =%d\n",i+1,Row);
          printf("Sum of Coulmn %d =%d\n",i+1,cul);
     }

     // for(u8 i=0;i<size;i++)
     // {
     //      for(u8 j=0;j<size;j++)
     //           printf("%d ",arr[i][j]);
     //      printf("\n");
     // }

     /*End*/
     return 1;
}
