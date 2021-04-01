//Calculate Factorial Number
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,f=1;
    printf(" Enter number= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=f*i;

    }
       printf(" %d! = %d",n,f);
       getch();
       return 0;

}
