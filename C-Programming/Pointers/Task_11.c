#include <stdio.h>
#include "./Standard_Types.h"
#include "./Macros.h"

u8 size=0,str[20];
s32 main()
{
    printf("Enter Any String : ");
    gets(str);
    for(u8 *ptr=str;*ptr;*ptr++)size++;
    for(u8 start=0;start<((size)>>1);start++)
    {
        *(str+start)^=*((str+size)-start-1);
        *((str+size)-start-1)^=*(str+start);
        *(str+start)^=*((str+size)-start-1);
    }
    puts(str);
}
