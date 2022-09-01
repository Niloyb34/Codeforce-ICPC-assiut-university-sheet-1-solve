#include<stdio.h>
#include<math.h>
int main()
{
        float N;s
        scanf("%f",&N);
        int x = ceil(N);
        if ( x == N)
        {
                printf("int %d\n",(int)N);
        }
        else
        {
                printf("float %d %.3f\n",(int)N,N-(int)N);
        }
        return 0;
}
