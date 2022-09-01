#include<stdio.h>
int main()
{

    char ch;

    scanf("%c",&ch);
    if(ch>=48&&ch<=57)
        printf("IS DIGIT\n");
    if(ch>=65&&ch<=90)
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    if(ch>=97&&ch<=122)
    {
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    return 0;
}
