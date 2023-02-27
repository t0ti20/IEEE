#include <stdio.h>
#include <string.h>
#include "./Standard_Types.h"
#define MAX_SIZE 30
u8 String_A[MAX_SIZE];
void *malloc(size_t size);
s32 main()
{
    u8 counter=0;
    u8 *ptr=malloc(MAX_SIZE*2*sizeof(u8));
    printf("Enter First String: ");
    gets(String_A);
    while(String_A[counter++]); 
    memcpy (ptr, String_A, sizeof(u8)*(counter));
    printf("Enter Second String: ");
    gets(ptr+(--counter));
    printf("%s",ptr);
    return 0;
}
