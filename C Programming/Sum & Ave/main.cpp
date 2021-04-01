//Sum of total numbers & Average
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,sum=0;
    float ave;
    printf("Enter Number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf(" %d\t",i);
        sum=sum+i;
    }
    printf("\n\n Sum of total Numbers= %d\n",sum);
    ave=sum/n;
    printf("\n Average of the total Numbers= %f\n",ave);
    getch();
    return 0;
}
