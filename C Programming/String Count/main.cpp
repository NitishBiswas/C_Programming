#include<stdio.h>
#include<conio.h>
//#include<string.h>
main()
{
    int count;
    char *p;
    gets(p);
    while(p!='\0')
    {
        p++;
        count++;
    }

    printf("%d",count);
}
