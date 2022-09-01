#include<stdio.h>
int main()
{
    int A,B;
    char C;
    scanf("%d %c %d",&A,&C,&B);
    if(A>B && C=='>')
        printf("Right");
    else if(A<B && C=='<')
        printf("Right");
    else if(A==B && C=='=')
        printf("Right");
    else
        printf("Wrong");
    return 0;
}

