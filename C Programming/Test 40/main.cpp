#include<stdio.h>
//#include<conio.h>
//#include<string.h>
main()
{

    char a[100];
    int i,choice;
    printf(" Enter your name:");
    gets(a);
    printf(" If you are male press 1\n");
    printf("           OR\n");
    printf(" If you are female press 2\n");
    printf(" Press here:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\n Mr. ");
        for(i=0;a[i]!='\0';i++){
               printf("%c",a[i]);
        }
        printf(",\n");
    printf("*************Welcome to my CU Calculators.**************");
               break;
    case 2:
        printf("\n Mrs. ");
        for(i=0;a[i]!='\0';i++){
               printf("%c",a[i]);
        }
        printf(",\n");
    printf("*************Welcome to my CU Calculators.**************");
               break;
    default:printf("\n wrong input!\a\n");
    }
}
