#include <stdio.h>
#include <Standard_Types.h>
#include <Macros.h>

#define SUM(x,y) (x+y)
#define SUB(x,y) (x-y)
#define MUL(x,y) (x*y)
#define DIV(x,y) (x/y)

logic app(void);

u32 main(void)
{
    return app();
}

logic app(void)
{
    f32 num_1,num_2;
    u8 op,flag;
    printf("Choose An Operation :\n- (+)\n- (-)\n- (*)\n- (/)\n");
    scanf("%c",&op);
    printf("Enter First Num : ");
    scanf("%f.2",&num_1);
    printf("Enter Second Num : ");
    scanf("%f.2",&num_2);
    switch(op)
    {
        case '+':num_1=SUM(num_1,num_2);break;
        case '-':num_1=SUB(num_1,num_2);break;
        case '/':num_1=DIV(num_1,num_2);break;
        case '*':num_1=MUL(num_1,num_2);break;
        default:printf("Enter Correct Operation\n");break;
    }
    printf("Result = %0.2f",num_1);
    return true;
}