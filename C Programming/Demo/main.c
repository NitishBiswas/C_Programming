#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float x1,x2;
    scanf("%f %f",&x1,&x2);
    float x4,x5,x3 = (x1 / x2);
    x4 = ((x3*x3*x3)+1);
    x5 = sqrt(x4);
    printf("%f",x5*2);
    return 0;
}
