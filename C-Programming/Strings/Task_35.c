#include <stdio.h>
#include <string.h>
#include "./Standard_Types.h"
#include "./Macros.h"
#define MAX_SIZE 30
typedef struct Data{u8 String[MAX_SIZE];}Data;
Data Name_1;
s32 main()
{
    u8 count=0,iteration=0,flag=0;
    printf("Enter String: ");
    gets(Name_1.String);
    while(Name_1.String[count])
    {
        if(Name_1.String[count]==' ')count++;
        else break;
    }
    if(count)
    {
        for(flag=count;Name_1.String[flag];flag++,iteration++)
        {
            Name_1.String[iteration]=Name_1.String[flag];
            Name_1.String[flag]=0;
        }
        Name_1.String[++flag]=0;
    }
    puts(Name_1.String);
}

