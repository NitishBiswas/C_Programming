#include<stdio.h>
main()
{
    int r,n,sum=0;
    scanf("%d",&n);
    for(  ;n>0;n=n/10)
    {
        r=n%10;
        printf(" %d ",r);
        sum=sum+r;
    }
    printf("\nSum of total digits = %d",sum);
}
