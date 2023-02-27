#include <stdio.h>
#include "./Standard_Types.h"
#include "./Macros.h"

u8 size=0,find,str[20];
s32 main()
{
    u8 flag=0;
    printf("Enter Any String : ");
    gets(str);
    printf("Enter Char: ");
    scanf("%c",&find);
    for(u8 *ptr=str;*ptr;*ptr++)
    {
        if(*ptr==find)flag++;
    }
    printf("- Rebeated (%d) Times",flag);
}
