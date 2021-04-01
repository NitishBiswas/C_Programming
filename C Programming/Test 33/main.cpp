#include<stdio.h>
main()
{
    int i,j,n,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
           j=i*i;
           printf("%d^2 + ",i);
           sum=sum+j;
    }
    printf("%d^2",n);
    sum=sum+n*n;
    printf(" = %d",sum);
}
