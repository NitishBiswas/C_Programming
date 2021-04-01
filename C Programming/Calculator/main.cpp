#include<stdio.h>
#include<conio.h>
main()
{
    int option;
    printf("-------------------- Welcome To My Calculator -------------------\n");
    printf("\nFor addition press 1 ");
    printf("\nFor subtraction press 2 ");
    printf("\nFor multiplication press 3 ");
    printf("\nFor division press 4 ");
    printf("\nEnter what do you want to do : ");
    scanf("%d",&option);
    switch(option){
    case 1:
        int a,b,sum;
        printf("\nEnter first number : ");
        scanf("%d",&a);
        printf("\nEnter second number : ");
        scanf("%d",&b);
        sum=a+b;
        printf("\n\aResult = %d",sum);
        break;
    case 2:
        int c,d,sub;
        printf("\nEnter first number : ");
        scanf("%d",&c);
        printf("\nEnter second number : ");
        scanf("%d",&d);
        sub=c-d;
        printf("\n\aResult = %d",sub);
        break;
    case 3:
        int e,f,multi;
        printf("\nEnter first number : ");
        scanf("%d",&e);
        printf("\nEnter second number : ");
        scanf("%d",&f);
        multi=e*f;
        printf("\n\aResult = %d",multi);
        break;
    case 4:
        int g,h;
        float div;
        printf("\nEnter first number : ");
        scanf("%d",&g);
        printf("\nEnter second number : ");
        scanf("%d",&h);
        div=g/h;
        printf("\n\aResult = %.2f",div);
        break;
    default:
        printf("\n\n\aWrong Input !!!\n");
    }
    getch();
    return 0;
}
