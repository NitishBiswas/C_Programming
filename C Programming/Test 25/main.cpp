#include<stdio.h>
main()
{
    int i,j,m=0,n=0,k;
    for(i=1;i<=100;i++)
    {
        for(j=i;j<=i;j++){
        k=i*j;
        printf("%d ",k);
        m=m+k;
        }
    }
    printf("%d",m);

    for(i=1;i<=100;i++)
    {
        printf("%d ",i);
        n=n+i;
        }
        n=n*n;
    printf("%d",n);
    printf("\n %d",n-m);
}
