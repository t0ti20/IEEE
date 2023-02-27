#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
#include "Array.h"
#define Max_Elements 100
u8 app(void);

u32 main(void)
{
    return app();
}

u8 app(void)
{
     u8 arr[Max_Elements];
     u8 size,count=0;
     printf("Enter Size :");
     scanf("%d",&size);
     for(u8 i=0;i<size;i++)
          scanf("%d",&arr[i]);
     for(int x=0;x<size;x++)
     {
          for(int y=x+1;y<size;y++)
               if(arr[x]==arr[y])
               {
                    count++;
                    break;
               }
     }
     printf("Dublicated = %d",count);
     // for(u8 i=0;i<size+1;i++)
     //      printf("%d ",arr[i]);
     return 1;
}

