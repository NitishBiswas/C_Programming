#include<stdio.h>
#include<conio.h>
main()
{
    char str[500];
    int i,l;
    printf("Enter any string : ");
    gets(str);
    l=strlen(str);
    for(i=0;i<l/2;i++){
        if(str[i]!=str[l-1-i]){
            printf("Not Palindrome");
            goto diu;
        }
    }
    printf("Palindrome");
    diu:
    getch();
}
