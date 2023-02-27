#include <stdio.h>
#include <Standard_Types.h>
#include <Macros.h>
logic app(void);
u32 main(void)
{
    return app();
}
logic app(void)
{
    u8 chr,flag;
    printf("Enter Any Character :");
    scanf("%c",&chr);
    if(chr=='a'||chr=='e'||chr=='i'||chr=='o'||chr=='u'||chr=='A'||chr=='E'||chr=='I'||chr=='O'||chr=='U')flag=1;
    else if((chr>96&&chr<123)||(chr>64&&chr<91))flag=2;
    switch(flag)
    {
        case 1:printf("'%c' is Vowel.", chr);break;
        case 2:printf("'%c' is Consonant.", chr);break;
        default:printf("'%c' is not an alphabet.", chr);break;
    }
    return true;
}