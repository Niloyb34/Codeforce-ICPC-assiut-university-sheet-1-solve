#include<stdio.h>
int main()//ascending mane choto theke boro
{
    int a,b,c;//3 -2 1
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)//1st if
    {
        if(a>c)//2nd if
        {
            if(b>c)//3rd if
            {
                printf("%d\n%d\n%d\n",c,b,a);
                printf("\n%d\n%d\n%d\n",a,b,c);
            }

            else//when 3rd if false
            {
                printf("%d\n%d\n%d\n",b,c,a);
                printf("\n%d\n%d\n%d\n",a,b,c);
            }
        }

        else//2nd if false hole
        {

            printf("%d\n%d\n%d\n",b,a,c);
            printf("\n%d\n%d\n%d\n",a,b,c);
        }
    }

    else//1st if false hole
    {

        if(b>c)//4th if/*aikane a>c er jiegie c>a deoa jabe na karon 1st if false mane b>a hbe and abar aikane c>a hole tkon abar b and c er modde conflict chole asbe*/
        {
            if(a>c)//5th if
            {
                printf("%d\n%d\n%d\n",c,a,b);
                printf("\n%d\n%d\n%d\n",a,b,c);
            }
            else
            {


                printf("%d\n%d\n%d\n",a,c,b);
                printf("\n%d\n%d\n%d\n",a,b,c);
            }
        }

        else
        {


            printf("%d\n%d\n%d\n",a,b,c);
            printf("\n%d\n%d\n%d\n",a,b,c);
        }
    }

//uporer if gular condition  mone rakhte just mone rakbe ab(a>b) ase(a>c) bc(b>c) te kintu bc(b>c) ase ac(a>c) te
    return 0;


}
