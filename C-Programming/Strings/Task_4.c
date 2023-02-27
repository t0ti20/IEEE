#include <stdio.h>
#include <string.h>
#include "./Standard_Types.h"
#include "./Macros.h"
#define MAX_SIZE 30
typedef struct Data{u8 String[20];}Data;
Data Name_1,Name_2;
u8 Compare(u8 *First_String,u8 *Second_String);
s32 main()
{
    printf("Enter First String: ");
    gets(Name_1.String);
    printf("Enter Second String: ");
    gets(Name_2.String);
    printf("%s",Compare(Name_1.String,Name_2.String)==TRUE?"EQUAL":"NOT EQUAL");
    return 0;
}

u8 Compare(u8 *First_String,u8 *Second_String)
{
    u8 flag=TRUE;
    for(u8 i=0;First_String[i];i++)
    {
        if(First_String[i]!=Second_String[i]){flag=FALSE;break;}
    }
    return flag;
}