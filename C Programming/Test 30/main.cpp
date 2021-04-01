#include<stdio.h>
main()
{
   int a,b,c,max,min,diff;
   scanf("%d %d %d",&a,&b,&c);
   if(a>b&&a>c)
    max=a;
   if(b>c&&b>a)
    max=b;
   if(c>a&&c>b)
    max=c;
   if(a<b&&a<c)
    min=a;
   if(b<c&&b<a)
    min=b;
   if(c<a&&c<b)
    min=c;
    diff=max-min;
    printf("Maximum=%d\nMinimum=%d\nDifference=%d",max,min,diff);

}
