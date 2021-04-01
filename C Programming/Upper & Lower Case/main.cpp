#include<stdio.h>
#include<ctype.h>
main()
{
    char c;
    scanf("%c",&c);
    if(islower(c)){
        printf("%c is small later",c);
    }else if(isupper(c)){
        printf("%c is capital later",c);
    }else{
        printf("Wrong Input !");
    }
}
