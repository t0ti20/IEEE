#include <stdio.h>
#include "./Standard_Types.h"
#define MAX_SIZE 30
s32 main()
{
    u8 text[MAX_SIZE];             /* Declares a string of size 100 */
    u8 * ptr = text;               /* Declare pointer that points to text */
    printf("Enter any string: ");  /* Input string from user */
    gets(text);
    while(*(ptr++));               /* Iterate though last element of the string */
    printf("Length of '%s' = %d",text,(ptr-text-1));
    return 0;
}