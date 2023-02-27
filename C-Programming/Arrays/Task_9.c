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
     u8 size;
     printf("Enter Size :");
     scanf("%d",&size);
     for(u8 i=0;i<size;i++)
          scanf("%d",&arr[i]);
     array_insert(arr,1,9);
     for(u8 i=0;i<size+1;i++)
          printf("%d ",arr[i]);
     return 1;
}

