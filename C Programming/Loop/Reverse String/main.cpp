#include<stdio.h>
#include<conio.h>
main()
{

    char s[100];
    int i,j=0;
    gets(s);
    for(i=0;s[i]!='\0';i++){
        printf("%c",s[i]);
        j++;
    }
    printf("\n%d\n",j);

    for(i=j;i>=0;i--){
        printf("%c",s[i]);
    }
}
