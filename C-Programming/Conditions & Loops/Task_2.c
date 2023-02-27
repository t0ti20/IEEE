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
    u8 chr;
    printf("Enter Any Character :");
    scanf("%c",&chr);
    if( (chr>96&&chr<123) || (chr>64&&chr<91) )printf("Character is an ALPHABET");
    else printf("Character is not ALPHABET");
    return true;
}