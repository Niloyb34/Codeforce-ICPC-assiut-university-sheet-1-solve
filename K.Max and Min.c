#include<stdio.h>
int main ()
{
    long long a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a<b)
        if(a<c)
            printf("%lld ",a);
        else
            printf("%lld ",c);
    else if(b<c)
        printf("%lld ",b);
    else
        printf("%lld ",c);
    if(a>b)
        if(a>c)
            printf("%lld",a);
        else
            printf("%lld",c);
    else if(b>c)
        printf("%lld",b);
    else
        printf("%lld",c);
    return 0;
}
