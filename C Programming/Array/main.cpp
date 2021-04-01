#include<stdio.h>
main()
{
    int a[3],i,number;
    for(i=0;i<3;i++)
        scanf(" %d",&a[i]);
    for(i=0;i<3;i++)
        printf(" %d\n",a[i]);
    printf("\n Reverse this numbers:");
    for(i=2;i>=0;i--)
        printf("\n %d",a[i]);

}
