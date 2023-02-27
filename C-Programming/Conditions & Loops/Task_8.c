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
     f32 sal;
     printf("Enter Your Salary :");
     scanf("%f",&sal);
     if(sal>20002)sal+=(sal*1.25);
     else if (sal<10001)sal*=2;
     else sal+=(sal*1.15);
     printf("GROSS SALARY OF EMPLOYEE = %.2f",sal);
     return true;
}
