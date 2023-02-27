#include <stdio.h>
#include <string.h>
#include "./Standard_Types.h"
#include "./Macros.h"
#define MAX_SIZE 30
typedef struct Data{u8 String[MAX_SIZE];u8 find;}Data;
Data Name_1;
s32 main()
{
    u8 count=0,flag=0;
    printf("Enter String: ");
    gets(Name_1.String);
    printf("Enter Char: ");
    scanf("%c",&Name_1.find);
    while(Name_1.String[count])
    {
        if(Name_1.find==Name_1.String[count])
        {
            for(u8 i=count--;Name_1.String[i];i++)
            {
                Name_1.String[i]=Name_1.String[i+1];
            }
        }
        count++;
    }
    puts(Name_1.String);
    return 0;
}

