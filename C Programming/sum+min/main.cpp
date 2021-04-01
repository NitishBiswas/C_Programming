#include<stdio.h>
main()
{
    int a[4],i,min,sum=0;
    for(i=0;i<4;i=i+2)
        scanf("%d",&a[i++]);
    min=a[0];
    for(i=0;i<4;i=i+2)
    {
        if(a[i++]< min)
            min=a[i++];
    }
    for(i=0;i<4;i=i+2)
    {
        sum=sum+a[i++];
    }
    printf("min=%d",min);
    printf("sum=%d",sum);
}
