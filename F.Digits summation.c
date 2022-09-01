#include<stdio.h>
int main()
{
    long long N,M,X;//kono two digit er sonkake 10 dara vag korle vagfol hisebe tar first digit and vagsesh hisebe tar last digit pao jie
//kono tin digit er sonkake 10 dara vag korle vagfol hisebe first dui digit and vagsesh hisebe last digit pao jie
    scanf("%lld %lld",&N,&M);
    X=N%10+M%10;
    printf("%d",X);
}
