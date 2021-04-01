#include<stdio.h>
#include<conio.h>
main()
{
    int n,r,sum;
    sum=0;
    printf("Enter Number:");
    scanf("%d",&n);
    while(n>0)
    {

        r=n%10;
        printf(" %d",r);
        n=n/10;
        sum=sum+r;

    }

    printf("\nSum=%d",sum);
    getch();
    return 0;
}
