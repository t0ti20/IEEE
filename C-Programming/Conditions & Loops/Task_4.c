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
    u8 mn,flag;
    printf("Enter Any Month :");
    scanf("%d",&mn);
    switch(mn)
    {
        case 1:flag=31;break;
        case 2:flag=28;break;
        case 3:flag=31;break;
        case 4:flag=30;break;
        case 5:flag=31;break;
        case 6:flag=30;break;
        case 7:flag=31;break;
        case 8:flag=31;break;
        case 9:flag=30;break;
        case 10:flag=31;break;
        case 11:flag=30;break;
        case 12:flag=31;break;
        default:flag=0;break;
    }
    switch(flag)
    {
        case 31:printf("31 days");break;
        case 28:printf("28 or 29 days");break;
        case 30: printf("30 days");break;
        default:printf("Invalid input! Please enter month number between (1-12).");break;
    }
    return true;
}