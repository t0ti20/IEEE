#include <stdio.h>
#include "./Standard_Types.h"
#include "./Macros.h"

u8 str[20];
s32 main()
{
    u8 cha=0,num=0,spec=0;
    printf("Enter Any String : ");
    gets(str);
    for(u8 *ptr=str;*ptr;*ptr++)
    {
        if(*ptr>='a'&&*ptr<='z'||*ptr>='A'&&*ptr<='Z')cha++;
        else if(*ptr>='0'&&*ptr<='9')num++;
        else spec++;
    }
    printf("Alphabets = %d\nDigits = %d\nSpecial Chars = %d",cha,num,spec);
}
