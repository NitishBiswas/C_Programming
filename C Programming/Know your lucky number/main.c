//Know your lucky number
#include<stdio.h>
#include<conio.h>
main()
{
    int i,count=0,choice;
    char a[50];
    printf("\n Enter your name: ");
    gets(a);
    printf("\n If you are male press 1\n");
    printf("           OR\n");
    printf("\n If you are female press 2\n");
    printf(" Press here: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\n\n MR. ");
        for(i=0;a[i]!='\0';i++)
        {
            printf("%c",a[i]);
            count++;
        }
        printf(",\n");
        printf(" Your lucky number is %d",count);
        break;
    case 2:
        printf("\n\n MRS. ");
        for(i=0;a[i]!='\0';i++)
        {
            printf("%c",a[i]);
            count++;
        }
        printf(",\n");
        printf(" Your lucky number is %d",count);
        break;
    default:printf("\n Wrong Input!!\a\n");
    }
    printf("\n\n *** Thank You. ***");
    getch();
    return 0;
}
