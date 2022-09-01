#include<stdio.h>
#define pie  3.141592653
int main()
{
    //Variable declaration
    double radius,Area;
    scanf("%lf",&radius);
    Area=pie*radius*radius;
    printf("%.9lf",Area);
    return 0;

}
