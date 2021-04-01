#include <stdio.h>
#include <stdlib.h>

main()
{
    char a[500];
    int i,j=0;
    printf("Enter a string : ");
    gets(a);
    for(i=0;a[i]!='\0';i++){
        j++;
    }

    for(i=j;i>=0;i--){
        printf("%c",a[i]);
    }

    return 0;
}
