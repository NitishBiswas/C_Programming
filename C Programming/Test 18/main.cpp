//A program to calculate the area of a circle using user defined function
#include<stdio.h>
#include<conio.h>
#define Pi 3.1416
float area(int radius);//Function Declaration
main()
{
    int r;
    char option;
    do{
    printf("\nEnter the value: ");
    scanf("%d",&r);
    float Result;
    Result=area(r);//Function call
    printf("Result= %f\n",Result);
    printf("Do you want to do again y/n? ");
    scanf("%c",&option);
    option=getche();
    }while(option=='y');
    getch();
    return 0;
}
float area(int r)//Function definition
{
    float Result=Pi*r*r;
    return Result;
}
