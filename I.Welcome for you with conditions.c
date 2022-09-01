//Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No"
#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(A>=B)
        printf("Yes");
    else
        printf("No");
    return 0;
}
