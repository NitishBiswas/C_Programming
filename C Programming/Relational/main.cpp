#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,max;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    printf("c=");
    scanf("%d",&c);
    if(a>b){
        max=a;
    }else{
        max=b;
    if(b>c){
        max=b;
    }else{
        max=c;
    if(a>c){
        max=a;
    }else{
        max=c;
    }
    }
    }
    printf("max=%d",max);
    getch();
    return 0;
}