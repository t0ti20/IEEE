#include <stdio.h>
#include <string.h>
#include "./Standard_Types.h"
#include "./Macros.h"
#define MAX_SIZE 30
typedef struct Data{u8 String[MAX_SIZE];u8 find[MAX_SIZE];}Data;
Data Name_1;
s32 main()
{
    u8 count=0,string=0,find=0,flag=0;
    printf("Enter String: ");
    gets(Name_1.String);
    printf("Enter String: ");
    gets(Name_1.find);
    while(Name_1.String[count])
    {
        if(Name_1.String[count]==*Name_1.find)
        {
            string=count+1;
            for(find=1;Name_1.find[find];find++)
            {
                if(Name_1.String[string]==Name_1.find[find])flag++;
                else break;
            }
            if(flag==--find)
            {
                printf("Index = %d",count);
                break;
            }
        }
        count++;
    }
    return 0;
}

