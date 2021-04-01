//Using array
#include<stdio.h>
#include<conio.h>
main()
{
    int a[8],i;
    for(i=0;i<=7;i++)
    {
        printf("\n a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=7;i>=0;i=i-2)
        printf(" %d",a[i]);
    getch();
    return 0;
}
