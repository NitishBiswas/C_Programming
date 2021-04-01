//Identify the minimum value using array in a program
#include<stdio.h>
#include<conio.h>
main()
{
    int a[7],i,min;
    for(i=0;i<=6;i++)
    {
        printf("\n a[%d]=",i);
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<=6;i++)
    {
       if(a[i]<min)
            min=a[i];
    }
    printf("\n Minimum = %d",min);
    getch();
    return 0;

}
