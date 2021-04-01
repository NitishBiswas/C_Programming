//To check Even & Odd Number
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d",&a);
    if((a % 2)== 0){
        printf("%d is Even Number.",a);
    }else{
        printf("%d is Odd Number.",a);
    }
  getch();
  return 0;
}

