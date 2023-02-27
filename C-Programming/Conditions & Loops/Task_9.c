#include <stdio.h>
#include <Standard_Types.h>
#include <Macros.h>
logic app(void);
u32 main(void)
{
    while(app());
    return 0;
}
logic app(void)
{
    u8 num_1,flag;
    printf("Enter Any Numner :");
    scanf("%d",&num_1);
    flag=true;
    switch(num_1)
    {
        case 1:printf("Today is Sat\n");break;
        case 2:printf("Today is Son\n");break;
        case 3:printf("Today is Mon\n");break;
        case 4:printf("Today is Tue\n");break;
        case 5:printf("Today is Wed\n");break;
        case 6:printf("Today is Thu\n");break;
        case 7:printf("Today is Fri\n");break;
        default:printf("Enter Correct Num\n");flag=false;break;
    }
    return !flag;
}