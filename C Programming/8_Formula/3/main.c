#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float sum,x;

    for(i=0;i<=10;i++){
        scanf("%f",&x);
        sum= 1 / (1-x);
        printf("%.2f\n",sum);
    }
    return 0;
}
