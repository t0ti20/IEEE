#include <stdio.h>
#include <string.h>
#include "./Standard_Types.h"
#include "./Macros.h"
#define MAX_SIZE 30
typedef struct Data{u8 String[MAX_SIZE];u8 find;}Data;
Data Name_1;
s32 main()
{
    s8 count=-1,flag=-1;
    printf("Enter String: ");
    gets(Name_1.String);
    printf("Enter Char: ");
    scanf("%c",&Name_1.find);
    while(Name_1.String[++count])
    {
        if(Name_1.find==Name_1.String[count])flag=count;
    }
    if(flag>=0)printf("Index = %d",flag);
    else printf("Can't Find");
    return 0;
}
