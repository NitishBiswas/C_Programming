#include<stdio.h>
#include<conio.h>
main()
{
    char a[50];
    int i;
    printf(" Enter your name:");
    gets(a);
    printf("\n Thank you.\n\n Thank you.\n\n Thank you.\n\n For gives me a wonderful day.\n\n");
    printf(" I Love You ");
    for(i=0;a[i]!='\0';i++)
    {
        printf("%c",a[i]);
    }
    printf(" Dst...");
    getch();
    return 0;
}
