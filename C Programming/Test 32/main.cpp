#include<stdio.h>
#define Pi 3.1416
float area(int r);
main()
{
    int r;
    scanf("%d",&r);
    float a;
    a=area(r);
    printf("Area=%f",a);
}
float area(int r)
{
    float a=Pi*r*r;
    return a;
}
