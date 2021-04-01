//Square,Triangle,Pyramid,Diamond
#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,rows;
    printf("Enter a Number:");
    scanf("%d",&rows);
    printf("\n");
    for(i=0;i<=rows;i++)
    {
        for(j=0;j<=rows;j++)
            printf("N ");
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<=rows;i++)
    {
        for(j=0;j<=i;j++)
            printf(" N ");
        printf("\n");
    }
    printf("\n\n");
     for(i=rows;i>=0;i--)
    {
        for(j=0;j<=i;j++)
            printf(" N ");
        printf("\n");
    }
    printf("\n\n");
     for(i=0;i<rows;i++)
    {
        for(j=rows-1;j>=i;j--)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("N");
            printf("\n");
    }
    printf("\n\n");
    for(i=0;i<rows;i++)
    {
        for(j=rows-1;j>=i;j--)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("N ");
            printf("\n");
    }
    printf("\n\n");
     for(i=0;i<rows;i++)
    {
        for(j=rows-1;j>=i;j--)
            printf(" ");
        for(j=0;j<=i;j++)
        printf("N ");
        printf("\n");
    }
     for(i=1;i<rows;i++)
    {
        for(j=0;j<=i;j++)
        printf(" ");
        for(j=rows-1;j>=i;j--)
            printf("N ");

        printf("\n");

    }
    getch();
    return 0;
}
