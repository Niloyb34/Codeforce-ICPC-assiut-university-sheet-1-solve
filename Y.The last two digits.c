#include<stdio.h>
int main()
{
    long long a,b,c,d,m1,m2,m3,m4,x;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    m1=(a%100);
    m2=(b%100);
    m3=(c%100);
    m4=(d%100);
    x=((m1*m2*m3*m4)%100);
    if(x==0||x==1||x==2||x==3||x==3||x==4||x==5||x==6||x==7||x==8||x==9)
        printf("0%lld",x);
    else
        printf("%lld",x);
    return 0;
}
