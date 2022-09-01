#include<stdio.h>
#include<string.h>
int main ()
{
    int x;
    char a[255],b[255],c[255],d[255];
    scanf("%s %s",&c,&d);
    scanf("%s %s",&a,&b);
    x=strcmp(b,d);
    if(x==0)
        printf("ARE Brothers");
    else
        printf("NOT");
    return 0;
}

