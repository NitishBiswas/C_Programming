#include<stdio.h>
main()
{
    char a[500];
    int i,k,count=0;
    gets(a);
    for(i=0;a[i]!='\0';i++){
        k=i;
        count++;
    }
    for(i=k;i>=0;i--){
        printf("%c",a[i]);
    }
    printf("\n %d Alphabet",count);
}
