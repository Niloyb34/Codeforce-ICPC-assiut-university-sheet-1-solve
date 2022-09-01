#include<stdio.h>
int main()
{
    int x;
    long long y;
    char ch[10];/*aikane just char ch use korle hbe na karon black screen e 2nd data er por space dise je oita o
    character hisebe input nia felle*/
    float t;
    double d;
    scanf("%d",&x);
    scanf("%lld",&y);
    scanf("%s",&ch);
    scanf("%f",&t);
    scanf("%lf",&d);
    printf("%d\n",x);
    printf("%lld\n",y);
    printf("%s\n",ch);
    printf("%.2f\n",t);
    printf("%.1f\n",d);
    return 0;

}
