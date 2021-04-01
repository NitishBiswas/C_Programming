#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    char str[100];
    char rev[100];
    printf("Enter any string: ");
    scanf("%s",str);
    printf("The original string is: %s\n",str);
    for(a=0;str[a]!='\0';a++);
    {
        c=a-1;
    }
    for(b=0;b<=a;b++)
    {
        rev[b]=str[c];
        c--;
    }
    printf("The reverse string is: %s\n",rev);
    printf("\n %d Alphabet.",a);
    getch();
}
