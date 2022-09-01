#include<stdio.h>
int main()
{
    int a,b,c,sum,sub,mul;
    char x,y;
    scanf("%d %c %d %c %d",&a,&x,&b,&y,&c);
    sum=a+b;
    sub=(a-b);
    mul=a*b;
        if(x=='+')
    {
        if(a+b==c)
            printf("Yes");
        else
            printf("%d",sum);
    }

    else if(x=='-')
    {
        if(a-b==c)
            printf("Yes");
        else
            printf("%d",sub);
        }

    else if(x=='*')
    {
        if(a*b==c)
            printf("Yes");
        else
            printf("%d",mul);
        }


    return 0;
}
