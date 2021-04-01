#include<stdio.h>
#include<conio.h>
main()
{
    int year,year1,year2,month,month1,month2,date,date1,date2;
    char option;
    do{
    printf("\n**************** WELCOME ******************\n");
    printf(" Enter current year: ");
    scanf("%d",&year1);
    printf(" Enter your year of birth: ");
    scanf("%d",&year2);
    printf(" Enter current month: ");
    scanf("%d",&month1);
    printf(" Enter your month of birth: ");
    scanf("%d",&month2);
    printf(" Enter current date: ");
    scanf("%d",&date1);
    printf(" Enter your date of birth: ");
    scanf("%d",&date2);
    year1=year1-1;
    year=year1-year2;
    printf("\n %d\tyears\n",year);
    month1=month1-1;
    month1=month1+12;
    month=month1-month2;
    printf("\n %d\tmonth\n",month);
    date1=date1+30;
    date=date1-date2;
    printf("\n %d\tday",date);
    printf("\n\n Thank You.\n");
    printf("\n Do you want to know the age of another y/n? ");
    option=getche();
    }while(option=='y');
    getch();
    return 0;

}
