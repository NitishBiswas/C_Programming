#include<stdio.h>
main()
{
    int a,b,c,max;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a>b&&a>c)
        max=a;
    if(b>a&&b>c)
        max=b;
    if(c>a&&c>b)
         max=c;
        printf("max=%d",max);
        return 0;


}
