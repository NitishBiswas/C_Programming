#include<stdio.h>
main()
{
    int i,count=0;
    char a[100];
    scanf("%s",&a);
    //gets(a);
    for(i=0;a[i]!='\0';i++)
        count++;
    printf("%d",count);
}
