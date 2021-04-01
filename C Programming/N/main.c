#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k;
    for(i=0;i<=1;i++)
    {
    for(j=0;j<=i;j++)
        printf("N ");
    for(j=i;j=0;j++)
        printf("  ");
    for(j=i;j<=1;j++)
        printf("  ");
    for(k=i;k<=i;k++)
        printf("N ");
        printf("\n");
    }
    for(i=0;i<=1;i++)
    {
    for(k=i;k<=i;k++)
        printf("N ");
    for(j=0;j<=i;j++)
        printf("  ");
    for(j=i;j<=1;j++)
        printf("N ");
    for(j=i;j<=1;j++)
        printf("   ");

        printf("\n");
    }
    getch();
    return 0;
}
