//sum of total reverse digits
#include<stdio.h>
#include<conio.h>
main()
{
    int n,r,sum=0;
    printf(" Enter Number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        printf(" %d",r);
        n=n/10;
        sum=sum+r;
    }
    printf("\n Sum of reverse digits = %d",sum);
    getch();
    return 0;
}
