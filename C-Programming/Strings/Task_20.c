#include <stdio.h>
#include <string.h>
#include "./Standard_Types.h"
#include "./Macros.h"

#define MAX_SIZE 30
typedef struct Data{u8 String[MAX_SIZE];u8 find;}Data;
void Sort_VidBubble_Sort(u8 *Ptr_u8Array,u8 Copy_u8Size);
Data Name_1;

s32 main()
{
    u8 counter=0,flag=1;
    printf("Enter String: ");
    gets(Name_1.String);
    while(Name_1.String[counter])Name_1.String[counter++]|=32;
    Sort_VidBubble_Sort(Name_1.String,counter);
    for(u8 iteration=0;iteration<counter;iteration++)
    {
        if(Name_1.String[iteration]==Name_1.String[iteration+1])
        {
            flag++;
            continue;
        }
        printf("- Char '%c' Rebeated %d Times .\n",Name_1.String[iteration],flag);
        flag=1;
    }
    return 0;
}

void Sort_VidBubble_Sort(u8 *Ptr_u8Array,u8 Copy_u8Size)
{
    for(u8 pass=(Copy_u8Size-ONE) ; pass>=ZERO ; pass--)
    {
        u8 flag=TRUE;
        for(int iteration=ZERO;iteration<pass;iteration++)
        {
            if(Ptr_u8Array[iteration]>Ptr_u8Array[iteration+ONE])
            {
                Ptr_u8Array[iteration]^=Ptr_u8Array[iteration+ONE];
                Ptr_u8Array[iteration+ONE]^=Ptr_u8Array[iteration];
                Ptr_u8Array[iteration]^=Ptr_u8Array[iteration+ONE];
                flag=FALSE;
            }
        }
        if(flag) break;
    }
}
