#include<stdio.h>
#define Pi 3.1416
float area(int r);
main()
{
    int r;
    scanf("%d",&r);
    float a=area(r);
    printf("%f",a);
}
float area(int r)
{
    float a;
    return a=Pi*r*r;
}
