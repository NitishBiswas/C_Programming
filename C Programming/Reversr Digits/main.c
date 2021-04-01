#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,r,temp,sum=0;
    scanf("%d",&num);
    temp = num;
    while(temp!=0){
        r=temp%10;
        sum = sum*10+r;
        temp = temp/10;
    }
    printf("Reverse = %d",sum);

    return 0;
}
