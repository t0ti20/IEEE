#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
#define pi 3.14

u8 app(void);
void circle_calc(f32 num);

u32 main(void)
{
    return app();
}
u8 app(void)
{
    f32 num;
    printf("Enter Radius :");
    scanf("%f",&num);
    circle_calc(num);
    return 1;
}
void circle_calc(f32 num)
{
	printf("Diameter = %.2f",(2.0*num));
	printf("\nCircumference = %.2f",(2.0*pi*num));
	printf("\nArea = %.2f",(num*pi*num));
}