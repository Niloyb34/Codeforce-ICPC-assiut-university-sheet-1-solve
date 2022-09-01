//Given a Number N corresponding to a person's age (in days). Print his age in years, months and days, followed by its respective message "years", "months", "days".
#include<stdio.h>
int main()
{
    int dayss,month,year,days;
    scanf("%d",&dayss);
    year=dayss/365;//400/365=1 year
    month=(dayss%365)/30;//400%365=35days/30=1 month
    days=((dayss%365)%30)/1;//5/1=5days
    printf("%d years\n",year);
    printf("%d months\n",month);
    printf("%d days\n",days);
    return 0;
}
