//Calculate the sum using array to a program
#include<stdio.h>
#include<conio.h>
main()
{
    int a[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        printf("\n a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
        sum=sum+a[i];
    printf("\n Sum=%d",sum);
    getch();
    return 0;
}
