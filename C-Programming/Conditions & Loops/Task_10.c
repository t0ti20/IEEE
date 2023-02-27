#include <stdio.h>
#include <math.h>
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
    f32 a,b,c,dis;
    printf("Enter Coof as : (a(x^2)+b(x)+c)\n");
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    dis=(b*b)-4*a*c;
    switch(dis>0)
    {
        case true:
            printf("First Root : %.2f \nSecond Root : %.2f",((-b+sqrt(dis))/(2*a)),((-b-sqrt(dis))/(2*a)));
            break;
        case false:
            switch(dis<0)
            {
                case true:
                    printf("First Root : %.2f+%.2f \nSecond Root : %.2f-%.2f",((-b)/2*a),(sqrt(-1*dis))/(2*a),((-b)/2*a),(sqrt(-1*dis))/(2*a));
                    break;
                case false:
                    printf("First Root : %.2f",((-b+sqrt(dis))/(2*a)));
                    break;
            }
    }
    return 0;
}