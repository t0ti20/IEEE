#include <stdio.h>
#include "./Standard_Types.h"
#define MAX_SIZE 30

typedef struct Array{u8 String[MAX_SIZE];}Array;
Array Array_A;
Array Array_B;
s32 main()
{
    printf("Enter Any String: ");  /* Input string from user */
    gets(Array_A.String);
    Array_B=Array_A;
    printf("%s",Array_B.String);
    return 0;
}