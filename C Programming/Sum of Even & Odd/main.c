//The sum of total even & odd numbers in separately
#include<stdio.h>
#include<conio.h>
main()
{
    int i,a,Even=0,Odd=0;
    printf(" Enter Number:");
    scanf("%d",&a);
    printf("\n Even Number:");
    for(i=2;i<=a;i=i+2){
       printf(" %d ",i);
       Even=Even+i;
    }
       printf("\n\n Sum of total Even=%d\n",Even);
       {
           printf("\n Odd Number:");
         for(i=1;i<=a;i=i+2){
       printf(" %d ",i);
       Odd=Odd+i;
    }
       printf("\n\n Sum of total Odd=%d\n",Odd);
       }
       getch();
       return 0;

}
