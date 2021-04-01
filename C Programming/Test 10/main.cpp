//Area of a circle using user-defined function
#include<stdio.h>
#define PI 3.1416
float area(int radious);
main()
{
    int r;//Variable declaration
    float a;//Variable declaration
    scanf("%d",&r);//Taking input/Value
    a=area(r);//Function call
    printf("%f",a);//Output/Result
}
    float area(int rad)//Function definition
{
    return PI*r*r;
}
