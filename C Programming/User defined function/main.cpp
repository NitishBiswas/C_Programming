#include<stdio.h>
#include<conio.h>
#define Pi 3.1416
float area(int radius);
main()
{
    int r;
    printf("Enter the value: ");
    scanf("%d",&r);
    float Result;
    Result=area(r);
    printf("Result=%f",Result);
}
float area(int r)
{
    float Result=Pi*r*r;
    return Result;
}
