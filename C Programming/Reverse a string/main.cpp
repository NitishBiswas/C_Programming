#include<stdio.h>
main()
{
    int i,j,k;
    char a[50];
    scanf("%s",&a);
    //gets(a);
    for(i=0;a[i]!='\0';i++)
        k=i;
    printf("Reverse string= ");
    for(j=k;j>=0;j--)
        printf("%c",a[j]);
    return 0;
}
