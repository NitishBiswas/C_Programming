#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, sum = 11.29144;
    while(1){
        scanf("%f",&n);
        if(n==-1)
            break;
        n=2*sqrt(1+(n/10)*(n/10));
        printf("%f\n",n);
        sum = sum + n;
    }
    printf("%f\n",sum);
    return 0;
}
