#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
    char str[500];
    int i;
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(islower(str[i])){
            printf("%c",toupper(str[i]));
        }else{
            printf("%c",tolower(str[i]));
        }
    }
    return 0;
}
