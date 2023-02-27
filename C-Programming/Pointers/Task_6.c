#include <stdio.h>
#include "./Standard_Types.h"
#include "./Macros.h"

u8 str[20];
s32 main()
{
    printf("Enter Any String : ");
    gets(str);
    for(u8 *ptr=str;*ptr;*ptr++)Set_Bit((*ptr),5);
    puts(str);
}
