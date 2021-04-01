//Sum of total numbers using for loop
#include<stdio.h>
main()
{
    int a,sum;
    int i;
    printf(" Enter Number:");
    scanf("%d",&a);
    sum=0;
    for(i=0;i<=a;i++){
        sum=sum+i;
    }
    printf("Sum of total numbers= %d",sum);
    for(i=0;i<5;i++);//null statement
    {
    printf("\n This loop will not work!\n");
    }
    for(i=0;i<1;i--)//infinite loop
    {
        printf(" DIU ");
    }
return 0;
}
