#include <stdio.h>
#include <string.h>
#include "./Standard_Types.h"
#include "./Macros.h"
#define MAX_SIZE 30
typedef struct Data{u8 String[20];}Data;
Data Name_1;
s32 main()
{
    printf("Enter First String: ");
    gets(Name_1.String);
    for(u8 i=0;Name_1.String[i];i++)
    {
        if(('A'<=Name_1.String[i]&&Name_1.String[i]<='Z')||('a'<=Name_1.String[i]&&Name_1.String[i]<='z'))Name_1.String[i]^=32;
    }
    printf("%s",Name_1.String);
    return 0;
}