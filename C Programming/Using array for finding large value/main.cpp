#include<stdio.h>
#include<conio.h>
main()
{
    int a[5],i,large=0;
    for(i=1;i<=5;i++)
    {
        printf(" %d Numbers: ",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=5;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }

    }
    printf("\n Large number is %d",large);
    getch();
    return 0;
}
