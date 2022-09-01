#include<stdio.h>
#include<math.h>
int main()
{
    int  A,B;
    float  X,Y,Z;
    scanf("%d %d",&A,&B);
    X=floor((float)A/B);//floor ceil and round er jnno math.h use korte hoi.
    Y=ceil((float)A/B);
    Z=round((float)A/B);

    printf("floor %d / %d = %.0f\n",A,B,X);
    printf("ceil %d / %d = %.0f\n",A,B,Y);
    printf("round %d / %d = %.0f\n",A,B,Z);
    return 0;
}

