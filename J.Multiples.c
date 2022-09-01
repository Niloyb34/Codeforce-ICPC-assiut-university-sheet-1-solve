//Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples"
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%b==0||b%a==0)
        printf("Multiples");
    else
        printf("No Multiples");
    return 0;


}
