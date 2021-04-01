#include<stdio.h>
main()
{
    int i,n=11,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i=i+2)
    {
        printf("%d^3 + ",i);
        sum=sum+(i*i*i);
    }
    printf("%d^3",n);
    sum=sum+(n*n*n);
    printf(" = %d",sum);
    return 0;
}
