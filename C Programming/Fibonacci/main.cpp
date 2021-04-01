#include<stdio.h>
#include<conio.h>
main()
{
    int a=0,b=1,c,n;
    printf("Enter number : ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    c=a+b;
    for(; c<=n; ){
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}
