#include<stdio.h>
#include<math.h>
int main ()
{
    int Number,FirstDigit,Count;

    scanf("%d",&Number);

    Count=log10(Number);

    FirstDigit=Number/pow(10,Count);
    if(FirstDigit%2==0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;
}

