#include <stdio.h>
#include "Standard_Types.h"
#include "Macros.h"
u8 app(void);

void Palindrome(u16 num);
u16 reverse(u16 num);

u32 main(void)
{
    return app();
}

u8 app(void)
{
	u16 num;
    printf("Enter Any Number :");
    scanf("%d",&num);
	Palindrome(num);
    return 1;
}
void Palindrome(u16 num)
{
	if(num == reverse(num))printf("Palindrome Number");
	else printf("Not Palindrome Number");
}


u16 reverse(u16 num)
{
	u16 temp;
	static u16 sum=0;
	if(num)
	{
		temp=num%10;
		sum=sum*10+temp;
		reverse(num/10);
	}
	else return sum;
}