#include <stdio.h>
#include <string.h>
#include "./Standard_Types.h"
#include "./Macros.h"
#define MAX_SIZE 30
typedef struct Data{u8 String[MAX_SIZE];u8 count;}Data;
Data Name_1;
s32 main()
{
    Name_1.count=0;
    printf("Enter String: ");
    gets(Name_1.String);
    while(Name_1.String[++Name_1.count]);
    printf("%d\n",Name_1.count);
    for(u8 start=0;start<((Name_1.count)>>1);start++)
    {
        Name_1.String[start]^=Name_1.String[Name_1.count-start-1];
        Name_1.String[Name_1.count-start-1]^=Name_1.String[start];
        Name_1.String[start]^=Name_1.String[Name_1.count-start-1];
    }
    puts(Name_1.String);
    return 0;
}
