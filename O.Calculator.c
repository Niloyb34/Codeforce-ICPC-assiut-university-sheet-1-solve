#include<stdio.h>
int main ()
{
    int a,b,res;
    char c;
    scanf("%d%c%d",&a,&c,&b);
    switch(c)
    {
    case'+':
        res=a+b;
        printf("%d",res);
        break;
    case'-':
        res=a-b;
        printf("%d",res);
        break;
    case'*':
        res=a*b;
        printf("%d",res);
        break;
    case'/':
        res=a/b;
        printf("%d",res);
        break;
    }
    return 0;
}
