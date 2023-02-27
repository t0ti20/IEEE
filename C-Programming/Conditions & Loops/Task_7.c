#include <stdio.h>
#include <Standard_Types.h>
#include <Macros.h>
logic app(void);
u32 scan(void);
u32 main(void)
{
    return app();
}
logic app(void)
{
     u32 sum;
     printf("Enter Five Subjects :\n");
     sum=scan();
     if(sum >= 90) printf("Grade A");
     else if(sum >= 80) printf("Grade B");
     else if(sum >= 70) printf("Grade C");
     else if(sum >= 60) printf("Grade D");
     else if(sum >= 40) printf("Grade E");
     else printf("Grade F");
     return true;
}
u32 scan(void)
{
     u32 temp,sum=0;
     for(u8 i=0;i<5;i++)
     {
          scanf("%d",&temp);
          sum+=temp;
     }
     return sum/5;
}