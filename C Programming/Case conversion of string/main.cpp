#include<stdio.h>
#include<conio.h>
#include<ctype.h>
main()
{
    char a[500],ch1,ch2;
    int i;
    printf("Enter Name : ");
    gets(a);
    for(i=0; a[i]!='\0';i++){
        ch1=a[i];
        if(islower(ch1)){
            ch2=toupper(ch1);
            printf("%c",ch2);
        }else{
            ch2=tolower(ch1);
            printf("%c",ch2);
        }
    }
    getch();
    return 0;
}
