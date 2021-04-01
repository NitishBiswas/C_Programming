#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,choice,Result;
    char a[100];
    printf("\n Enter your name:");
    gets(a);
    printf("\n If you are male press 1\n");
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
    printf(" Welcome to my CU Calculators.");
               break;
    case 2:
        printf("\n Mrs. ");
        for(i=0;a[i]!='\0';i++){
               printf("%c",a[i]);
        }
        printf(",\n");
    printf(" Welcome to my CU Calculators.");
               break;
    default:printf("\n wrong input!\a\n");
    }
    printf("\n\n Press 1 for cm-mm\n");
    printf(" Press 2 for mm-cm\n");
    printf(" Press 3 for m-cm\n");
    printf(" Press 4 for cm-m\n");
    printf(" Press 5 for m-mm\n");
    printf(" Press 6 for mm-m\n");
    printf(" Press 7 for km-m\n");
    printf(" Press 8 for m-km\n");
    printf(" Press 9 for A-mA\n");
    printf(" Press 10 for mA-A\n");
    printf(" what do you want to do press here: ");
    scanf("%d",&choice);
    printf(" Please enter number:");
    scanf("%d",&n);
    switch(choice)
    {
        case 1:Result=n*10;
               printf("\n Answer: %d cm = %d mm\n",n,Result);
               break;
        case 2:
               printf("\n Answer: %d mm = %d/10 cm\n",n,n);
               break;
        case 3:Result=n*100;
               printf("\n Answer: %d m = %d cm\n",n,Result);
               break;
        case 4:
               printf("\n Answer: %d cm = %d/100 m\n",n,n);
               break;
        case 5:Result=n*1000;
               printf("\n Answer: %d m = %d mm\n",n,Result);
               break;
        case 6:
               printf("\n Answer: %d mm = %d/1000 m\n",n,n);
               break;
        case 7:Result=n*1000;
               printf("\n Answer: %d km = %d m\n",n,Result);
               break;
        case 8:
               printf("\n Answer: %d m = %d/1000 km\n",n,n);
               break;
        case 9:Result=n*1000;
               printf("\n Answer: %d A = %d mA\n",n,Result);
               break;
        case 10:
               printf("\n Answer: %d mA = %d/1000 A\n",n,n);
               break;
        default:printf("\n wrong input!\a\n");
    }
    printf("\n *** Thank You. ***\n");
    getch();
    return 0;
}
