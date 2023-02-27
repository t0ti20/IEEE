#include <stdio.h>
#include "./Standard_Types.h"
#include "./Macros.h"

u8 size=0,find,str[20];
s32 main()
{
    s8 flag=-1;
    printf("Enter Any String : ");
    gets(str);
    printf("Enter Char: ");
    scanf("%c",&find);
    for(u8 *ptr=str;*ptr;*ptr++)
    {
        if(*ptr==find)
        {
            printf("- Found At Index (%d)\n",flag=ptr-str);
        }
    }
    printf("%s",flag>=0?"":"Not Found");
}
