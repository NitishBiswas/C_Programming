#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    char option;
    do{
    scanf("%d",&a);
    if(a>45){
        printf(" %d is greater than 45\n\n",a);
    }else{
        if(a==20){
            printf(" %d is equals to 20\n\n",a);
        }else{
            printf(" %d is greater than 20\n\n",a);
        }
    }
    printf(" do you want to continue y/n? ");
    option=getche();
    }while(option=='y');

    getch();
    return 0;
}
