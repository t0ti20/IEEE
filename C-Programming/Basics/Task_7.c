#include <stdio.h>
int main()
{
    int years,days,weeks;
    printf("-Enter days :");
    scanf("%d",&days);
    years=(days/365);
    weeks=(days%365)/7;
    days=days-(years*365+weeks*7);
    printf("- YEARS : %d\n- WEEKS : %d\n- DAYS : %d",years,weeks,days);
}
