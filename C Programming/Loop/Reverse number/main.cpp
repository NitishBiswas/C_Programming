#include<stdio.h>
#include<conio.h>
main()
{
    int i=0,n,r;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(;n>0;){
        r=n%10;
        printf("%d",r);
        i++;
        n=n/10;
    }
    printf("\n%d",i);
    getch();
}
